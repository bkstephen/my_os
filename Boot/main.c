#include "uart.h"
#include "print.h"
#include "debug.h"
#include "lib.h"
#include "handler.h"

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
    
    printk("We are at EL %u\r\n", get_el());

    // char *p = (char*)0xffff000000000000;
    // *p = 1;
    //printk("This should be printed \r\n");

    //init_timer();
    init_interrupt_controller();
    enable_irq();

    //ASSERT(0);

    while (1) {
        ;
    }
}