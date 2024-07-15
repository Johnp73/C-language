// Tìm bội số của 1 số nguyên dương
// Ví dụ bội số của 5 là 5, 10, 15, 20,....
#include<stdio.h>
int main()
{
	int i, n, a, S;
		i = 1; 
		printf("Nhap so n ="); // n là số nguyên dương 
		scanf("%d", &n);
		printf("\n"); 
		printf("Nhap so a ="); // bội số của n
		scanf("%d", &a);
	for(i = 1; i <= n; i++)
	{
		S =  a * i; 
		printf("Boi so %d cua %d la:%d \n", i, a, S);  
	}
		printf("\n"); 
	return(0); 
} 