//Bài1:
// #include<stdio.h>
// #include<math.h>

// int main(){
//     double n;
//     scanf("%lf", &n);
//     printf("%.3lf",3*pow(n,3));
// }


//Bài 2:
// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     float a;
//     scanf("%f", &a);
//     float b;
//     scanf("%f", &b);
//     printf("%.6f", pow(a,b));
//     return(0);

// }

//Bài 3:
// #include<stdio.h>

// int main()
// {
//     int a[5];
//     int i;
//     for(i=0;i<5;i++){
//         scanf("%d", &a[i]);
//     }
//     int j;
//     for(i=0;i<5;i++){
//         for(j=0;j<5;j++){
//             if(a[i]<a[j]){
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     for(i=0;i<5;i++){
//         if(a[i]%2!=0){
//             printf("%d", a[i]);
//         }
//     }
// }


//Bài 4:


//Bài9:
#include <stdio.h>

int main() {
  char c;
  
  printf("Enter a character: ");
  scanf("%c", &c);

  printf("Hexadecimal representation: 0x%x\n", c);
  printf("Decimal value: %d\n", c);

  return 0;
}