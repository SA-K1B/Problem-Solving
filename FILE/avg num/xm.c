#include<stdio.h>
int main()
{
    FILE *fpm,*fpb,*fpe,*fpout;
    char *infileb="bangla.txt";
    char *infilee="english.txt";
    char *infilem="math.txt";
    char *outfile="output.txt";
    fpm=fopen(infilem,"r");
    fpb=fopen(infileb,"r");
    fpe=fopen(infilee,"r");
    fpout=fopen(outfile,"w");
    int i,roll,numm,nume,numb;
    float avg;
    char line[10];
    for(i=1;i<=5;i++){
    fgets(line,80,fpb);
    sscanf(line,"%d %d",&roll,&numb);
    fgets(line,80,fpe);
    sscanf(line,"%d %d",&roll,&nume);
    fgets(line,80,fpm);
    sscanf(line,"%d %d",&roll,&numm);
    avg=(float)(numb+numm+nume)/3;
    fprintf(fpout,"%d %f\n",roll,avg);
    }
    fclose(fpout);
    fclose(fpb);
    fclose(fpm);
    fclose(fpe);
    return 0;
}
