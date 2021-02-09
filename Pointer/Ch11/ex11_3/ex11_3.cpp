#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// void main()
// {
//     int i;
//     for (i = 0; i < 10; i++)
//         printf("%d \n", rand());
// }

// void main()
// {
//     int i;
//     srand(1);//srand(2);srand(3);
//     for (i = 0; i < 10; i++)
//         printf("%d \n", rand());
// }

// void main()
// {
//     int i;
//     srand((unsigned)time(NULL));
//     for (i = 0; i < 10; i++)
//     printf("%d \n", rand());
// }

// void main()
// {
//     int i;
//     for (i = 0; i < 10; i++)
//     {
//         srand((unsigned)time(NULL));
//         printf("%d \n", rand());
//     }
// }

// void main()
// {
//     int i;

//     srand( (unsigned)time(NULL));
//     for (i = 0; i < 10; i++)
//         printf("%d \n", rand()%10);

// }

// void main()
// {
//     int i, n;

//     srand( (unsigned)time(NULL));
//     for (i = 0; i < 10; i++)
//     {
//         n = rand()%26 + 65;
//         printf("%c %d\n", n, n);
//     }

// }

// void main()
// {
//     int i;

//     for(i=0; i<100;i++)
//         if( i % 10 == 0)
//             printf("%d ", i);
// }

// void main()
// {
//     int i;
//     int arr[100];

//     srand( (unsigned)time(NULL));
    
//     for(i = 0 ; i < 100; i++)
//     {
//         arr[i] = rand()%100;
//     }
//     for(i = 0 ; i < 100; i++)
//     {
//         printf("%3d", arr[i]);
//         if( (i+1) % 10 ==0)
//             puts("");
//     }

// }

void main()
{
    int arr[100];
    int numCount[10] ={0};
    int i;
    for(i = 0 ; i < 100; i++)
    {
        arr[i] = rand()%100;
    }
    for(i = 0 ; i < 100; i++)
    {
        printf("%3d", arr[i]);
        if( (i+1) % 10 ==0)
            puts("");
    }
    puts("=====================");
    for(i = 0 ; i < 100; i++)
    {
        numCount[arr[i]/10]++;
    }
    for(i = 0 ; i < 10; i++)
    {
        printf("%d ~ %d 까지의 정수는 %d개 입니다. \n", i*10, (i+1)*10-1, numCount[i]);
    }
}