#include "uart.h"
#include "print.h"
#include "debug.h"
#include "lib.h"

void KMain(void)
{    
    uint64_t value = 0x123456789ABCDEF;

    init_uart();

    printk("   _____ _        __                        ____   _____ \r\n");
    printk("  / ____| |      / _|                      / __ \\ / ____|\r\n");
    printk(" | (___ | |_ ___| |_ __ _ _ __   ___  ___ | |  | | (___  \r\n");
    printk("  \\___ \\| __/ _ \\  _/ _` | '_ \\ / _ \\/ __|| |  | |\\___ \\ \r\n");
    printk("  ____) | ||  __/ || (_| | | | | (_) \\__ \\| |__| |____) |\r\n");
    printk(" |_____/ \\__\\___|_| \\__,_|_| |_|\\___/|___/ \\____/|_____/ \r\n");
    printk("                                       ______            \r\n");
    printk("                                      |______|           \r\n");

    // printk("Hello world! \r\n");
    // printk("Test number %d\r\n", value);
    // printk("Test number %x\r\n", value);
    printk("We are at EL %u\r\n", get_el());

    ASSERT(0);

    while (1) {
        ;
    }
}