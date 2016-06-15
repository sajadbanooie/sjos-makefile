#ifndef _KERNEL_ATA_PIO_H
#define _KERNEL_ATA_PIO_H

#include <stddef.h>

struct ata_device{
	uint8_t type;
	uint32_t size;
	uint8_t status;
};
struct ata_device ata_devices[4];
uint8_t number_of_devices;
void ata_init(void);

#endif