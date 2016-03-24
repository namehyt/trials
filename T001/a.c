#include <stdio.h>
#include <stdlib.h>


#define ENDIAN_BIG    (0x12)
#define ENDIAN_LITTLE (0x34)
#define VALUE_ENDIAN  *(unsigned char*)&g_endian_judge

unsigned short g_endian_judge = (ENDIAN_BIG << 8) + ENDIAN_LITTLE;

int main(int argc, char * argv[])
{
    printf("haha, 0x%X\n", VALUE_ENDIAN);
    switch (VALUE_ENDIAN)
    {
        case ENDIAN_BIG:
            printf("1\n");printf("haha, 0x%X\n", VALUE_ENDIAN);

            break;
        case ENDIAN_LITTLE:
            printf("2\n");printf("haha, 0x%X\n", VALUE_ENDIAN);

            break;
        default:
            printf("3\n");printf("haha, 0x%X\n", VALUE_ENDIAN);

            break;
    }

}
