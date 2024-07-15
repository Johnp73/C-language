#include<stdio.h>
#include<conio.h>
#include<string.h>

void XoaSau(char s1[],char s2[])
{
	char kq[100];
	int t=0, i=0, j, k, ns1=strlen(s2);
	strcat(s1,"|"); // nối chuỗi 
    while(s1[i]!='|')
    {
    	k=i; j=0;
    	while (s1[k]==s2[j]) {
    		k++; j++;
		}
		if(j==ns1) {
				i=ns1+i;
		}
		else {
			kq[t++]=s1[i++];
		}
	}
	printf("\nthang duc ngu chon cai can loai bo di  ");
	for(int i=0;i<t;i++) printf("%c",kq[i]);
}
int main()
{
	char s1[100],s2[100];
	printf("thang duc ngu nhap sau 1 ne: "); 
    gets(s1);
	printf("\nthang duc ngu nhap sau 2 ne: "); 
    gets(s2);
	XoaSau(s1,s2);
	getch(); // hàm nhận ký tự trong bàn phím
}