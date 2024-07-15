// Tìm ước của 1 số nguyên dương N
// 
#include<stdio.h>

int main()
{
	int i, n;
		printf("n =");
		scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		if ( n % i != 0) // Số dư khác 0 -> đúng , Số dư = 0 -> Sai 
		{  
		continue;	 // nhảy code : nếu mệnh đề đúng thì nó sẽ nhảy code sang mệnh đề khác
					//và nó sẽ không in ra bởi lệnh printf nếu mệnh đề đấy bị nhảy. 
		}
		else 
		printf("Uoc cua so %d la: %d \n", n, i);	 
	}
	return(0); 
}


// #include <stdio.h>
// int main()
// {
// 	int i, n;
// 	do
// 	{
// 	printf("\nNhap n(n > 0): ");
// 	scanf("%d", &n);
// 	  if(n <= 0)
// 	   {
// 		printf("\n N phai > 0. Xin nhap lai !");
// 	   }
// 	}while(n <= 0);
//     i = 1;

// 	while(i <= n)
// 	{
// 		if(n % i == 0)
// 			printf("%4d", i);
// 			i++;
// 	}
// 	return 0;
// }

// / Tổng quát do while 
// do {
//     // Khối lệnh được thực thi
// } while(condition);