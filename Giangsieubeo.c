//Bài 1:
// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int S =0;
//     if(n%2==0)  S = n+(n-2)+(n-4);
//     else S = (n-1)+(n-3)+(n-5); 
//     printf("%d", S);
//     return(0);
// }

//Cách 2:
for(i=n;n-5<=i;i--)

//Bài 3
// Bài 4:
// #include<stdio.h>

// int main()
// {

//     int a[7],i;
//     for(i=0;i<7;i++){
//         scanf("%d", &a[i]);
//     }
//     int j;
//     for(i=0;i<7;i++){
//         for(j=0;j<7;j++){
//             if(a[i]<a[j]){
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for(i=0;i<7;i++){
//         printf("%d\t", a[i]);
//     }
//     return(0);
    

// }