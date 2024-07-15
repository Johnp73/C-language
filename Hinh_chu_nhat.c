// Vẽ hình chữ nhật 
// #include <stdio.h>
// int main()
// {
//     int n, m;
//     	printf("Nhap chieu cao cot 1: ");
//     	scanf("%d", &n);
    	
//     int i, j;
//     for(i = 0; i < n; i++)
// 	{
//         for(j = 0; j < n; j++)
// 		{
//             printf("*");   
//         }
//         printf("\n");
//     }
// }

//Bài tập vẽ hình:
#include<stdio.h>

void veHinhVuong(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("*s");
        }
        printf("\n");
    }
}

void vehinhvuong2(int n){
    for(int i=0; i<n; i++){
        if(i==0){
            for(int j=0; j<n; j++){
            printf("*");
        }
        }
        else{
            printf("*");
            for(int j=0; j<n-2;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

void vehinhvuong3(int n){
    for(int i=0; i<n; i++){
        if(i==(n-1)){
            for(int j=0; j<n; j++){
            printf("*");
        }
        }
        else{
            printf("*");
            for(int j=0; j<n-2;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

void vehinhvuong4(int n){
      for(int i=0; i<n; i++){
        if(i==0 || i==(n-1)){
            for(int j=0; j<n; j++){
            printf("*");
        }
        }
        else{
            printf("*");
            for(int j=0; j<n-2;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}


//tăng dần:
void vehinhtamgiac(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
//giảm dần:
void vehinhtamgiac2(int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
}
//tăng dần đảo ngược:
void vehinhtamgiac3(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

}
//giảm dần đảo ngược:
void vehinhtamgiac4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=i;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
}
//tam giác cân:
void vehinhtamgiac5(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int j=0;j<=2*i;j++){
            printf("*");
        }
        printf("\n");
    }
}

//tam giác cân đaor ngược:
void vehinhtamgiac6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=1;j<2*(n-i);j++){
            printf("*");
        }
        printf("\n");
    }
}


int main(){
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    veHinhVuong(n);
    // vehinhvuong2(n);
    // vehinhvuong3(n);
    // vehinhvuong4(n);
    // vehinhtamgiac(n);
    // vehinhtamgiac2(n);
    // vehinhtamgiac3(n);
    // vehinhtamgiac4(n);
    // vehinhtamgiac5(n);
    // vehinhtamgiac6(n);
}


// Vẽ tam giác đều:
// #include <stdio.h>
 
// int main() {
//    int n,i,j;
 
//    scanf("%d", &n);  // khai bao so hang.
 
//    for(i = 1; i <= n; i++) {
//       for(j = 1; j <= n-i; j++)
//          printf(" ");
 
//       for(j = 1; j <= i; j++)
//          printf("* ");
 
//       printf("\n");
//    }
//    return 1;
// }

// vẽ tam giác đều đảo ngược
// #include <stdio.h>
 
// int main() {
//    int n,i,j;
 
//    scanf("%d", &n);
 

//    for(i = 1; i <= n; i++) {
//       for(j = 1; j < i; j++)
//          printf(" "); 
 
//       for(j = i; j <= n; j++)
//          printf("* ");
 
//       printf("\n");
//    }
 
//    return 1;
// }


//Hình xoắc ốc:
/* Thuat toan nhu sau, co ma tran a11 a12 a13 a32 a33
Ta thay sau moi lan bie'n cot (j) tien den n (o day n=3) thi i (bien hang) bat dau giam
roi sau do la a32 a31 a21 
ta giam n-- khi do ma tran se nho gian va ta cho i giam tiep
ta lam nhu vay cho den khi dem +1 (moi lan a[i][j] thi dem++ va gan bang dem) 
lon hon binhphuong (n*n) */
// #include <stdio.h>
// #include <conio.h>
// int i,n,n2; //Trong qua trinh xu ly thi n se thay doi, can co n2 de co dinh n
// void output(int a[n2][n2])
// {
//      int j;
//      for(i=1;i<=n2;i++)
//      {
//       for(j=1;j<=n2;j++)
//       printf("%3d",a[i][j]);
//       printf("\n");
//      }
// }
// //Bat dau qua trinh xu ly cho moi a[i][j]
// void xuly(int a[n][n])
// {
//      int j,dem=0,binhphuong;
//      binhphuong=n*n;          //Vong lap ket thuc khi dem+1>binhphuong
//      n2=n; i=j=1;       
//      while(dem+1<=binhphuong)
//      {
//       while(i<=n)
//       {
//                   dem++; 
//                   a[i][j]=dem; 
//                   if(j<n) j++;
//                    else i++;
//       }  
//        n--; i--; j--; 
//        while(i>n2-n)
//        {
//                 dem++; 
//                 a[i][j]=dem;  
//                 if(j>n2-n) j--;
//                  else  i--;    
//        } 
//        i++; j++;
//      }         
// }

// void main()
// {
//      int a1[100][100];
//      do {
//          printf("N= ");
//          scanf("%d",&n);
//          } while(n<=0);
//      n2=n;
//     //  xuly(a1); printf("\n");
//     xuly(a1);
//      output(a1);        
//      getch();   
// } 