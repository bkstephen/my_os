/*
*  kernel.c
*/

void write_string(const char *string )
{
    volatile char *video = (volatile char*)0xB8000;
    while( *string != 0 )
    {
        *video++ = *string++;
        *video++ = 0x04;
    }
}

void kmain(void)
{
	write_string("Hello Stefanos, from the kernel\n");
	while (1){}
	return;
}
