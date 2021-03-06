#ifndef _KERNEL_PORTIO_H
#define _KERNEL_PORTIO_H

#include <stddef.h>
extern uint8_t read_port(uint32_t);
extern uint16_t read_port_w(uint32_t);
extern uint32_t read_port_d(uint32_t);
extern void write_port(uint32_t,uint8_t);
extern void write_port_w(uint32_t,uint16_t);
extern void write_port_d(uint32_t,uint32_t);
#endif
