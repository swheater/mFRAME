@
@ Copyright (c) 2012-2013, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
@

	.text

boot:
	LDR	SP,=boot_stack
	BL	mFRAME_run
boot_wait:
	B	boot_wait

	.ltorg

	.align	4
	.space	4096
boot_stack:

	.end
