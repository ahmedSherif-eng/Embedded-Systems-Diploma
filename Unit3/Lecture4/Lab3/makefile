# Copyrights @AhmedSherif
#Dependency $<
#Target $@
CC = arm-none-eabi-
CFLAGS = -mcpu=cortex-m4 -mthumb -gdwarf-2  -g
INCS = -I .
LIBS= 
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
ASRC = $(wildcard *.s)
ASOBJ = $(ASRC:.s=.o)
Project_Name=learn-in-depth-cortex-M4



$(Project_Name).hex: $(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@

%.o: %.c
	$(CC)gcc.exe -c  $(CFLAGS) $(INCS) $< -o $@

%.o: %.s
	$(CC)as.exe   $(CFLAGS) $< -o $@

$(Project_Name).elf: $(ASOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld  $(LIBS) $(OBJ) $(ASOBJ)  -o $@ -Map Map_file.map
	cp $(Project_Name).elf  $(Project_Name).axf
clean:
	rm *.o *.bin *.elf
	@echo "Everything clean"