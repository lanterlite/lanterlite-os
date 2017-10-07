void putchar(char c);
void puts(const char* s);

char* hello = "Hello World!";

void main(void) {
	puts(hello);
	while(1==1){}
}

void puts(const char* s){
	while(*s != 0){
		putchar(*s);
		s++;
	}
}

void putchar(char c){
	__asm{
		mov ah, 0Eh
		mov a1, [c]
		mov bh, 0
		mov b1, 0Fh
		int 10h
	}
}