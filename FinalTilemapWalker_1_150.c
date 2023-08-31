#include <types.h> 
/*
const UINT8 Walker_DirectTest[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x01, 0x07, 0x07, 0x07, 0x07,
0x00, 0x00, 0x0C, 0x00, 0x1C, 0x1C, 0x3E, 0x1C, 0xFC, 0xF8, 0xF8, 0xF8, 0xF0, 0xE0, 0xF0, 0xE0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0F, 0x07, 0x0F, 0x0F, 0x1F, 0x1E, 0x3E, 0x1C, 0x3E, 0x3E, 0x7F, 0x3E, 0xFF, 0x7F, 0xF7, 0xE3,
0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
0x0F, 0x0F, 0x1F, 0x1E, 0x3E, 0x3C, 0x3E, 0x3C, 0x7C, 0x3C, 0xFE, 0x7E, 0xFE, 0xFE, 0xEF, 0xC6,
0x01, 0x01, 0x03, 0x03, 0x07, 0x06, 0x0E, 0x04, 0x1C, 0x08, 0x18, 0x10, 0x38, 0x10, 0x38, 0x38,
0xE3, 0xC3, 0x83, 0x81, 0x07, 0x03, 0x07, 0x06, 0x0E, 0x04, 0x0C, 0x08, 0x18, 0x08, 0x1C, 0x1C,
};
*/
const UINT8 WALKER_TILEMAP[][9] = {{
    0x00, 0x01, 0x02,
    0x00, 0x0B, 0x0C,
    0x14, 0x15, 0x16,
},{
    0x00, 0x03, 0x04,
    0x0D, 0x0E, 0x0F,
    0x17, 0x18, 0x19,
},{
    0x00, 0x05, 0x06,
    0x0D, 0x10, 0x11,
    0x1A, 0x1B, 0x00,
},{
    0x00, 0x07, 0x08,
    0x0D, 0x12, 0x11,
    0x1C, 0x1D, 0x00,
},{
    0x00, 0x09, 0x0A,
    0x0D, 0x13, 0x11,
    0x1E, 0x1F, 0x00,
},{
    0x00, 0x20, 0x21,
    0x0D, 0x26, 0x27,
    0x2E, 0x2F, 0x00,
},{
    0x00, 0x20, 0x22,
    0x00, 0x28, 0x27,
    0x30, 0x31, 0x00,
},{
    0x00, 0x20, 0x23,
    0x00, 0x29, 0x2A,
    0x32, 0x33, 0x00,
},{
    0x00, 0x20, 0x24,
    0x00, 0x2B, 0x2C,
    0x34, 0x35, 0x00,
},{
    0x00, 0x20, 0x25,
    0x00, 0x2D, 0x2C,
    0x36, 0x37, 0x00,
},{
    0x00, 0x38, 0x39,
    0x00, 0x41, 0x2C,
    0x47, 0x48, 0x00,
},{
    0x00, 0x3A, 0x3B,
    0x00, 0x42, 0x2C,
    0x49, 0x4A, 0x00,
},{
    0x00, 0x3C, 0x3D,
    0x00, 0x43, 0x00,
    0x4B, 0x4C, 0x00,
},{
    0x00, 0x3E, 0x3F,
    0x00, 0x44, 0x00,
    0x4D, 0x4E, 0x00,
},{
    0x00, 0x3E, 0x40,
    0x00, 0x45, 0x46,
    0x4F, 0x50, 0x51,
},{
    0x00, 0x52, 0x53,
    0x00, 0x58, 0x59,
    0x61, 0x62, 0x63,
},{
    0x00, 0x52, 0x54,
    0x00, 0x5A, 0x5B,
    0x64, 0x65, 0x63,
},{
    0x00, 0x3C, 0x55,
    0x00, 0x5C, 0x5D,
    0x66, 0x67, 0x68,
},{
    0x00, 0x3A, 0x56,
    0x00, 0x5E, 0x5D,
    0x69, 0x6A, 0x6B,
},{
    0x00, 0x3A, 0x57,
    0x00, 0x5F, 0x60,
    0x6C, 0x6D, 0x6E,
},{
    0x00, 0x38, 0x6F,
    0x00, 0x76, 0x77,
    0x80, 0x81, 0x82,
},{
    0x00, 0x70, 0x71,
    0x00, 0x78, 0x79,
    0x83, 0x84, 0x85,
},{
    0x00, 0x70, 0x72,
    0x0D, 0x7A, 0x7B,
    0x86, 0x87, 0x88,
},{
    0x00, 0x05, 0x73,
    0x0D, 0x7C, 0x7D,
    0x89, 0x8A, 0x8B,
},{
    0x00, 0x74, 0x75,
    0x0D, 0x7E, 0x7F,
    0x8C, 0x8D, 0x8E,
},{
    0x00, 0x01, 0x02,
    0x09, 0x0A, 0x0B,
    0x18, 0x19, 0x1A,
},{
    0x00, 0x01, 0x03,
    0x0C, 0x0D, 0x0E,
    0x1B, 0x1C, 0x1D,
},{
    0x00, 0x01, 0x04,
    0x0F, 0x10, 0x11,
    0x1E, 0x1F, 0x20,
},{
    0x00, 0x05, 0x06,
    0x12, 0x13, 0x14,
    0x21, 0x22, 0x00,
},{
    0x00, 0x07, 0x08,
    0x15, 0x16, 0x17,
    0x23, 0x24, 0x00,
},{
    0x00, 0x25, 0x26,
    0x2E, 0x2F, 0x17,
    0x36, 0x37, 0x00,
},{
    0x00, 0x25, 0x27,
    0x2E, 0x30, 0x17,
    0x38, 0x39, 0x00,
},{
    0x00, 0x28, 0x29,
    0x12, 0x31, 0x32,
    0x3A, 0x3B, 0x00,
},{
    0x00, 0x2A, 0x2B,
    0x09, 0x33, 0x32,
    0x3C, 0x3D, 0x00,
},{
    0x00, 0x2C, 0x2D,
    0x34, 0x35, 0x32,
    0x3E, 0x3F, 0x00,
},{
    0x00, 0x40, 0x41,
    0x00, 0x4A, 0x4B,
    0x51, 0x52, 0x00,
},{
    0x00, 0x42, 0x43,
    0x00, 0x4C, 0x4D,
    0x53, 0x54, 0x00,
},{
    0x00, 0x44, 0x45,
    0x00, 0x4E, 0x00,
    0x55, 0x56, 0x00,
},{
    0x00, 0x46, 0x47,
    0x00, 0x4F, 0x00,
    0x57, 0x58, 0x00,
},{
    0x00, 0x48, 0x49,
    0x00, 0x50, 0x00,
    0x59, 0x5A, 0x00,
},{
    0x00, 0x5B, 0x5C,
    0x00, 0x65, 0x00,
    0x6D, 0x6E, 0x00,
},{
    0x00, 0x5D, 0x5E,
    0x00, 0x66, 0x00,
    0x6F, 0x70, 0x00,
},{
    0x00, 0x5F, 0x60,
    0x00, 0x67, 0x68,
    0x71, 0x72, 0x00,
},{
    0x00, 0x61, 0x62,
    0x00, 0x69, 0x6A,
    0x73, 0x74, 0x4D,
},{
    0x00, 0x63, 0x64,
    0x00, 0x6B, 0x6C,
    0x75, 0x76, 0x4D,
},{
    0x00, 0x63, 0x64,
    0x00, 0x7D, 0x7E,
    0x86, 0x87, 0x20,
},{
    0x00, 0x77, 0x78,
    0x00, 0x7F, 0x80,
    0x88, 0x89, 0x4D,
},{
    0x00, 0x77, 0x79,
    0x00, 0x81, 0x68,
    0x8A, 0x8B, 0x4D,
},{
    0x00, 0x7A, 0x7B,
    0x00, 0x82, 0x83,
    0x8C, 0x8D, 0x4D,
},{
    0x00, 0x77, 0x7C,
    0x34, 0x84, 0x85,
    0x8E, 0x8F, 0x4D,
},{
    0x00, 0x01, 0x02,
    0x09, 0x0A, 0x0B,
    0x14, 0x15, 0x16,
},{
    0x00, 0x03, 0x04,
    0x09, 0x0C, 0x0D,
    0x17, 0x18, 0x16,
},{
    0x00, 0x05, 0x06,
    0x09, 0x0E, 0x0F,
    0x19, 0x1A, 0x00,
},{
    0x00, 0x05, 0x07,
    0x09, 0x10, 0x11,
    0x1B, 0x1C, 0x00,
},{
    0x00, 0x05, 0x08,
    0x00, 0x12, 0x13,
    0x1D, 0x1E, 0x00,
},{
    0x00, 0x05, 0x1F,
    0x09, 0x27, 0x13,
    0x2C, 0x2D, 0x00,
},{
    0x00, 0x05, 0x20,
    0x00, 0x27, 0x11,
    0x2E, 0x2F, 0x00,
},{
    0x00, 0x21, 0x22,
    0x00, 0x28, 0x11,
    0x30, 0x31, 0x00,
},{
    0x00, 0x23, 0x24,
    0x00, 0x29, 0x0D,
    0x32, 0x33, 0x00,
},{
    0x00, 0x25, 0x26,
    0x00, 0x2A, 0x2B,
    0x34, 0x35, 0x00,
},{
    0x00, 0x36, 0x37,
    0x00, 0x3F, 0x16,
    0x44, 0x45, 0x00,
},{
    0x00, 0x38, 0x39,
    0x00, 0x40, 0x00,
    0x46, 0x47, 0x00,
},{
    0x00, 0x3A, 0x3B,
    0x00, 0x41, 0x00,
    0x48, 0x49, 0x00,
},{
    0x00, 0x3C, 0x3D,
    0x00, 0x42, 0x00,
    0x4A, 0x4B, 0x00,
},{
    0x00, 0x3C, 0x3E,
    0x00, 0x43, 0x00,
    0x4C, 0x4D, 0x00,
},{
    0x00, 0x3C, 0x4E,
    0x00, 0x54, 0x55,
    0x5E, 0x5F, 0x00,
},{
    0x00, 0x3A, 0x4F,
    0x00, 0x56, 0x57,
    0x60, 0x61, 0x00,
},{
    0x00, 0x36, 0x50,
    0x00, 0x58, 0x59,
    0x62, 0x63, 0x16,
},{
    0x00, 0x51, 0x52,
    0x00, 0x5A, 0x5B,
    0x64, 0x65, 0x66,
},{
    0x00, 0x25, 0x53,
    0x00, 0x5C, 0x5D,
    0x67, 0x68, 0x69,
},{
    0x00, 0x6A, 0x6B,
    0x00, 0x74, 0x75,
    0x7E, 0x7F, 0x80,
},{
    0x00, 0x6C, 0x6D,
    0x09, 0x76, 0x77,
    0x81, 0x82, 0x83,
},{
    0x00, 0x6E, 0x6F,
    0x09, 0x78, 0x79,
    0x84, 0x85, 0x86,
},{
    0x00, 0x70, 0x71,
    0x09, 0x7A, 0x7B,
    0x87, 0x88, 0x89,
},{
    0x00, 0x72, 0x73,
    0x09, 0x7C, 0x7D,
    0x8A, 0x8B, 0x89,
},{
    0x00, 0x01, 0x02,
    0x09, 0x0A, 0x0B,
    0x16, 0x17, 0x18,
},{
    0x00, 0x01, 0x03,
    0x0C, 0x0D, 0x0E,
    0x19, 0x1A, 0x1B,
},{
    0x00, 0x01, 0x04,
    0x0C, 0x0F, 0x10,
    0x1C, 0x1D, 0x1E,
},{
    0x00, 0x05, 0x06,
    0x11, 0x12, 0x13,
    0x1F, 0x20, 0x00,
},{
    0x00, 0x07, 0x08,
    0x11, 0x14, 0x15,
    0x21, 0x22, 0x00,
},{
    0x00, 0x23, 0x24,
    0x2D, 0x2E, 0x2F,
    0x34, 0x35, 0x00,
},{
    0x00, 0x25, 0x26,
    0x00, 0x30, 0x00,
    0x36, 0x37, 0x00,
},{
    0x00, 0x27, 0x28,
    0x00, 0x31, 0x00,
    0x38, 0x39, 0x00,
},{
    0x00, 0x29, 0x2A,
    0x00, 0x32, 0x00,
    0x3A, 0x3B, 0x00,
},{
    0x00, 0x2B, 0x2C,
    0x00, 0x33, 0x00,
    0x3C, 0x3D, 0x00,
},{
    0x00, 0x3E, 0x3F,
    0x00, 0x47, 0x00,
    0x4E, 0x4F, 0x00,
},{
    0x00, 0x40, 0x41,
    0x00, 0x48, 0x00,
    0x50, 0x51, 0x00,
},{
    0x00, 0x40, 0x42,
    0x00, 0x49, 0x00,
    0x52, 0x53, 0x00,
},{
    0x00, 0x43, 0x44,
    0x00, 0x4A, 0x4B,
    0x54, 0x55, 0x00,
},{
    0x00, 0x45, 0x46,
    0x00, 0x4C, 0x4D,
    0x56, 0x57, 0x00,
},{
    0x00, 0x58, 0x59,
    0x00, 0x62, 0x63,
    0x6C, 0x6D, 0x00,
},{
    0x00, 0x5A, 0x5B,
    0x00, 0x64, 0x65,
    0x6E, 0x6F, 0x00,
},{
    0x00, 0x5C, 0x5D,
    0x00, 0x66, 0x67,
    0x70, 0x71, 0x72,
},{
    0x00, 0x5E, 0x5F,
    0x00, 0x68, 0x69,
    0x73, 0x74, 0x72,
},{
    0x00, 0x60, 0x61,
    0x00, 0x6A, 0x6B,
    0x75, 0x76, 0x2F,
},{
    0x00, 0x77, 0x78,
    0x00, 0x7F, 0x00,
    0x84, 0x85, 0x2F,
},{
    0x00, 0x79, 0x7A,
    0x00, 0x80, 0x00,
    0x86, 0x87, 0x2F,
},{
    0x00, 0x79, 0x7B,
    0x00, 0x81, 0x2F,
    0x88, 0x89, 0x00,
},{
    0x00, 0x7C, 0x7D,
    0x00, 0x82, 0x2F,
    0x8A, 0x8B, 0x00,
},{
    0x00, 0x79, 0x7E,
    0x00, 0x83, 0x2F,
    0x8C, 0x8D, 0x00,
},{
    0x00, 0x01, 0x02,
    0x00, 0x09, 0x00,
    0x0F, 0x10, 0x00,
},{
    0x00, 0x03, 0x04,
    0x00, 0x0A, 0x00,
    0x11, 0x12, 0x00,
},{
    0x00, 0x03, 0x05,
    0x00, 0x0B, 0x0C,
    0x13, 0x14, 0x00,
},{
    0x00, 0x06, 0x07,
    0x00, 0x0D, 0x0C,
    0x15, 0x16, 0x00,
},{
    0x00, 0x06, 0x08,
    0x00, 0x0E, 0x0C,
    0x17, 0x18, 0x00,
},{
    0x00, 0x19, 0x1A,
    0x00, 0x21, 0x00,
    0x26, 0x27, 0x00,
},{
    0x00, 0x19, 0x1B,
    0x00, 0x22, 0x00,
    0x28, 0x29, 0x00,
},{
    0x00, 0x19, 0x1C,
    0x00, 0x23, 0x00,
    0x2A, 0x2B, 0x00,
},{
    0x00, 0x1D, 0x1E,
    0x00, 0x24, 0x00,
    0x2C, 0x2D, 0x00,
},{
    0x00, 0x1F, 0x20,
    0x00, 0x25, 0x00,
    0x2E, 0x2F, 0x00,
},{
    0x00, 0x30, 0x20,
    0x00, 0x35, 0x00,
    0x3D, 0x3E, 0x00,
},{
    0x00, 0x30, 0x31,
    0x00, 0x36, 0x00,
    0x3F, 0x40, 0x00,
},{
    0x00, 0x30, 0x31,
    0x00, 0x37, 0x38,
    0x41, 0x42, 0x00,
},{
    0x00, 0x32, 0x33,
    0x00, 0x39, 0x3A,
    0x43, 0x44, 0x00,
},{
    0x00, 0x32, 0x34,
    0x00, 0x3B, 0x3C,
    0x45, 0x46, 0x00,
},{
    0x00, 0x47, 0x48,
    0x00, 0x4F, 0x50,
    0x5B, 0x5C, 0x0C,
},{
    0x00, 0x1D, 0x49,
    0x51, 0x52, 0x53,
    0x5D, 0x5E, 0x5F,
},{
    0x00, 0x4A, 0x4B,
    0x51, 0x54, 0x55,
    0x60, 0x61, 0x62,
},{
    0x00, 0x4A, 0x4C,
    0x56, 0x57, 0x58,
    0x63, 0x64, 0x65,
},{
    0x00, 0x4D, 0x4E,
    0x56, 0x59, 0x5A,
    0x66, 0x67, 0x68,
},{
    0x00, 0x4D, 0x69,
    0x72, 0x73, 0x74,
    0x7F, 0x80, 0x81,
},{
    0x00, 0x6A, 0x6B,
    0x72, 0x75, 0x76,
    0x82, 0x83, 0x84,
},{
    0x00, 0x6C, 0x6D,
    0x72, 0x77, 0x78,
    0x85, 0x86, 0x84,
},{
    0x00, 0x6E, 0x6F,
    0x79, 0x7A, 0x7B,
    0x87, 0x88, 0x89,
},{
    0x00, 0x70, 0x71,
    0x7C, 0x7D, 0x7E,
    0x8A, 0x8B, 0x8C,
},{
    0x00, 0x01, 0x02,
    0x09, 0x0A, 0x0B,
    0x15, 0x16, 0x17,
},{
    0x00, 0x03, 0x04,
    0x09, 0x0C, 0x0D,
    0x18, 0x19, 0x1A,
},{
    0x00, 0x03, 0x05,
    0x0E, 0x0F, 0x10,
    0x1B, 0x1C, 0x1D,
},{
    0x00, 0x06, 0x07,
    0x0E, 0x11, 0x12,
    0x1E, 0x1F, 0x00,
},{
    0x00, 0x06, 0x08,
    0x0E, 0x13, 0x14,
    0x20, 0x21, 0x00,
},{
    0x00, 0x22, 0x23,
    0x2C, 0x2D, 0x14,
    0x37, 0x38, 0x00,
},{
    0x00, 0x24, 0x25,
    0x2E, 0x2F, 0x30,
    0x39, 0x3A, 0x00,
},{
    0x00, 0x26, 0x27,
    0x00, 0x31, 0x32,
    0x3B, 0x3C, 0x00,
},{
    0x00, 0x28, 0x29,
    0x00, 0x33, 0x34,
    0x3D, 0x3E, 0x00,
},{
    0x00, 0x2A, 0x2B,
    0x00, 0x35, 0x36,
    0x3F, 0x40, 0x00,
},{
    0x00, 0x41, 0x42,
    0x00, 0x4A, 0x4B,
    0x54, 0x55, 0x00,
},{
    0x00, 0x43, 0x44,
    0x00, 0x4C, 0x4D,
    0x56, 0x57, 0x00,
},{
    0x00, 0x43, 0x45,
    0x00, 0x4E, 0x4F,
    0x58, 0x59, 0x00,
},{
    0x00, 0x46, 0x47,
    0x00, 0x50, 0x51,
    0x5A, 0x5B, 0x00,
},{
    0x00, 0x48, 0x49,
    0x00, 0x52, 0x53,
    0x5C, 0x5D, 0x00,
},{
    0x00, 0x5E, 0x5F,
    0x00, 0x67, 0x68,
    0x71, 0x72, 0x00,
},{
    0x00, 0x60, 0x61,
    0x00, 0x69, 0x6A,
    0x73, 0x74, 0x1D,
},{
    0x00, 0x62, 0x61,
    0x00, 0x6B, 0x6C,
    0x75, 0x76, 0x77,
},{
    0x00, 0x63, 0x64,
    0x00, 0x6D, 0x6E,
    0x78, 0x79, 0x7A,
},{
    0x00, 0x65, 0x66,
    0x00, 0x6F, 0x70,
    0x7B, 0x7C, 0x7D,
},{
    0x00, 0x7E, 0x7F,
    0x00, 0x86, 0x87,
    0x90, 0x91, 0x92,
},{
    0x00, 0x80, 0x81,
    0x00, 0x88, 0x89,
    0x93, 0x94, 0x95,
},{
    0x00, 0x82, 0x83,
    0x00, 0x8A, 0x8B,
    0x96, 0x97, 0x98,
},{
    0x00, 0x82, 0x84,
    0x00, 0x8C, 0x8D,
    0x99, 0x9A, 0x9B,
},{
    0x00, 0x82, 0x85,
    0x00, 0x8E, 0x8F,
    0x9C, 0x9D, 0x9E,
}};