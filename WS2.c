// // Chuyển đổi dấu 
// #include <stdio.h>

// int main() {
	
// 	double num1, num2, result;
// 	char op;
// 	TEST:printf("Enter an expression in the format 'num1 operator num2': ");
// 	scanf("%lf%c%lf", &num1, &op, &num2);
	
	
// 	switch(op) {
// 		case '+':
// 			result = num1 + num2;
// 			break;
// 		case '-':
// 			result = num1 - num2;
// 			break;
// 		case '/':
// 			if (num2 == 0) {
//                 printf("Error: Cannot divide by 0\n");
//                 return 0;
//             }
// 			result = num1 / num2;
// 			break;
// 		case '*':
// 			result = num1 * num2;
// 			break;
// 		default:
// 			printf("Invalid operator\n");
			
// 			while(op != '+' || op != '-' || op!= '/' || op != '*'){
//             	char choice;
//     			printf("\nDo you want to continue? (y/n): \n");
//     			scanf(" %c", &choice);
//     			if (choice == 'y') {
// 					goto TEST; 
//         		}
//         		if(choice=='n') {
//         			return 0; 
// 				} 
// 			}
// }
// 	printf(" Result: %lf", result);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a, b, S;
//     	printf("a =");
//     	scanf("%d", &a);
//     	printf("b =");
//     	scanf("%d", &b);
// 		S = a + b;
//     	printf("%d = %d + %d", S, a, b);
//     return(0);
// }

// #include <stdio.h>    
// int main(){
//     int a, b;
//     scanf("%d%d", &a, &b);
//     printf("%d\n", a+b);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a,b,d;
//     char c;
//     float e;
//     // scanf("%d %c %d",&a, &c, &b);
//     printf("nhap so a:");
//     scanf("%d",&a);
//     printf("nhap hanh dong:");
//     scanf(" %c",&c);        //scanf cái %c thì nên cách ra ở đầu
//     printf("nhap so b:");
//     scanf("%d",&b);
   
//     switch(c){
//         case '+':
//             d=a+b;
//             printf("%d+%d=%d",a,b,d);
//             break;
//         case '-':
//             d=a-b;
//             printf("%d-%d=%d",a,b,d);
//             break;
//         case '*':
//             d=a*b;
//             printf("%d*%d=%d",a,b,d);
//             break;
//         case '/':
//             e=(float)a/b;
//             printf("%d/%d=%.2f",a,b,e);
//             break;
//     }
//     return 0;
// }


#include <stdio.h>

int main()
{
    double num1,num2;
    char op;
    int cont = 0;
    while (cont == 0)
    {
        printf(" Nhap so thu 1, phep toan va so thu 2: \n");
        scanf("%lf %c %lf", &num1, &op, &num2);
        switch (op)
        {
            case '+':
                printf("%.1lf + %.1lf = %.1lf",num1, num2, num1 + num2);
                cont = 1;
                break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf",num1, num2, num1 - num2);
                cont = 1;
                break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf",num1, num2, num1 * num2);
                cont = 1;
                break;
            case '/':
                printf("%.1lf / %.1lf = %.1lf",num1, num2, num1 / num2);
                cont = 1;
                break;
            default:
                printf("Phep tinh khong hop le, ban co muon nhap lai. Nhan 1 de nhap lai, 0 de bo qua");
                int nhap_lai;
                scanf("%d", &nhap_lai);
                if (nhap_lai == 1) cont = 0;
                else cont = 1;
        }
    }
}
// }

///


// #include <stdio.h>
// int main () {
//     int pa, pd, tf , ti , income , n;
//     pa = 9000000 ;// Personal pending amount $/month
//     pd = 3600000 ;// Alimony  for each his/her dependent / month 
  
//     ti = income - tf ;
    
//     printf ("Your income this year: ");
//     scanf("%d", &income);
//     printf ("Number of dependent: ");
//     scanf ("%d", &n);
//      tf = 12*(pa+n*pd);
//     printf ("Tax-free income : %d",tf);
//     printf ("\nTaxable income: %d ", ti);
    
//         if (ti <= 0){
//              printf ("\nIncome tax = 0");}
             
//         else if ( 0<ti <= 5000000 ){
//              printf ("\nIncome tax = %d", ti*5/100);}
             
//         else if ( 5000001 <= ti <= 10000000){
//              printf ("\nIncome tax = %d", ti*10/100);}
             
//         else  ( 10000001 <= ti <= 18000000);{
//              printf ( "\nIncome tax = %d", ti*20/100);}
             
//     return 0; 
// }

// #include <stdio.h>
// int main()
// { float  pa = 9000000;
//   float pd = 3600000;
//   float income , tf , ti;
//   int n;
//   printf(" Your income of this year:");
//   scanf("%f",&income);
//   printf("Number of dependent:");
//   scanf("%d",&n);
//   tf = 12*(pa + n*pd);
//   printf(" Tax-free income:%f\n",tf);
//   ti= income - tf;
//   if(ti<=0)
//   { printf("Taxable income = 0\n");
//     printf("Income tax = 0\n");}
//    else if (ti>0 && ti<= 5000000)
//    { printf("Taxable income = %f\n",ti);
//     printf("Income tax = %f\n",ti*5/100);}
//    else if (ti>5000000 && ti<=10000000)
//    { printf("Taxable income = %f\n ",ti);
//      printf("Income tax = %f\n",5000000*5/100 + (ti-5000000)*10/100);}
//    else if (ti>10000000 && ti<=18000000){
//      printf(" Taxable income = %f\n",ti);
//      printf("Income tax = %f\n",5000000*5/100+8000000*10/100+(ti-10000000)*15/100);}
//    else {
//     printf("Taxable income = %f\n",ti);
//     printf("Income tax = %f\n",5000000*5/100+5000000*10/100+8000000*15/100+(ti-18000000)*20/100);}
//     getchar();getchar();
//     return 0 ;
// }


///


