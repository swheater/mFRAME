#
# Copyright (c) 2013, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

AS      = arm-none-eabi-as
ASFLAGS = 
RM      = rm

OBJS = Boot.o

all: $(OBJS)

.s.o:
	$(AS) $(ASFLAGS) -o $@ $<

clean:
	$(RM) -f *~ *.o
