void change_topscore(float newscore, char namee[20])
{
    system("cls");
    char oldnm[];
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