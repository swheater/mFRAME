#
# Copyright (c) 2013, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

CC      = arm-none-eabi-gcc
CCFLAGS = -Wall -I../../Headers
RM      = make
RM      = rm

OBJS = Run.o

all: $(OBJS)
	$(MAKE) -e -C RaspPi all

.c.o:
	$(CC) $(CCFLAGS) -c $<

clean:
	$(MAKE) -e -C RaspPi clean
	$(RM) -f *~ *.o
