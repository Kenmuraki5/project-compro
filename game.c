#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
void change_topscore(float newscore, char namee[20])
{
    system("cls");
    char oldnm[20];
    float score;
    FILE *high;
    high=fopen("point.txt","r");
    fscanf(high,"%s%f",&oldnm,&score);
    if (newscore>=score)
    { 
        fclose(high);
        high=fopen("point.txt","w");
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
    f=fopen("point.txt","r");
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
                printf("\n\nWhat is the output of the following code snippet?\n");
                printf("\n#include<stdio.h>\nint main()\n{\n    int x = 5;\n    if (x = 5)\n       printf(\"hello\");\n    printf(\"world\");\n}");
                printf("\n\nA.helloworld\t\tB.world\n\nC.hello\t\t\tD.Compiler error");
                if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        count++;
                        getch();
                        break;
                    }
                else
                    {
                        printf("\n\nWrong!!! The correct answer is A.hello world ");
                        getch();
                        break;
                    }

			case 2:
                printf("\n\n\nWhich of the following functions disconnects the stream from the file pointer.");
                printf("\n\nA.fremove()\t\tB.fclose()\n\nC.remove()\t\tD.file pointer to be set to NULL");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.fclose");
                    printf("\n\n  - fclose(), it flushes the buffers associated");
                    printf("with the stream and disconnects the stream with the file.");
                    getch();
                    break;
                }

			case 3:
                printf("\n\n\nWhich of the following is not a reserved word in C langauge?");
                printf("\n\nA. for\t\tB. doo\n\nC. goto\t\tD. switch");
                if (toupper(getch())=='B' )
                {	
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }
                else
                {	
                    printf("\n\nWrong!!! The correct answer is B. doo");
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
                printf("\n\nWhat is answer of a and b?\n");
                printf("\n#include<stdio.h>\nint main()\n{\n    int a = 10, b = 25;\n    a = b++ + a++;\n");
                printf("    b = ++b + ++a;\n    printf(\"a = %%d b = %%d\", a, b);\n}");
                printf("\n\nA.a=36 b=64\t\tB.a=35 b=62\n\nC.a=36 b=63\t\tD.a=37 b=63");
                if (toupper(getch())=='C')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {
                        printf("\n\nWrong!!! The correct answer is C.a=36 b=63");getch();
                        break;
                    }

            case 2:
                printf("\n\nWhat is the output of the following program?\n");
                printf("\n#include<stdio.h>\nint main()\n{\n    int a[3] = {2,1};\n    printf(\"%%d\", a[a[1]]);\n}");
                printf("\n\nA.0\t\tB.1\n\nC.2\t\tD.3");
                if (toupper(getch())=='B')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {
                        printf("\n\nWrong!!! The correct answer is B.1");
                        printf("\n\n  - 1, The inner indirection evaluates to 1, and the value at index 1 for outer indirection is 1.");
                        getch();
                        break;
                    }

            case 3:
                printf("\n\nWhat is a output of the following code segment?");
                printf("\n\n#include<stdio.h>\nint main()\n{\n    int array[10] = {3, 0, 8, 1, 12, 8, 9, 2, 13, 10};\n    int x, y, z;");
                printf("\n    x = ++array[2];\n    y = array[2]++;\n    z = array[x++];\n    printf(\"%%d %%d %%d\", x, y, z);");
                printf("\n    return 0;\n}");
                printf("\n\nA. 10 9 10\t\tB. 9 10 9\n\nC. 9 9 10\t\tD. None of the above");
                if (toupper(getch())=='A')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is A. 10 9 10");getch();
                    break;}

            case 4:
                printf("\n\nWhich of the following statements about functions is false?");
                printf("\n\nA. The main() function can be called recursively\n\nB. Functions cannot return more than one value at a time\n\n");
                printf("C. A function can have multiple return statements with different return values\n\nD. The maximum number of arguments a function can take is 128");
                if (toupper(getch())=='D')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is D. The maximum number of arguments a function can take is 128");getch();
                    break;}

            case 5:
                printf("\n\nWhich function would you use to convert 1.98 to 1?");
                printf("\n\nA.ceil()\t\tB.floor()\n\nC.fabs()\t\tD.abs()");
                if (toupper(getch())=='B')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is B.floor()");getch();
                    break;}

            case 6:
                printf("\n\nWhich of the following statements about the null pointer is correct?");
                printf("\n\nA. The null pointer is similar to an uninitialized pointer\n\nB. You can declare a null pointer as char* p = (char*)0\n\n");
                printf("C. The NULL macro is defined only in the stdio.h header\n\nD. The sizeof( NULL) operation would return the value 1");
                if (toupper(getch())=='B')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is B. You can declare a null pointer as char* p = (char*)0");getch();
                    break;}

            case 7:
                printf("\n\n\nWhich is the answer of a?\n");
                printf("  address a = 6422300\n  address b = 6422296");
                printf("\n\n#include<stdio.h>\nint main()\n{\n    int a=3;\n    int *b;");
                printf("\n    b = &a;\n    printf(\"Values of a = %d \", *b);");
                printf("\n\nA.3\t\tB. 6422300\n\nC.6422296\tD. error");
                if (toupper(getch())=='A')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;}
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.3");getch();
                    break;}   

            case 8:
                printf("\n\nIn what way are both declarations different from each other?\n int display();\n extern int display();");
                printf("\n\nA.No difference\n\nB.Extern is not a valid keyword\n\nC.Extern indicates that the function has been created in an external file");
                printf("\n\nD.Extern indicates that the function is not accessible in the program");
                if (toupper(getch())=='C')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {printf("\n\nWrong!!! The correct answer is C. Extern indicates that the function has been created in an external file");getch();
                    break;}

            case 9:
                printf("\n\nWhat is a strcmp() function?");
                printf("\n\nA.It compares two strings character by character. If the strings are equal, the function returns 0.");
                printf("\n\nB.It copies string pointed to by source into the destination. ");
                printf("\n\nC.Copy of the string pointed to the end of string");
                printf("\n\nD.Returns the uppercase string from the given string. It converts all lowercase characters to uppercase.");
                printf("");
                if (toupper(getch())=='A')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {
                        printf("\n\nWrong!!! The correct answer is\n");
                        printf("A.It compares two strings character by character. If the strings are equal, the function returns 0.");
                        getch();
                        break;
                    }

            case 10:
                printf("\n\nOut of the following declarations, which one is invalid?");
                printf("\n\nA.short a = 10;\t\tB.unsigned short b = 20;\n\nC.long double c = 30;\t\tD.long short d = 40;");
                if (toupper(getch())=='D')
                    {printf("\n\nCorrect!!!");countr++;getch();
                    break;getch();}
                else
                    {
                        printf("\n\nWrong!!! The correct answer is D.long short d = 40;");
                        getch();
                        break;
                    }     
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
