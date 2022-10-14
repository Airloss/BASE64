#include <stdio.h>
#include <string.h>
#include "base64.h"

int main()
{
    int ret;
    const int in_len = 2;
    const int in_len_1 = 4;
    const uint8_t buffer[2] = {0x00,0x00};
    char aa[4] = {'a','b','c','d'};
    const char bb[4] = {'A','A','A','='};
    uint8_t buffer_1[3] = {0x50,0x10,0xf0};

    ret = bin_to_b64(&buffer, in_len, &aa, 1024);
    int ret_1 = b64_to_bin(&bb, 4, &buffer_1, 1024);
    
    // ret = bin_to_b64(buffer, sizeof(buffer) / sizeof(buffer[0]), base64, 2048);
    printf("End: %d\r\n", ret);
    for (int i = 0; i < ret; i++)
    {
        printf("%c\n", aa[i]);
    }
    
    printf("End: %d\r\n", ret_1);
    for (int i = 0; i < ret_1; i++)
    {
        printf("%d\n", buffer_1[i]);
    }

    return 0;
}