#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to name of file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed; or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    char *buffer = (char *) malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL) {
        fclose(fp);
        return 0;
    }

    size_t bytes_read = fread(buffer, sizeof(char), letters, fp);
    if (bytes_read == 0) {
        fclose(fp);
        free(buffer);
        return 0;
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read) {
        fclose(fp);
        free(buffer);
        return 0;
    }

    fclose(fp);
    free(buffer);
    return bytes_written;
}
