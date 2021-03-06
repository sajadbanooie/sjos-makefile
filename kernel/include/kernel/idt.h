#ifndef _KERNEL_IDT_H
#define _KERNEL_IDT_H

#include <stddef.h>

struct idt_entry{
	uint16_t base_low;
	uint16_t cs_selector;
	uint8_t zero;
	uint8_t flags;
	uint16_t base_high;
} __attribute__((packed));
struct idt_entry idt[256];
struct idt_ptr
{
    uint16_t limit;
    uint32_t base;
} __attribute__((packed));
struct idt_ptr idtp;
void add_idt_entry(int n,uint32_t base,uint16_t cs_selector,uint8_t flags);
void init_idt(void);


#endif
