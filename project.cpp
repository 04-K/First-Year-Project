#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
void programstart(void);
int main ()
{
	//Color//
	system("Color 70");
	
	//Starting Question//
	char start;
	printf("Do you want to start the program?\n[Y/N]?\nAnswer: "); scanf("%s", &start);
	while(start=='Y')
	{
		//Seperator//
		 for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
		programstart();	
		getchar();
	}
	
}
void programstart(void)
{
	//Variables//
	char word [50];
	char fname [50];
	char lname [50];
	char nameverif;
	int interaction1;
	
	//Warning//
	printf("\n=======[READ BEFORE PROCEEDING]========\n\n");
	printf("This program contains questions to be answered\n");
	printf("and answers are CASE SENSITIVE.\n");
	printf("If a character was entered incorrectly,\n");
	printf("then the program will get TERMINATED\n");
	printf("or it may get RESTARTED to its previous point\n");
	printf("So it is recommended to turn on CAPS LOCK!\n");
	printf("\nEnter a random word if you are done reading: "); scanf("%s", &word);
	for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
	
	//Grum's Introduction
	printf("\n============[INTRODUCTION]=============\n");
	printf("\nGrum: HELLO! You may call me Grum");
	printf("\nGrum: Hehe... Get it? Pro\"GRUM\"?\n");
	printf("\n[1] Very Funny...");
	printf("\n[2] HAHAHA! Good one!");
	printf("\n\nAnswer: "); scanf("%d", &interaction1);
	for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
	
	if (interaction1==1)
		printf("\n\nGrum: Oh come on! I tried my best :(...\n\n");
	
	else if (interaction1==2)
		printf("\n\nGrum: See! I knew it! I'm funny! HAHAHAHA!\n\n");
	
	else
		printf("\n\nGrum: You must be blind dear user...\n\n");
	
	
	
	//For Entering Name//
	printf("\n==========[TELL ME YOUR NAME]==========\n");
	printf("\nGrum: OH! OH! I'd like to know your name!");
	printf("\nGrum: You may enter it here!");
	printf("\n\nPlease enter your first name: "); scanf("%s", &fname);
	printf("Please enter your last name: "); scanf("%s", &lname);
	for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
	
	//Name Verifier//
	printf("\n============[NAME VERIFIER]============\n");
	printf("\nGrum: Is %s %s your name?", fname, lname);
	printf("\n\n=======================================");
	printf("\nPress [Y] if YES, press [N] if NO");
	printf("\n	Answer: "); scanf("%s", &nameverif);
	for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
	
	switch(nameverif)
	{
		case 'Y': 
		printf("\n[ENTERED NAME HAS BEEN SUCCESFULLY SET]"); 
		printf("\n\nGrum: Hello %s %s!", fname, lname); 
		printf("\nGrum: Once again, I am Grum and...", fname, lname);
		printf("\nGrum: Welcome to an interactive program! Which is me~\n", fname, lname); 
		break;
		
		case 'N': 	
		//For Entering Name Again (Loop)//
		while(nameverif=='N')
			{
			printf("\n\n========[ENTER YOUR NAME AGAIN]========\n");
			printf("\nPlease enter your first name again: "); scanf("%s", &fname);
			printf("Please enter your last name again: "); scanf("%s", &lname);
			printf("\n============[NAME VERIFIER]============\n");
			printf("\nIs %s %s your name?", fname, lname);
			printf("\n\n=======================================");
			printf("\nPress Y if YES, press N if NO");
			printf("\n	Answer: "); scanf("%s", &nameverif);
			for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
			}
			if (nameverif=='Y')
				{
				printf("\n[ENTERED NAME HAS BEEN SUCCESFULLY SET]"); 
				printf("\n\nGrum: Hello %s %s!", fname, lname); 
				printf("\nGrum: Once again, I am Grum and...", fname, lname);
				printf("\nGrum: Welcome to an interactive program! Which is me~\n", fname, lname); 
				}
			else
				printf("\nGrum: You have entered an invalid character... Entering the previous name you mentioned...");
				
		break;
	
		default:
		printf("\nGrum: You have entered an invalid character..."); 
		break;
	}
	
	//More Variables//
	char ready;
	
	//Introduction of the Program//
	printf("\n=======================================");
	printf("\n\nGrum: Are you ready to start the interactive calculator?"); 
	printf("\nPress [Y] if YES, press [N] if NO"); 
	printf("\n	Answer: "); scanf("%s", &ready);
	for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
	
	switch(ready)
	{
		case 'Y':
		printf("\n\nGrum: Then let us get started!");
		break;
		
		case 'N':
			while(ready=='N')
			{
			printf("\n\n=============[AW SHUCKS!]=============");
			printf("\n\nGrum: I'll give you some time to think about it!");
			printf("\nGrum: Please enter [Y] if you are ready,\nand [N] if still not\n	Answer: "); scanf("%s", &ready);
			for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
			}
			if (ready=='Y')
				{
				printf("\nGrum: Then let us get started!\n\n");  
				}
			else
				printf("\nGrum: You have entered an invalid character...");
	}
	
	char operation;
	int numbers;
	float firstnum, secondnum, thirdnum, fourthnum;
	float addition, subtraction, multiplication, division;
	
	while (ready=='Y')
	{
		printf("\nGrum: First, what type of operation would you like to be done?");
		printf("\nType [A] for addition");
		printf("\nType [S] for subtraction");
		printf("\nType [M] for multiplication");
		printf("\nType [D] for division\n\n");
		printf("Answer: ");
		scanf("%s", &operation);
		for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
		printf("\n=======================================\n");
		printf("\nGrum: Type how many numbers are you going to use");
		printf("\n(Minimum: 2)");
		printf("\n(Maximum: 4)\n\n");
		printf("=======================================\n\n");
		printf("Answer: ");
		scanf("%d", &numbers);
		for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
		printf("\n\nChoices complete, preparing for the next action...\n\n\n");
	
	
		switch (numbers)
		{
		case 2:
			printf("Input first number: "); scanf("%f", &firstnum);
			printf("Input second number: "); scanf("%f", &secondnum);
			for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
			switch (operation){
			case 'A':
				addition= firstnum + secondnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", addition);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", addition);
				printf("=======================================\n\n");
				break;
			
			case 'S':
				subtraction= firstnum - secondnum;
				printf("\n\n=======================================\n\n"); 
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", subtraction);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", subtraction);
				printf("=======================================\n\n");
				break;
			
			case 'M':
				multiplication= firstnum * secondnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", multiplication);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", multiplication);
				printf("=======================================\n\n");
				break;
			
			case 'D':
				division= firstnum / secondnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", division);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", division);
				printf("=======================================\n\n");
				break;
			
			default:
				printf("\nGrum: You have entered an invalid character...");
			}
			break;
			
		case 3:
			printf("Input first number: "); scanf("%f", &firstnum);
			printf("Input second number: "); scanf("%f", &secondnum);
			printf("Input third number: "); scanf("%f", &thirdnum);
			for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
			switch (operation){
			case 'A':
				addition= firstnum + secondnum + thirdnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", addition);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", addition);
				printf("=======================================\n\n");
				break;
			
			case 'S':
				subtraction= firstnum - secondnum - thirdnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", subtraction);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", subtraction);
				printf("=======================================\n\n");
				break;
			
			case 'M':
				multiplication= firstnum * secondnum * thirdnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", multiplication);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", multiplication);
				printf("=======================================\n\n");
				break;
			
			case 'D':
				division= firstnum / secondnum / thirdnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", division);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", division);
				printf("=======================================\n\n");
				break;
				
			default:
				printf("\nGrum: You have entered an invalid character...");
			}
			break;
			
		case 4:
			printf("Input first number: "); scanf("%f", &firstnum);
			printf("Input second number: "); scanf("%f", &secondnum);
			printf("Input third number: "); scanf("%f", &thirdnum);
			printf("Input fourth number: "); scanf("%f", &fourthnum);
			for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
			switch (operation)
			{
			case 'A':
				addition= firstnum + secondnum + thirdnum + fourthnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", addition);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", addition);
				printf("=======================================\n\n");
				break;
			
			case 'S':
				subtraction= firstnum - secondnum - thirdnum - fourthnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", subtraction);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", subtraction);
				printf("=======================================\n\n");
				break;
			
			case 'M':
				multiplication= firstnum * secondnum * thirdnum * fourthnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", multiplication);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", multiplication);
				printf("=======================================\n\n");
				break;
			
			case 'D':
				division= firstnum / secondnum / thirdnum / fourthnum;
				printf("\n\n=======================================\n\n");
				printf("Grum: I have calculated the answer!");
				printf("\n\n=======================================\n\n");
				printf("Grum: In decimal form, it is...\n\n");
				printf("Answer: %.4f!!\n\n\n", division);
				printf("Grum: Rounded off into a whole number, then it is...\n\n");
				printf("Answer: %.0f!!\n\n", division);
				printf("=======================================\n\n");
				break;
			
			default:
				printf("\nGrum: You have entered an invalid character...");
			}
			break;
			
		default:
			printf("\nGrum: You have entered an invalid character..."); 
			break;
		}
		printf("\n\n=========[COMMAND COMPLETED]==========");
		printf("\n\nGrum: Do you want to calculate again??");
		printf("\nPlease enter 'Y' if YES,\nand 'N' if NO\n	Answer: "); scanf("%s", &ready);
		for (int i = 1; i <= 50; ++i) 
  			{
    		cout << "\n" << "\n"; 
  			}
	}
	
	while(ready=='N')
			{
			printf("\n\n=============[AW SHUCKS!]=============");
			printf("\n\nGrum: Then this is the end of the program!");
			printf("\nGrum: Goodbye! %s %s\n\n",fname, lname);
			printf("\nGrum: Oh and the random word you typed earlier was: %s", word);
			printf("\nGrum: And I will never forget that :)");
			printf("\nYou may now press [X] to exit the program"); scanf("%s", &ready);
			}
	
getchar();
}
