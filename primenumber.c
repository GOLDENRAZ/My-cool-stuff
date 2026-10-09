/*
 Andreas Kasoa
 October 9, 2026
 Homework 3
 EE-1311-001
 
 Prime Number Checker:
 Determine whether a positive integer entered by the user is prime or not.
 ======================
 Using gcc via Cygwin:
 
 Type: gcc primenumber.c
 Run the program with ./a.out.
 Program will display banner.
 Enter C or c to check a number, then enter a positive integer.
 The number go through Prime test and release the result whether number entered is prime or not.
 After each result, user will be asked to enter C or c to check another number,or X or x to quit.
 ===============================================
 How the algorithm works:
 
 The prime function receives the entered number by User.
 It identifies 2 as prime, numbers below 2 as not prime, and all other even numbers as not prime.

 For the remaining odd numbers, it calculates the square root of the number and tests odd divisors starting at 3, increasing by 2.
 The search includes divisors equal to the square root.

 If a divisor produces a remainder of zero, it will prints that the number is not prime and returns 0.
 If no divisor is found, it prints that the number is prime and returns 1.

 Testing through the square root is sufficient because if number is not prime,
 at least one of its factors must be less than or equal to its square root.
 */

#include <stdio.h>
#include <math.h>

void banner() {
    int StudentID = 1002428968;
    printf("-----Andreas Kasoa ID = %d------\n", StudentID);
    printf("________________________________________\n");
    printf("|            A        K   K            |\n");
    printf("|           A A       K  K             |\n");
    printf("|          AAAAA      K K              |\n");
    printf("|         A     A     KK               |\n");
    printf("|         A     A     K K              |\n");
    printf("|         A     A     K  K             |\n");
    printf("|                                      |\n");
    printf("|            I LOVE UTA <3            |\n");
    printf("|______________________________________|\n");
    printf("|           Andreas Kasoa              |\n");
    printf("|--------------------------------------|\n");
    printf("|              <UTA EE>                |\n");
    printf("|--------------------------------------|\n");
    printf("|______________________________________|\n");
    printf("-----Andreas Kasoa ID = %d------\n\n", StudentID);
    
}
char input() {
	char userInput;
	scanf(" %c", &userInput);
	
	return userInput;
	
}

int prime(int num) {
	if (num == 2) {
		printf ("%d is prime!", num);
		return 1;
	}
	else if (num < 2) {
		printf ("%d is NOT prime!", num);
		return 0;
	}
	else if (num % 2 == 0) {
		printf ("%d is NOT prime!", num);
		return 0;
	}
	else {
		double num2 = sqrt(num);
		for (int i = 3 ; i <= num2; i = i + 2) {
			if (num % i == 0) {
				printf ("%d is NOT prime!", num);
				return 0;
			}
		}
		printf ("%d is prime!", num);
		return 1;
		}
}

int main() {
	char userInput;
	int num;
	
	printf("============Welcome to Prime Number Checker============\n");
	
	banner();
	
	printf("Please type 'C' to check a number or 'X' to quit: ");
	userInput = input();
	while (userInput == 'C' || userInput == 'c') {
		printf("Please input a whole positive number to evaluate if the number is prime: ");
		scanf("%d", &num);
		
		printf("\n*============================*\n");
		prime(num);
		printf("\n*============================*\n");
		
		printf("\nPlease type 'C' to check a number or 'X' to quit: ");
		userInput = input();
	}
	printf("\nHave a great day :)\n");
	return 0;

}
