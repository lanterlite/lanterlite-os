# LDPARAMS = -melf_i386

GPPPARAMS = -m32 -fno-use-cxa-atexit -nostdlib -fno-builtin -fno-rtti -fno-exceptions -fno-leading-underscore -Wno-write-strings
# GPPPARAMS = 
ASPARAMS = --32
# ASPARAMS = --64
LDPARAMS = -mi386pep
objects = loader.o kernel.o

%.o: %.cpp
	g++64 $(GPPPARAMS) -o $@ -c $<

# %.exe: %.cpp
# 	gcc -xc++ -lstdc++ -shared-libgcc $(GPPPARAMS) -o $@ -c $<

%.exe: %.cpp
	g++64 $(GPPPARAMS) -o $@ -c $<

%.o: %.s
	as $(ASPARAMS) -o $@ $<

mykernel.bin: linker.ld $(objects)
	ld $(LDPARAMS) -T $< -o $@ $(objects)

# mykernel.flp: linker.ld $(objects)
# 	ld $(LDPARAMS) -T $< -o $@ $(objects)

install: mykernel.bin
	cp $< /boot/mykernel.bin

clean :
	rm *.bin *.o *.exe

#g++64 -m32 kernel.c -o kernel.exe 