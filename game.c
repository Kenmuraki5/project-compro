#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void edit_score(float score, char plnm[20])
{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc){ 
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
    }
}

void top_score()
{
    system("cls");
    char name[20];
    float scr;
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&name,&scr);
    printf("\n\n\t\t*************************************************************");
    printf("\n\n\t\t\t %s was the Highest Score",name);
    printf("\n\n\t\t\t score: %f",scr);
    printf("\n\n\t\t*************************************************************");
    fclose(f);
}

void help()
{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n *************************************************************************");
    printf("\n                           C program Quiz Game");
    printf("\n 1) There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n    In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n 2) Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n 3) You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n 4) You will be asked questions continuously if you keep giving the right answers.");
	printf("\n\n**************************************************************************");
	printf("\n\n*****This quizgame is part of the project of computer programming with c code ******");
    printf("\033[1;31m");
    printf("\n\n\nPrees any key to Main menu");
}
int main()
{
    int countr,number,number2,count,i,n;
    float score;
    char choice;
    char playername[30];
    time_t t;
    time(&t);
    mainhome:
    system("cls");
    printf("\033[1;31m");
    printf("\033[1;31m");
    printf("\n\t\t -----------------------------------------");
    printf("\n\t\t|\t          WELCOME                 |");
    printf("\n\t\t|\t            TO                    |");
    printf("\n\t\t|\t         QUIZ GAME                |");
    printf("\n\t\t -----------------------------------------");
    printf("\033[0;37m");
    printf("\n\t\t  \033[0;34m________________________________________");
    printf("\n\t\t                \033[0;37mTEST YOUR IQ\033[0;37m    ") ;
    printf("\n\t\t  \033[0;34m________________________________________");
    printf("\n\t\t  \033[0;36m________________________________________\033[0;37m\n");
    printf("\n\t\t    - Press \033[1;31mS\033[0;37m to start the game");
    printf("\n\t\t    - Press \033[1;31mV\033[0;37m to view the highest score  ");
    printf("\n\t\t    - Press \033[1;31mH\033[0;37m for help            ");
    printf("\n\t\t    - Press \033[1;31mQ\033[0;37m to quit             ");
    printf("\n\t\t  \033[0;36m________________________________________\033[0;37m\n\n");
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
    else if (choice=='H'){
        help();
        getch();
        goto mainhome;
    }
    else if(choice == 'V'){
        top_score();
        getch();
        goto mainhome;
    }
    else
        goto mainhome;
    printf("\n\n\n******Press ENTER to go warm-up game******");
    printf("\n\n\n\n\n\n\n\t\t\tResister your name: ");
    gets(playername);

    system("cls");
    printf("\n\t\t ---------------------  Welcome %s to C Program Quiz Game ---------------------",playername);
    printf("\n\n\t\t Here are some tips you might wanna know before playing:");
    printf("\n\t\t -------------------------------------------------------------------------");
    printf("\n\t\t >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n\t\t >> In warmup round you will be asked total 3 questions to test your");
    printf("\n\t\t    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n\t\t    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n\t\t >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n\t\t    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n\t\t    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n\t\t    right option.");
    printf("\n\t\t >> You will be asked questions continuously, till right answers are given");
    printf("\n\t\t >> No negative marking for wrong answers!");
    printf("\n\n\t\t\t\t    !!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n\n\t\t\t\033[0;34m Press Y  to play this game!\n");
    printf("\n\t\t\t\033[1;31m Press any other key to return to the main menu!\033[0;37m");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
	{
        goto mainhome;
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
    if(count>=2)
        goto test;
    else
        {
        system("cls");
        printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME Because you stupid, BETTER LUCK NEXT TIME");
        getch();
        goto mainhome;
        }
    test:
    system("cls");
    printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
    printf("\n\n\n\n\t!Press P key to Start the Game!");
    if(toupper(getch())=='P')
    {
		goto game;
    }
    else{
        goto test;
    }
    game:
    system("cls");
    countr=0;
    for(i=1;i<=2;i++)
    {
        system("cls");
        number2=i;
        switch(number2)
        {
            case 1:
                printf("\n\nWhat is the National Game of England?");
                printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
                if (toupper(getch())=='C')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
                    break;}

            case 2:
                printf("\n\n\nStudy of Earthquake is called............,");
                printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
                if (toupper(getch())=='A')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;}
                else
                    {
                    printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
                    break;
                    }
        }
    }
    system("cls");
	score=(float)countr*100000;
	if(score==20000)
	{
	    printf("\n \t\t**************** wowwwwwwwwww ****************");
        printf("\n\n\n \t\t     you are intelligent man");
        printf("\n\n\n \t\t  congratulations a new millionare");
	    printf("\n\t\t    YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t    You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	else
    {
	    printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        goto go;
    }

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;
        }
}
