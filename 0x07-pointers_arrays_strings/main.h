#ifndef FILE_MAIN
#define FILE_MAIN

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

int _putchar(char c);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);

#endif