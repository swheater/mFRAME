#
# Copyright (c) 2013, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

LD      = arm-none-eabi-ld
LDFLAGS = 
OBJCOPY = arm-none-eabi-objcopy
SIZE    = arm-none-eabi-size
MAKE    = make
RM      = rm

OBJS = Source/Boot/Boot.o

all: mFRAME.img

$(OBJS):
	$(MAKE) -C Headers all
	$(MAKE) -C Source all

mFRAME.elf mFRAME.map: mFRAME.lds $(OBJS)
	$(LD) $(LDFLAGS) -nostdlib -T mFRAME.lds -o mFRAME.elf -Map mFRAME.map $(OBJS)
	$(SIZE) mFRAME.elf

mFRAME.img: mFRAME.elf
	$(OBJCOPY) -O binary mFRAME.elf mFRAME.img

clean:
	$(MAKE) -C Headers clean
	$(MAKE) -C Source clean
	$(RM) -f *~ *.elf *.img *.map
