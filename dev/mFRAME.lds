/*
 * Copyright (c) 2013, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

EXTERN(bssSectionStart bssSectionEnd)

SECTIONS
{
	. = 0x00008000;

	.text :
	{
         Source/Boot/Boot.o (.text);
         * (.text);
    }
	.rodata :
	{
		* (.rodata);
	}
	.data :
	{
		* (.data);
	}
	.bss :
	{
		bssSectionStart = .;
		* (.bss);
		bssSectionEnd = .;
	}
}
