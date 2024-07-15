#include<stdio.h>

int main(){
//     //Bài 1:
//     // int a,b;
//     // scanf("%d", &a);
//     // scanf("%d", &b);
//     // if(b<a) printf("b");
//     // else printf("%d", b);
    
//     //Bài 2:
    float n;
    int S = 0;
    scanf("%f", &n);
    int i;
    for(i=0;i<n;i++){
        if(i%2==0 && n>=6){
            S = S + i;
        }
    }
    printf("%d", S);

//     //Bài 3:
//     // int n;
//     // int S = 1;
//     // scanf("%d", &n);
//     // int i;
//     // for(i=1;i<=n;i++){
//     //         S = S*i;
//     //     }
//     // printf("%d", S);


    return(0);
}

//Bài 4:
// #include<stdio.h>
// #include<string.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int i;
//     char a[n];
//     for(i=0;i<n;i++){
//         scanf("\n%c", &a[i]);
//     }
//         for(int i=0; a[i] != '\0'; i++){
//             if(a[i]>='a' && a[i]<='z'){
//                 a[i] -= 32; // b?ng ascii là -32 th? xu?ng vi?t hoa và ngư?c l?i
//             }   
// //           printf(" %c", a[i]);
//     }  

//        for(i=0;i<n;i++){
//         printf("%c", a[i]);
//     }
// }

// reverse string
// #include <stdio.h>  
// #include <string.h>  
// int main()  
// {  
//     char str[40]; // declare the size of character string  
//     printf (" \n Enter a string to be reversed: ");  
//     scanf ("%s", str);  
      
//     // use strrev() function to reverse a string  
//     printf (" \n After the reverse of a string: %s ", strrev(str));  
//     return 0;  
// }  

//cách 2;
// #include <stdio.h>  
// #include <conio.h>  
// #include <string.h>  
// void main()  
// {  
//     char str[50], temp; // define the size of str[] array  
//     int i, left, right, len;  
//     printf (" \n Display a reverse string in the C: \n");  
//     printf (" ----------------------- ");  
//     printf (" \n Enter a string to reverse order: ");  
//     scanf( "%s", &str);  
//     len = strlen(str); // get the length of the string  
//     left = 0; // set left index at 0  
//     right = len - 1; // set right index len - 1  
//     // use for loop to store the reverse string  
//     for (i = left; i <right; i++)  
//     {  
//         temp = str[i];  
//         str[i] = str[right];  
//         str[right] = temp;  
//         right--;  
//     }  
//     printf (" The reverse of the original string is: %s ",  str);  
//     getch();  
// }  

//Bài 7:
//Bài làm thêm:
// #include <stdio.h>

// int MAXN=50;
// int number_of_employee=0;

// int menu(){
//     int ans=0;
//     printf("========================\n");
//     printf("1. Add a new employee.\n");
//     printf("2. Print employee info based on name.\n");
//     printf("3. Find employee based on name, \n ");
//     printf("-1. Quit \n");
//     printf("========================\n");
//     printf("Input Option:");
//     scanf("%d",&ans);
//     return ans;
// }

// void add(char codes[][9], char names[][21],double salaries[], double allowances[],int*pn){
//     printf("Input code:");
//     fflush(stdin);
//     scanf("%9s",codes[*pn]);
//     printf("Input employee name:");
//     fflush(stdin);
//     scanf("%21[^\n]",names[*pn]);
//     printf("Input salaries:");
//     fflush(stdin);
//     scanf("%lf",&salaries[*pn]);
//     printf("Input allowances:");
//     fflush(stdin);
//     scanf("%lf",&allowances[*pn]);
//     (*pn)++;
// }

// void show_info(char codes[][9], char names[][21], double salaries[], double allowances[], int n){
//     printf("Number of employee:%d\n",n);
//     for (int k=0; k<n; k++){
//         printf("********\n");
//         printf("CODE:%s\n NAME:%s\n SALARY:%f\n ALLOWANCE:%f\n",codes[k],names[k],salaries[k],allowances[k]);
//     }

// }

// int main(){
//     char codes [MAXN][9];
//     char names [MAXN][21];
//     double salaries[MAXN];
//     double allowances[MAXN];

//     int choice=0;
//     int n;
    

//     while(choice!=-1){
//         choice=menu();
//         switch(choice){
//             case 1:
//             add(codes, names, salaries, allowances, &number_of_employee);
//             break;
//             case 100:
//             show_info(codes,names,salaries,allowances,number_of_employee);
//             break;
//         }
//     }
//     printf("FINISHED!");
//     return 0;
// }
    
//Bài sắp xếp làm thêm:

// #include<stdio.h>

// int main()
// {
//     char a[5];
//     gets(a);
//     int i,j;
//     // for(i=0;i<10;i++){
//     //     fflush(stdin);
//     //     a[i]=getchar();
//     // }

//     for(i=0;i<5;i++){
//         for(j=0;j<5;j++){
//             if(a[i]>a[j]){
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     printf("%c%c%c%c%c", a[0],a[1],a[2],a[3],a[4]);
//     return(0);

// }

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     // int yes;
//     char str[5];
//     char str2[] = "hanoi";
//     nhap:
//     scanf("%s", &str);
//     int yes=strcmp(str,str2);
//     if(yes==0) printf("haion"); 
//     else{
//         printf("Nhap ha noi di");
//         goto nhap;
//     }
//     return(0);
// }


//Bài làm thêm reverse 3 số cuối:
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin); // Nhận dấu cách cả kí tự enter
//     int len = strlen(str); // get length of the string
    
//     if (len >= 3) { // check if the string has at least 3 characters
//         char temp = str[len-2];
//         str[len-2] = str[len-4];
//         str[len-4] = temp;
//         printf("Reversed string: %s", str); // print the reversed string
//     } else {
//         printf("String is too short."); // error message for strings with less than 3 characters
//     }
//     return 0;
// }

//cách 2:
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100];
//     scanf("%s", &str);
//     int len,temp;
//     len = strlen(str);
//     if(len>=3){
//         temp = str[len-1];
//         str[len-1] = str[len-3];
//         str[len-3] = temp;
//     }
//     printf("%s", str);


// }

//Bài làm thêm đếm số từ trong câu:
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>

// int main()
// {
// 	char str[1000];
// 	fgets(str,1000,stdin); 
// 	short count = 0, length = strlen(str);
// 	for (int i = 0; i < length; i++)
// 	{
// 		if (isblank(str[i + 1]) && isalnum(str[i])) count++;
// 	}
// 	if (isalnum(str[length - 1])) count++;
// 	printf("number of words: %hi", count);
// 	return 0;
// }


//BÀi 7:

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100];
//     printf("Nhap chuoi:");
//     fgets(str,100,stdin);
//     int len = strlen(str);
//     int i;
//     for(i=0; i<len; i+=2){
//         printf("%c", str[i]);
//     }
// return(0);
// }  

//Hàm đối xứng symenitic:

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100];
//     scanf("%s", &str);
//     int flag = 0; 
//     int len = strlen(str);
//     int i,j;
//     for(i=0,j=len-1;i<len/2;i++, j--){
//        if(str[i] != str[j]){
//             flag = 1;
//             break;
//        }
//     }
//     if(flag == 0) printf("ham doi xung");
//     else printf("ham k doi xung");
//     return(0);
// }
    
//Bài linh:

// #include<stdio.h>
// #include<string.h>

// void sap_xep(char a[][30], int size, int opt){
//     int i,j;
//         for(i=0;i<size;i++){
//             for(j=i+1;j<size;j++){
//                 if(strcmp(a[i],a[j])*opt>0){
//                     char temp[30];
//                     strcpy(temp,a[i]);
//                     strcpy(a[i],a[j]);
//                     strcpy(a[j],temp);
//                 }
//             }
//         }
// } 

// int main(){
//     char a[5][30];
//     int i;
//     for(i=0;i<5;i++) scanf("%s", &a[i]);
//     sap_xep(a,5,1);
//     for(i=0;i<5;i++) printf("%s ", a[i]);
// }


///

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char s[100];
//     gets(s);
//     int i;
//     for(i=0;s[i] != '\0';i++){
//         if(s[i]>='a' && s[i]<'z' || s[i]>='A' && s[i]<'Z' ){
//                printf("%c", s[i]);              
//         }
//     }

// }