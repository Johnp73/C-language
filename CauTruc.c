// #include<stdio.h>
// #include<stdlib.h>
// #define PI 3.14
// const float VAT = 0.1;

// void sayHello (char* message);

// int main()
// {
//     sayHello ("Welcome to the C World!");
//     return 0;
// }

// void sayHello(char* message)
// {
//     printf("%s\n", message);
// }

#include <stdio.h>

int main()
{
    int age = 20;
    char fullname[] = "Maria Ozawa";
    char country[] = "Japan";
    float weight = 45.5;

    printf("Xin chao. Toi la %s\n", fullname);
    printf("Toi den tu %s\n", country);
    printf("Nam nay toi %d\n", age);
    printf("Toi nang %.1f kg\n", weight);

    return (0);
}