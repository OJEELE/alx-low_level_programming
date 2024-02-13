#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *message, const char *filename) {
    dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
    exit(code);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        error_exit(98, "Can't read from file", file_from);
    }

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1) {
        close(fd_from);
        error_exit(99, "Can't write to file", file_to);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytesRead, bytesWritten;

    while ((bytesRead = read(fd_from, buffer, sizeof(buffer))) > 0) {
        bytesWritten = write(fd_to, buffer, bytesRead);
        if (bytesWritten != bytesRead) {
            close(fd_from);
            close(fd_to);
            error_exit(99, "Can't write to file", file_to);
        }
    }

    if (bytesRead == -1) {
        close(fd_from);
        close(fd_to);
        error_exit(98, "Can't read from file", file_from);
    }

    if (close(fd_from) == -1) {
        error_exit(100, "Can't close fd", file_from);
    }

    if (close(fd_to) == -1) {
        error_exit(100, "Can't close fd", file_to);
    }

    return 0;
}

