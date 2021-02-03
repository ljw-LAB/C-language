#include <stdio.h>
#include <string.h>

//#include <locale.h>

// void main()
// {
//     char *cp = "ABCD";

//     printf("%c %c %c %c %c \n", cp[0], cp[1], cp[2], cp[3], cp[4]);
//     printf("%d %d %d %d %d \n", cp[0], cp[1], cp[2], cp[3], cp[4]);

// }

// void main()
// {
//     char carr[10] = "ABCD";

//     printf("%c %c %c %c %c \n", carr[0], carr[1], carr[2], carr[3], carr[4]);
//     printf("%d %d %d %d %d \n", carr[0], carr[1], carr[2], carr[3], carr[4]);

// }

// void main()
// {
//     char carr[10] = {'A','B','C','D', '\0'};

//     printf("%c %c %c %c %c \n", carr[0], carr[1], carr[2], carr[3], carr[4]);
//     printf("%d %d %d %d %d \n", carr[0], carr[1], carr[2], carr[3], carr[4]);

// }

 void main()
 {
     const char *cp = "ABCD";
	//char *cp = "ABCD";
	 char carr[10] = "ABCD";

     printf("%c %c \n", cp[0], carr[0]);
     //cp[0] ='Z';
     carr[0] = 'Z';
     cp = carr;
     //carr =cp;
     printf("%c %c \n", cp[0], carr[0]);
 }
