// #include <stdio.h>
// #include <string.h>

// struct _bitfield
// {
//     unsigned b0:1; // 1 
//     unsigned b1:1; // 2
//     unsigned b2:1; // 4
//     unsigned b3:1; // 8
//     unsigned b4:1; // 16
//     unsigned b5:1; // 32
//     unsigned b6:1; // 64
//     unsigned b7:1; // 128
// };

// void main()
// {
//     struct _bitfield bit;
//     memset(&bit, 0, sizeof(struct _bitfield));
//     bit.b0 = 1;
//     bit.b7 = 1;

//     printf("%d \n", sizeof(struct _bitfield));
// 	printf("%08x %d \n", bit, bit);
// 	//printf("%x %d \n", bit, bit);

// }

// typedef struct _bitfield
// {
//     unsigned b0:1;  // 1 
//     unsigned   :7;  // 2
//     unsigned b8:1;  // 1 
//     unsigned   :7;  // 2
//     unsigned b16:1; // 1 
//     unsigned   :7;  // 2
//     unsigned b24:1; // 1
// };

// void main()
// {
//     _bitfield bit;
//     memset(&bit, 0, sizeof(struct _bitfield));
//     bit.b0 = 1;
//     bit.b8 = 1;
//     bit.b16 = 1;
//     bit.b24 = 1;

//     printf("%d \n", sizeof(struct _bitfield));
// 	printf("%08x %d \n", bit, bit);
// 	//printf("%x %d \n", bit, bit);
// }

#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct _bitfield
{
    unsigned D:8;
    unsigned C:8;
    unsigned B:8;
    unsigned A:8;

}BITFIELD;

void main()
{
    BITFIELD bit;
    int bContinue = 1;

    memset(&bit, 0, sizeof(BITFIELD));
    
    while(bContinue)
    {
        printf("%08X\n", bit);
        switch(_getch())
        {
            case 'a' : case 'A' : // ^(XOR) 같으면 0, 다르면 1
                bit.A ^= 0xFF;
                break;
            case 'b' : case 'B' :
                bit.B ^= 0xFF;
                break;
            case 'c' : case 'C' :
                bit.C ^= 0xFF;
                break;
            case 'd' : case 'D' :
                bit.D ^= 0xFF;
                break;
            default :
                bContinue = 0;            
        }
    }
}