//Đề thi thử:

//Bài 1:
// #include<stdio.h>

// int main()
// {
//     int a,b;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     if(a>=b) printf("a>=b");
//     else printf("a<b");
//     return(0);

// }

//Bài 2:
// #include<stdio.h>

// int main()
// {
//     int n;
//     int S=0;
//     scanf("%d", &n);
//     // if(n%2==0) S=n+(n-2)+(n-4);
//     // else S=(n-1)+(n-3)+(n-5);
//     int i;
//     for(i=0;i<(n-5);i++){
//         if(i%2==0){
//             S += i;
//         }
//     }
//     printf("%d", S);
//     return(0);

// }

//Bài 3:
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char a[4];
//     int i;
//         for(i=0;i<4;i++){
//             scanf("%s", &a[i]);
//         }
//     int j;
    // for(i=0;i<4;i++){
    //     for(j=0;j<4;j++){
    //         if(a[i]<a[j]){
    //             int temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }
    
//             printf("%c %c %c %c", a[0],a[1],a[2],a[3]);
//     return(0);
// }

//Bài 4:
// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int i, a[n];
//     for(i=0;i<n;i++){
//         scanf("%d", &a[i]);
//     }
//         int j;
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             if(a[i]<a[j]){
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }



//     for(i=0;i<n;i++){
//         printf("%d ", a[i]);
//     }
// }

//Bài 5:
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     int n;
//     int check=1;
//     scanf("%d", &n);
//     int i, a[n];
//     for(i=0;i<n;i++){
//         scanf("%d", &a[i]);
//     }
//     int j;
//     for(i=0,j=n-1;i<n/2;i++,j--){
//         if(a[i]!=a[j]){
//             check=0;
//             break;
//         }
//     }
//     if(check==1) printf("1");
//     else printf("0");
//     return(0);

// }

//Bài 6:
// #include<stdio.h>
// #include<string.h>
// // void sap_xep(char a[][30], int size, int opt){
// //     int i,j;
// //         for(i=0;i<size;i++){
// //             for(j=0;j<size;j++){
// //                 if(strcmp(a[i],a[j])*opt>0){
// //                     char temp[30];
// //                     strcpy(temp,a[i]);
// //                     strcpy(a[i],a[j]);
// //                     strcpy(a[j],temp);
// //                 }
// //             }
// //         }
// // }

// int main()
// {
//     char a[5][30];
//     char temp[30];
//     int i;
//     for(i=0;i<5;i++) scanf("%s", &a[i]);
//     int j;

//     for(i=0;i<5;i++){
//         for(j=0;j<5;j++){
//             if(a[i][1]>a[j][1]){
//                 strcpy(temp,a[i]);
//                 strcpy(a[i],a[j]);
//                 strcpy(a[j],temp);
//             }
//         }
//     }
//     // sap_xep(a,5,-1);

//     printf("%s %s %s %s %s", a[0], a[1], a[2], a[3], a[4]);

// }

//Bài 7:
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100];
//     scanf("%s", &str);
//     int len;
//     len = strlen(str);
//     int mid = len/2;
//     if(strlen(str)>5)
//     printf("%c%c%c%c%c", str[mid-2], str[mid-1], str[mid], str[mid+1], str[mid+2]);
//     else printf("loi");
//     return(0);
// }


//Bài 8:
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int j;
    int max, min;

    for(max=0;i<n;i++){
        for(min=0;j<n;j++){
            if(max[i]>min[j] && max[i]*min[j]%2==0){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i=0;i<n;i++){
        scanf("%d", a[i]);
    }
}