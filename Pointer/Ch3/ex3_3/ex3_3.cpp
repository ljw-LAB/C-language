#include <stdio.h>

// void main()
// {
//     char carr2[2][2] = {'A', 'B', 'C', 'D'};
//     printf("%x %x %x %x \n", &carr2[0][0], carr2, carr2[0], carr2[1]);
// }

// void main()
// {
//     char carr2[2][2] = {'A', 'B', 'C', 'D'};
//     printf("%x %x %x %x \n", &carr2[0][0], carr2, carr2[0], carr2[1]);
//     printf("%x %x %x %x \n", &carr2[0][0]+1, carr2+1, carr2[0]+1, carr2[1]+1);
// }

// void main()
// {
//     char carr2[2][2] = {'A', 'B', 'C', 'D'};
//     printf("%x %x %x \n", carr2, *carr2, **carr2);
//     printf("%x %x %x \n", carr2, carr2[0], carr2[0][0]);
// }

// void main()
// {
//     char carr2[2][2] = {'A', 'B', 'C', 'D'};
//     printf("%x %x %x \n", carr2+1, *(carr2+1), **(carr2+1));
//     printf("%x %x %x \n", carr2+1, carr2[1], carr2[1][0]);
//}

// void main()
// {
//     char carr2[2][2] = {'A', 'B', 'C', 'D'};
//      printf("%x %x %x \n", carr2+2, *(carr2+2), **(carr2+2));
//      printf("%x %x %x \n", carr2+2, carr2[2], carr2[2][0]); 
// }

// void main()
// {
//     char carr2[2][2] = {'A', 'B', 'C', 'D'};
//     printf("%c %c %c %c \n", carr2[0][0], carr2[0][1], carr2[1][0], carr2[1][1]);
//     printf("%c %c %c %c \n", **carr2, *(*carr2+1), **(carr2+1), *(*(carr2+1)+1));
// }

// void main()
// {
//     char carr3[2][2][3] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'}; //000 001 002 010 011 012 100 101 102 110 111 112
//     printf("%x %x %x %x \n", carr3, carr3[0], carr3[0][0], carr3[0][0][0]);
//     printf("%x %x %x %x \n", carr3+1, carr3[0]+1, carr3[0][0]+1, carr3[0][0][0]+1); // G, D, B, B
//     printf("%x %x %x %x \n", carr3+1, *carr3+1, **carr3+1, ***carr3+1); // G, D, B, B
   
// }

// void main()
// {
//     int iarr2[2][2] = {1, 2, 3, 4};
//     printf("%x \n", iarr2);
//     printf("%x %x %x %x \n", iarr2[0], iarr2[1], &iarr2[0][0]);
// }

// void main()
// {
//     int iarr3[2][3][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // 000 001 010 011 020 021 100 101 110 111 120 121 
//     printf("%x \n", iarr3); // 000
//     printf("%x %x \n", iarr3[0], iarr3[1]); /// 000 100
//     printf("%x %x %x %x\n", iarr3[0][0], iarr3[0][1], iarr3[1][0], iarr3[1][1]); //000 1 010 3 100 7 110 9
//     printf("%x %x %x %x\n", &iarr3[0][0][0], &iarr3[0][1][0], &iarr3[1][0][0], &iarr3[1][1][0]); 
//     printf("%x %x %x %x\n", iarr3[0][0][0], iarr3[0][1][0], iarr3[1][0][0], iarr3[1][1][0]); // 1 3 7 9
// }

// void main()
// {
//     int iarr[6] = {10, 20, 30, 40, 50, 60};
//     printf("%x \n", iarr);
//     printf("%d %d %d %d %d %d\n", iarr[0] , iarr[1], iarr[2], iarr[3], iarr[4], iarr[5]);
//     printf("%d %d %d %d %d %d\n", *iarr , *(iarr+1), *(iarr+2), *(iarr+3), *(iarr+4), *(iarr+5));

// }

// void main()
// {
//     int iarr[6] = {10, 20, 30, 40, 50, 60};
//     printf("%x \n", &iarr[2]);
//     printf("%d %d %d %d %d %d\n", iarr[0] , iarr[1], iarr[2], iarr[3], iarr[4], iarr[5]);
//     printf("%d %d %d %d %d %d\n", (&iarr[2])[-2] , (&iarr[2])[-1], (&iarr[2])[0], (&iarr[2])[1], (&iarr[2])[2], (&iarr[2])[3]);

// }

// void main()
// {
//     int iarr2[2][3] = { 10, 20, 30, 40, 50, 60 }; //00 01 02 10 11 12
//     printf("%x \n", &iarr2[2]);
//     printf("%d %d %d %d %d %d \n", iarr2[0][0] , iarr2[0][1], iarr2[0][2], iarr2[1][0], iarr2[1][1], iarr2[1][2]);
//     printf("%d %d %d %d %d %d \n", iarr2[0][0] , iarr2[0][1], iarr2[0][2], iarr2[0][3], iarr2[0][4], iarr2[0][5]);
//     printf("%d %d %d %d %d %d \n", iarr2[1][-3] , iarr2[1][-2], iarr2[1][-1], iarr2[1][0], iarr2[1][+1], iarr2[1][+2]);

// }

// void main()
// {
//     int iarr2[2][3] = { 10, 20, 30, 40, 50, 60 }; //00 01 02 10 11 12
//     printf("%x \n", iarr2);
//     printf("%x %x %x %x %x %x \n", &iarr2[0][0] , &iarr2[0][1], &iarr2[0][2], &iarr2[1][0], &iarr2[1][1], &iarr2[1][2]);
//     printf("%x %x %x %x %x %x \n", &iarr2[0][0] , &iarr2[0][1], &iarr2[0][2], &iarr2[0][3], &iarr2[0][4], &iarr2[0][5]);
//     printf("%x %x %x %x %x %x \n", &iarr2[1][-3] , &iarr2[1][-2], &iarr2[1][-1], &iarr2[1][0], &iarr2[1][1], &iarr2[1][2]);
//     puts("=============================================");
//     printf("%x %x %x %x %x %x \n", iarr2[0] , iarr2[0]+1, iarr2[0]+2, iarr2[1], iarr2[1]+1, iarr2[1]+2);
//     printf("%x %x %x %x %x %x \n", iarr2[0] , iarr2[0]+1, iarr2[0]+2, iarr2[0]+3, iarr2[0]+4, iarr2[0]+5);
//     printf("%x %x %x %x %x %x \n", iarr2[1]-3 , iarr2[1]-2, iarr2[1]-1 , iarr2[1], iarr2[1]+1 , iarr2[1]+2);
    
// }

void main()
{
    int iarr2[2][3] = { 10, 20, 30, 40, 50, 60 }; //00 01 02 10 11 12
    
    printf("%x \n", iarr2);
    printf("%d %d %d %d %d %d \n", iarr2[0][0] , iarr2[0][1], iarr2[0][2], iarr2[1][0], iarr2[1][1], iarr2[1][2]);
    printf("%d %d %d %d %d %d \n", *iarr2[0], *(iarr2[0]+1), *(iarr2[0]+2), *iarr2[1], *(iarr2[1]+1), *(iarr2[1]+2));
    printf("%d %d %d %d %d %d \n", **iarr2, *(*iarr2+1), *(*iarr2+2), **(iarr2+1), *(*(iarr2+1)+1), *(*(iarr2+1)+2));
    

}