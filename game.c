#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void help();
void edit_score(float , char []);
int main()
    {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     time_t t;
     mainhome:
     system("cls");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t        WELCOME ");
     printf("\n\t\t\t          TO ");
     printf("\n\t\t\t       QUIZ GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t       This is compro project   ") ;
     printf("\n\t\t             ken muraki     ") ;
     printf("\n\t\t        Jeerachaya jareonphol     ") ;
     printf("\n\t\t                sent     ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t -> Press S to start the game");
     printf("\n\t\t -> Press V to view the highest score  ");
     printf("\n\t\t -> Press R to reset score");
     printf("\n\t\t -> Press H for help            ");
     printf("\n\t\t -> Press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     	for(i=0;i<80;i++)
		printf("=");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("=");
     choice=toupper(getch());
     
    if(choice=='S')
    {
     system("cls");
    }
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked total 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (getch()=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;
     }
    }