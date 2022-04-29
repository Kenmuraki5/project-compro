#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void change_topscore(float newscore, char namee[20])
{
    system("cls");
    char oldnm[20];
    float score;
    FILE *high;
    high=fopen("score.txt","r");
    fscanf(high,"%s%f",&oldnm,&score);
    if (newscore>=score)
    { 
        fclose(high);
        high=fopen("score.txt","w");
        fprintf(high,"%s\n%.2f", namee, newscore);
        fclose(high);
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
    home://ส่วนของ warm up ก่อนเริ่มเกม
    system("cls");
    count=0;
    for(i=1;i<4;i++)//ลูปจำนวนข้อใน warm up game เอาสัก 10 ข้อ
    {
		system("cls");
		switch(number = i)
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

    game://ส่วนของ quiz game
    system("cls");
    countr=0;
    for(i=1;i<=10;i++)//กำหนดลูปสร้างจำนวนข้อใน quiz game
    {
        system("cls");
        number2=i;
        switch(number2)
        {
            case 1:
                printf("\n\nHow high is Mount Everest?");
                printf("\n\nA.6848 m\t\tB.7848 m\n\nC.8848 m\t\tD.9848 m");
                if (toupper(getch())=='C')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is C.8848 m");getch();
                    break;}

            case 2:
                printf("\n\n\nWho is the president of America?");
                printf("\n\nA.John Cena\t\tB.Joe Biden\n\nC.Michael Jordan\t\tD.Dwayne Johnson");
                if (toupper(getch())=='B')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;}
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.Joe Biden");getch();
                    break;}   

            case 3:
                printf("\n\nHanoi is the capital of which country?");
                printf("\n\nA.Cambodia\t\tB.Laos\n\nC.Thailand\t\tD.Vietnam");
                if (toupper(getch())=='D')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is D.Vietnam");getch();
                    break;}

            case 4:
                printf("\n\nWhat is the capital of Poland?");
                printf("\n\nA.Kraków\t\tB.Gdańsk\n\nC.Leipzig\t\tD.Warsaw");
                if (toupper(getch())=='D')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is D.Warsaw");getch();
                    break;}

            case 5:
                printf("\n\nWhat brand of soft drink did Joseph Biedenharn give birth to?");
                printf("\n\nA.Coca-cola\t\tB.Pepsi\n\nC.Sprite\t\tD.Oleang");
                if (toupper(getch())=='A')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is A.Coca-cola");getch();
                    break;}

            case 6:
                printf("\n\nIn what year was Russia's Myer space station launched falling into the ocean?");
                printf("\n\nA.1970\t\tB.1980\n\nC.1990\t\tD.2000");
                if (toupper(getch())=='D')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is D.2000");getch();
                    break;}

            case 7:
                printf("\n\n\nWhat is the last letter in Greek?");
                printf("\n\nA.Theta\t\tB.Omicron\n\nC.Omega\t\tD.Sigma");
                if (toupper(getch())=='C')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;}
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.Omega");getch();
                    break;}   

            case 8:
                printf("\n\nWhere is the largest football stadium in the world?");
                printf("\n\nA.Old Trafford\t\tB.Maracanã Stadium\n\nC.Rajamangala National Stadium\t\tD.Olympic Stadium");
                if (toupper(getch())=='B')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is B.Maracanã Stadium");getch();
                    break;}

            case 9:
                printf("\n\nWhat is a photo film made of?");
                printf("\n\nA.Acetonitrile\t\tB.Silver Nitrate\n\nC.Ethyl Acetate\t\tD.Sodium chloride");
                if (toupper(getch())=='B')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is B.Silver Nitrate");getch();
                    break;}

            case 10:
                printf("\n\nWhich lizard is the largest in the world?");
                printf("\n\nA.Komodo Dragon\t\tB.Lizardon\n\nC.Megalodon\t\tD.Jackson's Chameleon");
                if (toupper(getch())=='A')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is A.Komodo Dragon");getch();
                    break;}     
        }
    }
    system("cls");
	score=(float)countr*100000;
	if(score==1000000)
	{
	    printf("\n \t\t**************** wowwwwwwwwww ****************");
        printf("\n\n\n \t\t     you are intelligent man");
        printf("\n\n\n \t\t  congratulations a new millionare");
	    printf("\n\t\t    YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t    You won $%.2f",score);
	    printf("\n\t\t      Thank You!!");
	}
	else
    {
	    printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        goto go;
    }

	go:
	puts("\n\n Press Y if you want to play again");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		change_topscore(score,playername);
		goto mainhome;
        }
}
