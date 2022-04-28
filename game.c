#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
    int countr,number,number2,count,i,n;
    float score;
    char choice;
    char playername[20];
    time_t t;
    time(&t);
    mainhome:
    system("cls");
    printf("\n\t\t________________________________________");

     printf("\n\t\t\t        WELCOME ");
     printf("\n\t\t\t          TO ");
     printf("\n\t\t\t       QUIZ GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t    TEST YOUR GK..SET YOUR HIGHSCORES!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t  - Press S to start the game");
     printf("\n\t\t  - Press V to view the highest score  ");
     printf("\n\t\t  - Press R to reset score");
     printf("\n\t\t  - Press H for help            ");
     printf("\n\t\t  - Press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
    for(i=0;i<80;i++)
		printf("=");
	    printf("\nCurrent date and time : %s",ctime(&t));
	for(i=0;i<80;i++)
		printf("=");
    printf("\n");
    choice=toupper(getch());
     
    if(choice=='S')
    {
     system("cls");
    }
    else if (choice=='Q')
		exit(1);
    else
        goto mainhome;
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
    if (toupper(getch())=='Y')
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
		number = rand() % 6;
		switch(number)
		{
			case 1:
                printf("\n\nWhich of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");count++;
                        getch();
                        break;
                    }
                else
                    {
                        printf("\n\nWrong!!! The correct answer is C.23232");
                        getch();
                        break;
                    }

			case 2:
                printf("\n\n\nThe country with the highest environmental performance index is...");
                printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
                if (toupper(getch())=='C')
                {
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.Switzerland");
                    getch();
                    break;
                }

			case 3:
                printf("\n\n\nWhich animal laughs like human being?");
                printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
                if (toupper(getch())=='B')
                    {printf("\n\nCorrect!!!");count++;
                    getch();
                    break;}
                else{
                    printf("\n\nWrong!!! The correct answer is B.Hyena");
                    getch();
                    break;}

			case 4:
                printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
                printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
                if (toupper(getch())=='B')
                    {printf("\n\nCorrect!!!");count++;
                    getch();
                    break;}
                else{
                    printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
                    getch();
                    break;}

			case 5:
                printf("\n\n\nWhich is the third highest mountain in the world?");
                printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
                if (toupper(getch())=='B')
                    {printf("\n\nCorrect!!!");count++;
                    getch();
                        break;}
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
                    getch();
                    break;
                }

			case 6:
                printf("\n\n\nWhat is the group of frogs known as?");
                printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
                if (toupper(getch())=='D' )
                {	
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }
                else
                {	
                    printf("\n\nWrong!!! The correct answer is D.An Army");
                    getch();
                    break;
                }
		}
	}
}