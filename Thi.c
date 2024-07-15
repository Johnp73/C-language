// #include<stdio.h>
// #include<math.h> // cái này là để dùng sqrt
// int MAX = 100000;


// int main()
// {
//     // Nhập mảng
//     int n;
//     int array[MAX];
//     scanf("%d", &n);
//     printf("Nhap day so:"); 
//     for(int i=0;i<n;++i){
//         printf("array[%d]=", i);
//         scanf("%d", &array[i]);
//     }

//     int maxNum = array[0];
//     for(int i = 1;i < n;++i){
//         if(array[i] > maxNum) maxNum = array[i];
//     }
//     printf("\nPhan tu lon nhat: %d", maxNum);
//     return(0);
// }
#include <stdio.h>
#include <math.h> // Su dung ham sqrt
const int MAX = 100000;



int main(){
    int n;
    int arr[MAX];
    printf("\nNhap so luong phan tu n = ");
    scanf("%d", &n);
    
    // Nhap mang
    for(int i = 0;i < n; ++i){
        printf("\nNhap a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    /*------------------------------------*/
    // 1 .Tinh trung binh cong cac so le o vi tri chan
    // Chu y: Vi tri chan = chi so le
    // int sum = 0;
    // int count = 0;
    // for(int i = 1; i < n; i+=2){
    //     if(arr[i] % 2 == 1){
    //         ++count;
    //         sum += arr[i];
    //     }
    // }
    // printf("\nTrung binh cong = %f", (float)sum/count);

    // 2. Tim so lon nhat trong mang vua nhap
    int max = arr[0];
    for(int i = 1;i < n;++i){
        if(arr[i] < max) max = arr[i];
            
    }
    printf("\nPhan tu lon nhat: %d", max);
}