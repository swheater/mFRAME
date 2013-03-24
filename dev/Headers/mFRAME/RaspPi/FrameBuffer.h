#ifndef _MFRAME_RASPPI_FRAMEBUFFER_H
#define _MFRAME_RASPPI_FRAMEBUFFER_H 1

/*
 * Copyright (c) 2013, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#define MAILBOX_BASEADDR (0x2000B880)
#define READ_OFFSET      (0x00)
#define PEAK_OFFSET      (0x10)
#define SENDER_OFFSET    (0x14)
#define STATUS_OFFSET    (0x18)
#define CONFIG_OFFSET    (0x1C)
#define WRITE_OFFSET     (0x20)

#define FRAMEBUFFER_CHANNEL (1)

struct FrameBufferDescriptor
{
    unsigned int width;
    unsigned int height;
    unsigned int virtualWidth;
    unsigned int virtualHeight;
    unsigned int pitch;
    unsigned int depth;
    unsigned int xOffset;
    unsigned int yOffset;
    char         *buffer;
    unsigned int size;
}  __attribute__((aligned(16)));

#endif
