all: main.exe

main.exe: main.o
	gcc -o main.exe main.o

main.o: main.c
	gcc -c main.c
     
clean:
	del -f main.o main.exe

	#$(CURDIR)
OS := $(shell uname)
exp:
	@echo $(shell uname)