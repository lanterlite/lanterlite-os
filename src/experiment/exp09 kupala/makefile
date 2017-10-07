main: main.o
	ld -o main main.o

main.o: main.asm
	as -o main.o main.s
#	nasm -f elf main.asm	

clean:
	rm *.o main