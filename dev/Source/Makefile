#
# Copyright (c) 2013, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

MAKE    = make
RM      = rm

all:
	$(MAKE) -C Boot all
	$(MAKE) -C mFRAME all

clean:
	$(MAKE) -C Boot clean
	$(MAKE) -C mFRAME clean
	$(RM) -f *~ *.elf *.img *.map
