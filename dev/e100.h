#if LAB >= 5
#ifndef PIOS_KERN_E100_H
#define PIOS_KERN_E100_H

struct pci_func;

extern bool e100_present;
extern uint8_t e100_irq;

int  e100_attach(struct pci_func *pcif);
int  e100_tx(void *hdr, int hlen, void *body, int blen);
void e100_intr(void);

#endif	// PIOS_KERN_E100_H
#endif  // LAB >= 5
