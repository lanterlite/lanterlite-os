void printf(char* str)
{
	unsigned short* VideoMemory = (unsigned short*)0xb8000;
	for (int i = 0; str[i] != '\0'; ++i)
		VideoMemory[i] = (VideoMemory[i] &0xFF00) | str[i];
}

// 'extern "C"' need for keep name "kernelMain" when compile to .o file
extern "C" void kernelMain(void *multiboot_structure, unsigned int magicnumber)
{
	printf("Lantern OS");
	while(1);
}

// extern "C" void main(void *multiboot_structure, unsigned int magicnumber)
// {
// 	printf("Lantern OS");
// 	while(1);
// 	return 0;
// }