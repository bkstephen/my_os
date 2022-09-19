#include "uart.h"
#include "print.h"
#include "debug.h"

void KMain(void)
{
    uint64_t value = 0x123456789ABCDEF;

    init_uart();
    printk("Hello world! \r\n");
    printk("Test number %d\r\n", value);
    printk("Test number %x\r\n", value);

    ASSERT(0);

    while (1) {
        ;
    }
}