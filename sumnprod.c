// TÍNH TỔNG 
#include<stdio.h>
int main()
{
//Bài 1:
 
		int i, n, S1;  
			S1 = 0;
			i = 1; 
			printf("Nhap so n =");
			scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
			S1 = S1 + i ; 
	}
		printf("\n Tong 1+2+...+%d la %d", n, S1); 
										
										 
//Bài 2:
		
	//  int i, n, S;
	// 	S = 1;
	//  	i = 1;
	//  	printf("Nhap so n =");
	//  	scanf("%d", &n);
	//  for(i = 1; i <=n ; i++)
	//  { 
	//  	 S = S*i; 
	//  }			
	// 	printf("\n %d giai thua = %ld  ", n, S);

//Bài 3:
	//  int  n; 
	//  float S, i;
	// 		S = 0; 
	// 		i = 1;
	// 		printf("Nhap so n =");
	// 		scanf("%d", &n);
	// for(i = 1; i <= n; i++)
	// {
	// 		S = S + 1/i	; // 2 so nguyen sao chia cho so float ?????????????????????????????? 
	// }	
	// 	printf("\n Tong 1 + 1/2 + ... + 1/%d = %f", n, S);

//Bài 4: Tính tổng mũ 3 S = 1^3 + ... + N^3 
	//  int i, n, S;
	// 		i = 1;
	// 		S = 0; 
	// 		printf("n =");
	// 		scanf("%d", &n);
	// for(i = 1; i <= n; i++)
	// {
	// 		S = S + i*i*i; 
	// }
	// 	printf("Tong cua 1^3 + 2^3 + ... + %d^3 = %d", n, S);

//Bài 5:Tính S(n)= 1/2 + 1/4 + ... + 1/2n
	// int n, a;
    // float i, S; 
    //     printf("a =");
    //     scanf("%d", &a); 
    //     printf("n =");
    //     scanf("%d", &n);
    //     S = 0;
    //     i = 1;
    // for(i = 1; i <= n; i++)
    // {
    //     S = S + 1/(a*i);
    // }
    //     printf("\n");
    //     printf("Tong = %f", S);

//Bài 6:Tính tổng S(n) = 1 + 1/3 + 1/5 + ... + 1/2n+1 
	// int n;
    // float i, S;
    //     printf("n =");
    //     scanf("%d", &n);
    //     i = 0;
    //     S = 0;
    // for(i = 0; i <= n; i++)
    // {
    //     S = S + 1/(2*i + 1);
    // }
    //     printf("\n");
    //     printf("Tong cua 1 + 1/3 + 1/5 + ... + 1/(2*%d + 1) = %f", n, S);

//Bài 7:Tính tổng S(n) = 1/1x2 + 1/2x3 + ... + 1/(nx(n+1))
	// int n;
    // float i, S;
    //     printf("n =");
    //     scanf("%d", &n);
    //     i = 1;
    //     S = 0;
    // for(i = 1; i <= n; i++)
    // {
    //     S = S + 1/(i*(i+1));
    // }
    //     printf("\n");
    //     printf("Tong cua 1/1x2 + 1/2x3 + ... + 1/(%d*(%d+1)) = %f", n, n, S);

//Bài 8:Tính tổng S(n) = 1/2 + 2/3 + ... + n/n+1
	// int n;
	// float i, S;
	// 		printf("n=");
	// 		scanf("%d", &n);
	// 		S = 0;
	// 		i = 1;
	// for(i = 1; i <= n; i++)
	// {
	// 		S = S + i/(i+1);
	// }
	// 		printf("\n");
	// 		printf("Tong cua 1/2 + 2/3 + ... + %d/(%d + 1) = %f", n, n, S);

//Bài 9:Tính tổng S(n) = 1/2 + 3/4 + ... + 2n+1/2n+2
	// int n;
	// float i, S;
	// 		printf("n =");
	// 		scanf("%d", &n);
	// 		S = 0;
	// 		i = 0;
	// for(i = 0; i <= n; i++)
	// {
	// 		S = S + (2*i + 1)/(2*i + 2);
	// }	
	// 		printf("\n");
	// 		printf("Tong cua 1/2 + 3/4 + ... + (2*%d + 1)/(2*%d + 2) = %f", n, n, S);

//Bài 10:Tính tích T(n) = 1 x 2 x ... x n, Giống với bài tính giai thừa của 1 số
	// 	int n, i, T;
	// 		printf("n =");
	// 		scanf("%d", &n);
	// 		T = 1; 
	// 		i = 1;
	// 	for(i = 1; i <= n; i++)
	// 	{
	// 		T = T * i;
	// 	}
	// 		printf("\n");
	// 		printf("Tich cua 1 x 2 x ... x %d = %d", n, T);

//Bài 11: Tính T(x,n) = x^n 
	// int i, n, x, T;
	// 		printf("n =");
	// 		scanf("%d", &n);
	// 		printf("x =");
	// 		scanf("%d", &x);
	// 		T = x;
	// for(i = 1; i < n; i++)
	// {
	// 		T = T * x; 
	// }
	// 		printf("\n");
	// 		printf("T = %d", T);

//Bài 12:Tính S(n) = 1 + 1x2 + 1x2x3 + ... + 1x2x3x..xn 
// 	int n, i, S, T;
// 		printf("n =");
// 		scanf("%d", &n);
// 		i = 1;
// 		S = 0;
// 		T = 1;
// for(i = 1; i <= n; i++)
// 	{
// 		T = T*i;
// 		S = S + T;
// 	}
// 		printf("\n");
// 		printf("S = %d", S);

//Bài 13:Tính tổng S = x + x^2 + x^3 + ... + x^n
// 	int n, i, S, T;
// 		printf("n =");
// 		scanf("%d", &n);
// 		S = 0;
// 		i = 1;
// 		T = 1;
// 	for(i = 1; i <= n; i++)
// 	{
// 		T = T*T;
// 		S = S + T;
// 	} 
// 		printf("\n");
// 		printf("S = %d", S);



	return(0); 
} 