#include <stdio.h>
#include <math.h>

int getUserChoice()
{   int choice;
    printf("\n==========================MENU==============================");
	printf("\n| 1. Process primes.                              Press: 1 |");
	printf("\n| 2. Print min, max digit in an integer.          Press: 2 |");
	printf("\n| 3. New FUnctionExit the program.                            Press: 3 |");
	printf("\n| 4. Exit the program.                            Press: 3 |");
	printf("\n============================================================\n");
	printf("\nEnter Your Choice: ");
	scanf("%d%*c", &choice);
	return choice;
}

void primes() 
{    int n, i, s = 1;
     printf("\nEnter positive interger: ");
     scanf("%d", &n);
     int m = sqrt(n);
     for ( i = 2; i <= m; i++)
        if (n % i == 0)
		    s = 0;
     if (s == 1 && n == 1)
        printf("\nThe input number is not a prime!\n");
     else if (s == 0 || n <= 0) 
        printf("\nThe input number is not a prime!\n");
     else
        printf("\nThe input number is a prime!\n");
}

void digits()
{
	 int n;
	 printf("\nEnter integer: ");
	 scanf("%d", &n);
	 int max, min;
	 max = n % 10;
	 min = n % 10;
	 while( n > 0)
	 {
		int temp = n % 10;
		       n/=10;
		if ( max < temp)
		{
			 max = temp;
		}
		if ( min > temp)
		{
			 min = temp;
		}
     }
     printf("\nMinimum of digits: %d\n", min);
     printf("Maximum of digits: %d\n", max); 
}

int main()
{   int userChoice;
    do
    {   userChoice = getUserChoice();
        switch(userChoice)
		{   case 1: primes();
		            break;
		    case 2: digits();
			        break; 
			case 3: printf("Funcrion 3");
					break;
		    default: printf("\nGood Bye!");
	    }
	}
	while (userChoice>0 && userChoice<4);
	return 0;
}





















// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// #include <math.h>

// int prime(int n) {
//     if (n <= 1) {
//         return 0;
//     }
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int getmindigit(int n) {
//     int min = INT_MAX;
//     while (n != 0) {
//         int digit = n % 10;
//         if (digit < min) {
//             min = digit;
//         }
//         n /= 10;
//     }
//     return min;
// }

// int getmaxdigit(int n) {
//     int max = INT_MIN;
//     while (n != 0) {
//         int digit = n % 10;
//         if (digit > max) {
//             max = digit;
//         }
//         n /= 10;
//     }
//     return max;
// }

// int main() {
//     int choice, n;
//     do {
//         printf("Menu:\n");
//         printf("1. Process primes\n");
//         printf("2. Print min, max digit in an integer\n");
//         printf("3. Quit\n");
//         printf("Enter your choice (1-3): ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter a number: ");
//                 scanf("%d", &n);
//                 if (prime(n)) {
//                     printf("%d is a prime number\n", n);
//                 } else {
//                     printf("%d is not a prime number\n", n);
//                 }
//                 break;
//             case 2:
//                 printf("Enter a number: ");
//                 scanf("%d", &n);
//                 printf("The min digit is %d\n", getmindigit(n));
//                 printf("The max digit is %d\n", getmaxdigit(n));
//                 break;
//             case 3:
//                 printf("Goodbye!\n");
//                 exit(0);
//             default:
//                 printf("Invalid choice. Please try again.\n");
//                 break;
//         }
//     } while (choice>0 && choice<3);

//     return 0;
// }