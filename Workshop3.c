// Bài 1
// #include<stdio.h>
// #include<math.h>

// int Prime(int n){
// int i;

// 	if(n<2) return 0;
// 	for(i=2; i<=sqrt(n); i++)
// 		if(n%i==0) 
//     return 0;
// 	return 1;	
// }
// void main(){
// int n,i;
// printf("Nhap so n: "); 
// scanf("%d",&n);
// for(i=2;i<=n;i++){
// 	if(Prime(i)==1){
// 		printf("\t%d",i);
// 	}
// }
// printf("\n");	
// }
// // \t là tab ra 

// #include <stdio.h>
//  	int main(){
//     int n,i,j,check;
//     	printf("nhap so n:");
//      	scanf("%d",&n);
//     for(i=2; i<=n; i++){
//          check=1;
//          for(j=2; j<sqrt(i); j++){
//              if(i%j==0) check=0; 
//          }
//         if (check==1) printf("%d la so nguyen to\n",i);
// 	   }
//     return 0;
// }

// Bài 3:

// int getRelPos ( double x, double y, double r) 
// {
//   double d2=x*x + y*y;  
//    double r2= r*r;           
//    if (d2<r2) return 1 ; 
//    else if (d2==r2) return 0 ; 
//    return -1 ;
// }
//
// int main()
// {
//     double x, y, r, result; 
//     printf("Nhap x va y :");
//    scanf("%f%f", &x, &y);
//     do {
//               printf("Nhap r:");
//               scanf("%f", &r);
//      }
//      while(r<0);
//      result = getRelPos(x,y,r);
//      if (result ==1) printf("The point is in the circle");
//      else if (result==0) printf("The point is on the circle");
//      else printf("The point is out of the circle");
//    return(0);
// }

// Bài 2 
// #include <stdio.h>

// int main(){
//     int d,m,y;
//     int a;
//     printf("Nhap d/m/y :");
//     scanf("%d/%d/%d", &d, &m, &y);
//     a=1;
//     int maxd = 31; 
//     if ( d<1 || d>31 || m<1 || m>12) a=0;
//     if ( m==4 || m==6 || m==9 || m==11) maxd=30;
//     else if (m==2){       
//         if ( y%400==0 || ( y%4==0 && y%100!=0)) maxd=29;
//         else maxd=28;        
//     }
//     if(d>maxd) a=0;
//     if(a==1) printf("dung");
//     else printf("khong dung");

// return 0;
// }

// Bài 5
// #include <stdio.h>

//     int main(){
//    int a=0,b=1,t,n,i=1;
//    printf("nhap so hang n cua day fibonacci:");
//    scanf("%d",&n);
//    if(n==1) printf("so hang thu %d cua day fibonacci:1",n);
//    else{
//        while(i<n){
//           t=a+b;
//            a=b;
//            b=t;
//            i++;    
//        }
//        printf("so hang thu %d cua day fibonacci:%d",i,t);
//    }
   
// return 0;
// }

// Bài 8
// #include<stdio.h>
// double makeDouble(int ipart, int fraction);
// int main(){
// 	int ipart, fraction;
//     printf("nhap phan nguyen:");
// 	scanf("%d",&ipart);
//     printf("nhap phan so:");
// 	do{
// 		scanf("%d",&fraction);
// 	}while(fraction<0);
// 	double value = makeDouble(ipart, fraction);
// 	printf("%0.2f", value);
// }
// double makeDouble(int ipart,int fraction){
// 	double d_f = fraction;
// 	while(d_f >= 1){
// 		d_f = d_f/10;
// 	};
// 	if(ipart < 0){
// 		return ipart - d_f;
// 	}else{
// 		return ipart + d_f;
// 	}
// }

// Bài 9

// #include<stdio.h>
// int gcd(int a, int b);
// int lcm(int a, int b);
// int main(){
// 	int a, b;
// 	do{
// 		printf("nhap so a:");
// 		scanf("%d",&a);
// 		printf("nhap so b:");
// 		scanf("%d",&b);
// 	}while(a <= 0 || b <= 0);
// 	int d = gcd(a,b);
// 	int m = lcm(a,b);
// 	printf("uoc chung lon nhat:%d\n",d);
// 	printf("boi chung nho nhat:%d",m);
// }
// int gcd(int a, int b){
// 	while(a != b){
// 		if(a > b) a -= b;
// 		else b -= a;
// 	}
// 	return a;
// }
// int lcm(int a, int b){
// 	return a*b/ gcd(a,b);
// }

// Bài 10
// #include<stdio.h>
// 	int minmaxDigits(int n);
// int main(){
// 	int n;
// 	do{
// 		printf("nhap day so:");
// 		scanf("%d",&n);
// 		minmaxDigits(n);
// 	}while(n < 0);
// }
// int minmaxDigits(int n){
// 	int digit;
// 	int min, max ; 
// 	digit = n % 10; 
// 	n /= 10; 
// 	min = max = digit;
// 	while (n > 0){
// 		digit = n % 10;   
// 		n /= 10;     
// 		if (min > digit) min = digit;   
// 		if (max < digit) max = digit;
// 	}
// 	printf("so lon nhat trong day:%d\n",max);
// 	printf("so nho nhat trong day:%d\n",min);
// }
