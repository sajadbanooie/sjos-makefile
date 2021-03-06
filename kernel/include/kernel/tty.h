#ifndef _KERNEL_TTY_H
#define _KERNEL_TTY_H

#include <stddef.h>

void terminal_initialize(void);
void terminal_putchar(char c);
void terminal_write(const char* data, size_t size);
void terminal_writestring(const char* data);
void log_info(const char* data, const char* tag);
void log_error(const char* data, const char* tag);
void error(const char* data);
void ok(void);
void fail(void);
int printk(const char *restrict format, ...);

#endif
