#include <stdio.h>
#include <string.h>
#include "base64.h"

int main()
{
    int ret;
    const uint8_t buffer[3] = {0x50,0x10,0xf0};
    char *base64;
    ret = bin_to_b64(&buffer, sizeof(buffer) / sizeof(buffer[0]), base64, 2048);
    printf("End: %d\r\n", ret);
    base64[ret] = 0;
    printf("End: %s\r\n", base64);
    return 0;
}