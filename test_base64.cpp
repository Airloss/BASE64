#include <stdio.h>
#include <string.h>
#include "base64.h"

int main()
{
    int bin2b64 = 0;
    const uint8_t in_bin[2] = {0x00, 0x00};
    const char in_b64[4] = {'A','A','A','A'};

    uint8_t out_bin[3] = {0x00, 0x00, 0x00};
    char out_b64[4];

    for (int i = 0; i < 4; i++)
    {
        /* code */
        out_b64[i] = 'A' + i;
    }

    bin2b64 = bin_to_b64(in_bin, 2, out_b64, 1024);
    printf("Binary to BASE64: %d\n", bin2b64);
    printf("%s\n",out_b64);

    return 0;
}