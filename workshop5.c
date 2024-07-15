// Problem 1
// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// #include <ctype.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(){
// 	srand(time(NULL)); // <====
// 	// srand(5); // <========
// 	int total, a, b, count;
// 	printf("Dice Thrower\n");
// 	printf("==============\n");
// 	do{
// 		printf("Total sought: ");
// 		scanf("%d", &total);
		
// 	}
//     while(total < 2 || total > 12);
// 	count = 1;
// 	do{
// 		a = 1 + rand()%(6);
// 		b = 1 + rand()%(6);
// 		printf("Result of throw %d : %d + %d\n", count, a, b);
// 		count++;
// 	}
//     while(a + b != total);
// 	printf("You got your total in %d throws!", count-1);
// 	return 0;
// }



// Problem 3
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int getUserChoice(){
int choice;
    printf("\n==========================MENU==========================");
    printf("\n|1.Processing date data      Press:1   |");
    printf("\n|2.Character data            Press:2   |");
    printf("\n|3.Quit                      Press:Anykeys |");
    printf("\n========================================================\n");
    printf("\nEnter Your Choice: ");
    scanf("%d%*c",&choice);
    return choice;
}
int validDate(int n,int m,int y){
	int maxd =31;

	if(n<1||n>31||m<1||m>12)
	return 0;
	if(m==4||m==6||m==9||m==11)
	maxd =30;
	else if(m==2){
		if(y%400==0||y%4==0 && y%100!=0)
		   maxd =29;
		else
		   maxd =28;
	}
	return n<=maxd;
}
void date(){
	int n,m,y,s; 
	    printf("\nEnter day, month, year: ");
	    scanf("%d%d%d",&n,&m,&y);
	    s= validDate(n,m,y);

	    if(s==1)
	      printf("\nValid Date! ");
	    else
	      printf("\nInvalid Date! ");
}

void data(){
	char c1,c2,c;
	    printf("Enter 2 characters:");
	    scanf("%c%c",&c1,&c2);
	    if(c1<c2){
	    	c=c1;
	    	c1=c2;
	    	c2=c;
		}
		for(c=c1;c>=c2;c--){
			printf("%c:%d,%xh\n",c,c,c);
		}
}
int main(){
	int userChoice;

	do {
		userChoice =getUserChoice();
		switch(userChoice){
			   case 1: date();
			   break;
			   case 2: data();
			   break;
			   default:
			   	   printf("\nGood Bye!");
		}
	}
	while(userChoice>0 && userChoice<3);
	return 0;
}

