#include <stdio.h>
// void main()
// {
//     char *str = "ABCDEFG";

//     puts(str);
//     puts(str+1);
//     puts(str+2);
//     puts(str+3);

// }

// void main()
// {
//     char *str = "ABCDEFG";

//     puts(str);
//     puts(str+1);
//     puts(str+2);
//     puts(str+3);

// }

 void main()
 {
     //char str[] = "ABCDEFG";
	 char str[] = "ABCDEFG";

	 //char str[8] = "ABCDEFG";

     puts(str);
     puts(&str[0]);
     puts(str+1);
     puts(&str[1]);
     puts(str+2);
     puts(&str[2]);

 }