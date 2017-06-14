
#ifdef EMBEDDED_ROM

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <cwchar>
#include "io.h"
#include "error.h"

void fs_init() {
}

FileHandle* file_open(const char* filename, const char* flags) {
    return NULL;
}

void file_close(FileHandle* fileHandle) {
}

void file_read(void* dest, int bs, int size, FileHandle* fileHandle) {
}

void file_write(const void* src, int bs, int size, FileHandle* fileHandle) {
}

void file_gets(char* buffer, int bufferSize, FileHandle* fileHandle) {
}

void file_putc(char c, FileHandle* fileHandle) {
}

int file_tell(FileHandle* fileHandle) {
    return 0;
}

void file_seek(FileHandle* fileHandle, int pos, int origin) {
}

int file_getSize(FileHandle* fileHandle) {
    return 0;
}

void file_setSize(FileHandle* fileHandle, size_t size) {
}

void file_printf(FileHandle* fileHandle, const char* format, ...) {
}

bool file_exists(const char* filename) {
    return false;
}

void fs_deleteFile(const char* filename) {
}

struct dirent* fs_readdir() {
    return NULL;
}

void fs_getcwd(char* dest, size_t maxLen) {
}

void fs_chdir(const char* s) {
}

#endif
