// #include <stdio.h>

// int main(){
//     int n;
//     printf("\nNhap so luong phan tu n = ");
//     scanf("%d", &n);
//     int S =0;
//     int i,a[n];
//     for(i = 0;i < n; ++i){
//         scanf("%d", &a[i]);
//         }
//       for(i = 0;i < n; ++i){
//                 if(a[i]%2==0){
//                     S = a[i]+S;
//                 }
// }
//     printf("\n%d", S);
//     return(0);
// }
        
//  Bài 3   
// #include <stdio.h>

// int main(){
//     int n;
//     printf("\nNhap so luong phan tu n = ");
//     scanf("%d", &n);
//     int i,j, a[n];
//     for( i = 0;i<n; i++){
//         scanf("%d", &a[i]);
//         }
// //sắp xếp:
//     for( i=0;i<n;i++){
//     	for( j=0; j<n;j++){
//     		if(a[i]<a[j]){
//     			int temp = a[i];
// 				a[i] = a[j];
// 				a[j] = temp; 
// 			} 
// 		} 
// 	} 
	
// 	for( i =0; i<n;i++){
// 		if(a[i]%2!=0){
// 			printf("so le:%d\n", a[i]); 
// 		} 
// 	} 
// }

// Bài 4
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Nhap n:");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<i; j++){
//             printf("%d", j+1);
//         }
//         printf("\n");
//     }

// return(0);

// }



// Bài 5
// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);

//     int i,a[n];
//     for(i = 0;i<n;i++){
//         scanf("%d", &a[i]);
//     }

// // Dùng để xóa 1 phần tử trong mảng:
//     int p;
//     scanf("%d", &p);
//     printf("\nOutput:\n");
//     for( i =p-1; i<n;i++){
//          a[i] = a[i+1];
//     }
//     n--;
//     for(i=0 ; i<n; i++){
//     printf("%d\n", a[i]);
//     }

//     return(0);
//     }


// Bài 6
// #include<stdio.h>

// int main()
// {
//     // char ch[11] = {'v', 'i', 'e', 't', 't', 'u', 't', 's', '.', 'v', 'n', '\0'}; // cách dùng string 
//     char s[100];
//     gets(s);

//     for(int i=0; s[i] != '\0'; i++){
//         if(i%2==1){
//             if(s[i]>='a' && s[i]<='z'){
//                 s[i] -= 32; // bảng ascii là -32 thì xuống viết hoa và ngược lại
//             }
            
//         }
//     }  
//     printf("%s\n", s);
    
// }

//'\0' là null kết thúc 1 chuỗi kí tự

// Bài 7:
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);

//     int i,a[n];
//     for(i=0;i<n;i++){
//         scanf("%d\n",&a[i]);
//     }

//     for(i=0;i<n;i++){
//         // if(a[i]%2==0){
//             printf("%d\n", a[i]*a[i]);
//         // }
//     }
//     return(0);

// }


// Bài 8:
// #include<stdio.h>

// int main()
// {
//     int a;

//     printf("Nhap a:");
//     scanf("%d", &a);

//     int x=1;
//     int b;
//     while(1){
//        if(a==x){
//             printf("%d", b);
//             break;
//        } 
//        if(a<x){
//         printf("%d not is a power of 2", a);
//         break;
//     }
//     x *=2;
//     b++;
//     }

// }

// Bài làm thêm:
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void Sap_xep(char a[][30],int size,int opt){
int i,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(strcmp(a[i],a[j])*opt>0){
                char temp[30];
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }            
        }
    }
// Đối với các kí tự thì phải xử lí bằng hàm 
}

int main(){
    char a[5][30];
    //5 là kích thước của mảng
    //30 là độ dài tên người
    int i;
        for(i=0; i<7; i++) scanf("%s", &a[i]);
    printf("\nOUTPUT\n");
    Sap_xep(a,5,1);
    // 5 là size 
    // 1 là sắp kiểu tăng dần
    //-1 là sắp kiểu giảm dần
    for(i=0;i<5;i++) printf("%s ", a[i]);

    return(0);
}

//Bài làm thêm 2:
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>

// int main(){

// char s[20];
// int i, len;
//     scanf("%[^\n]", s);
//     len=strlen(s);
//     printf("\nOUPUT\n");
//     if(len>5 && len<20 && len%2!=0){
//         for(i=(len/2)-2;i<=(len/2)+2;i++) printf("%c", s[i]);
//     }

//     return(0);
// }

//Bài làm thêm 3:
// #include <stdio.h>

// int main() {
//     char sentence[100];
//     int count = 0;
//     int i = 0;
    
//     printf("Enter a sentence: ");
//     fgets(sentence, 100, stdin);
    
//     while (sentence[i] != '\0') {
//         if (sentence[i] == 'h') {
//             count++;
//         }
//         i++;
//     }
    
//     printf("The number of 'h' characters in the sentence is %d.\n", count);
    
//     return 0;
// }


//Nối chuỗi:
// #include <stdio.h>
// #include <string.h>
 
// int main() {
//    char s1[10] = "VietTuts";
//    char s2[] = ".Vn";
     
//    int i, j, n1, n2;
     
//    n1 = strlen(s1);
//    n2 = strlen(s2);
     
//    j=0;
//    for(i = n1; i<n1+n2; i++ ) {
//       s1[i] = s2[j];
//       j++;
//    }
     
//    s1[i] = '\0';
    
//    printf("\nKet qua sau khi noi chuoi la:\n");
//    printf("%s", s1);
 
//    return 0;
// }
    ///cách 2:
// #include<stdio.h>
// #include<string.h>
 
// int main() {
//    char str1[100];
//    char str2[100];
//    char str3[100];
//    int len;
  
//    printf("Nhap chuoi 1: ");
//    gets(str1);
  
//    printf("Nhap chuoi 2: ");
//    gets(str2);
  
//    strcpy(str3, str1);
//    strcat(str3, str2);
  
//    printf("\nNoi chuoi: %s", str3);
  
//    return (0);
// }

//Bài 9:
// #include<stdio.h>
// #include<string.h>
// int main(){
// char s[100];
// gets(s);
// int i;
//     for(i=0;s[i] != '\0';i++){
//         if(s[i]>'a' && s[i]<'z' || s[i]>'A' && s[i]<'Z'){
//             printf("%c", s[i]);
//         }
//     }
//     return(0);
// }

//Bài 10:perfect number là số có tổng ước bằng chính nó

// #include<stdio.h>

// int main(){
//     int n;
//     int S;
//     scanf("%d", &n);
//     int i;
//         for(i=1;i<n;i++){
//             if(n%i != 0){
//                 continue;
//             }
//              S = S+i;
//             }
//         if(S==n) printf("%d la so hoan hao", n);
//         else printf("%d k la so hoan hao", n);
//         return(0);
//         }   

//Bài làm thêm 4:
// #include <stdio.h>

// int isVowel(int num) {
//     if(num=='a' || num=='e' || num=='i' || num=='o' || num=='u' || num=='A' || num=='E' || num=='I' || num=='O' ||num=='U')
//     {
//         return 1;
//     }else {
//         return 0;
//     }
// }

// int main(){
//     int num1, num2;
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);
//     if(isVowel(num1) && isVowel(num2)) {
//         printf("Both numbers are vowels\n");}
//     else if ( isVowel(num1))
//         printf ("%d is a vowel while %d is not a vowel", num1, num2);
//     else if  ( isVowel(num2))
//       printf ("%d is not a vowel while %d is a vowel", num1, num2);
//     else 
//        printf ("Both numbers are not vowels\n");

// }


//Bài làm thêm 5: Đếm từ 
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int countWords(char str[]) {
//     int wordCount = 0;
//     int i = 0;
//     int len = strlen(str);

//     // count words
//     while (i < len) {
//         if (!isspace(str[i])) {
//             // found the start of a word
//             wordCount++;

//             // skip to the end of the word
//             while (i < len && !isspace(str[i])) {
//                 i++;
//             }
//         } else {
//             i++;
//         }
//     }

//     return wordCount;
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str, 100, stdin);

//     // remove the newline character at the end of the input string
//     str[strcspn(str, "\n")] = '\0';

//     int wordCount = countWords(str);

//     printf("Number of words: %d\n", wordCount);

//     return 0;
// }