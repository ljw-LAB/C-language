#include <stdio.h>

// void main()
// {
//     char carr1[6] = {'A', 'B' , 'C' , 'D' , 'E', 'F'};
//     char carr2[2][3] = {'A', 'B' , 'C' , 'D' , 'E', 'F'};

//     printf("%c %c %c %c %c \n", carr1[0] , carr1[1] , carr1[2] , carr1[3] , carr1[4] , carr1[5]);
//     printf("%c %c %c %c %c \n", carr2[0][0] , carr2[0][1] , carr2[0][2] , carr2[1][0] , carr2[1][1] , carr2[1][2]);
// }

// void main()
// {
//     int iarr1[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int iarr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

//     printf("%d %d %d %d %d %d %d %d %d \n", iarr1[0] , iarr1[1] , iarr1[2] , iarr1[3] , iarr1[4] , iarr1[5] , iarr1[6] , iarr1[7] , iarr1[8]);
//     printf("%d %d %d %d %d %d %d %d %d \n", iarr2[0][0] , iarr2[0][1] , iarr2[0][2] , iarr2[1][0] , iarr2[1][1] , iarr2[1][2] , iarr2[2][0] , iarr2[2][1] , iarr2[2][2]);
// }

// void main()
// {
//     char carr1[6] = {'A', 'B' , 'C' , 'D' , 'E', 'F'};
//     char carr2[2][3] = {'A', 'B' , 'C' , 'D' , 'E', 'F'};

//     printf("%d %d \n", sizeof(carr1), sizeof(carr2));
//     printf("%d %d \n", sizeof(carr2[0]), sizeof(carr2[1])); 
// }

// void main()
// {
//     int iarr1[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int iarr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

//     printf("%d %d \n", sizeof(iarr1), sizeof(iarr2));
//     printf("%d %d \n", sizeof(iarr2[0]), sizeof(iarr2[2]));
    
// }

// void main()
// {
//     char carr2[2][3] = {'A', 'B' , 'C' , 'D' , 'E', 'F'};
//     printf("%x \n", carr2);
//     printf("%x %x %x %x \n", carr2[0], carr2[1], &carr2[0][0], &carr2[1][0]);
// }

void main()
{
    int iarr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%x \n", iarr2);
    printf("%x %x %x \n", iarr2[0], iarr2[1], iarr2[2]);
    

}