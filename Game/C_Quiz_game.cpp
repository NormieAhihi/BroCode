#include<stdio.h>
#include<ctype.h>
#include<stdlib.h> 

int main() {
	char question[][100] = {"1. What year did the language C debut?: ", 
	                        "2. Who is creating C?: ", 
							"3. What is the predecessor of C?: "};
							 
	char option[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
	                      "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmark", "D. Doc Brown",
	                      "A. Object C", "B. B", "C. C++", "D. C#"};

    char answer[3] = {'B','A','B'};
    int numberofQuestions = sizeof(question) / sizeof(question[0]);
	
	char guess;
	int score;
	
	printf("QUIZ GAME!\n");
    
	for(int i = 0;i < numberofQuestions;i++) {
		printf("*****************\n");
		printf("%s\n", question[i]);
		printf("*****************\n"); 
		for(int j = (i * 4); j < (i*4)+4;j++) {
			printf("%s\n", option[j]); 
		} 
		
		printf("guess: ");
		scanf("%c", &guess);
		scanf("%c"); 
		
		guess = toupper(guess);
		
		if(guess == answer[i]) {
			printf("CORRECT!\n");
			score++; 
		} else {
			printf("WRONG!\n"); 
		} system("cls"); 
	} printf("*******************************\n"); 
	  printf("YOUR FINAL SCORE: %d/%d\n", score, numberofQuestions); 
	  printf("*******************************"); 
	return 0; 
} 
