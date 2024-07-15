#include<stdio.h>
#include<math.h>
// int main()
// {
	 	  
// 	// int a, b, c, d, i ,j;
// 	// int ma_tran [3][3] = {{a, b, c , d}, {a, b, c , d}, {a, b, c , d}};
// 	// 	printf("Nhap chieu cao cot 1: ");
//     // 	scanf("%d", &a);
//     // 	printf("Nhap chieu cao cot 2: ");
//     // 	scanf("%d", &b); 
// 	// 	printf("Nhap chieu cao cot 3: ");
//     // 	scanf("%d", &c);
//     // 	printf("Nhap chieu cao cot 4: ");
//     // 	scanf("%d", &d); 
    
  
//     // 	for(i = 0; i < a; i++)
// 	// 	{
//     // 		for(j = 0; j < b; j++)
// 	// 		{
//     // 		printf("%d ", ma_tran[i][j])
//     // 		if(a, b, c ,d > 0)
// 	// 		{
//     // 			printf("[]");
// 	// 		} 
			
//     // 		else 
// 	// 		{
//     // 			printf(" ");
// 	// 		}	
					
// 	// 		}
// 	// 	} 
// 	float a;
// 	a = asin(M_e/3);
// 	printf("Arcsin cua a la: %lf", a);
// 	// printf("")
	  

//     return 0 ;
	
// }
int Prime(int n){
int i;

	// if(n<2) return 0;
	// for(i=2; i<=sqrt(n); i++)
	// 	if(n%i==0) return 0;
	// return 1;	
	// Khó hiểu vlozzzzzzzzzzzzzzzzzz, chưa hiểu mấy.
}
void main(){
int n,i;
printf("Enter the positive number: "); scanf("%d",&n);
for(i=2;i<=n;i++){
	if(Prime(i)==1){
		printf("\t%d",i);
	}
}
printf("\n");	
}