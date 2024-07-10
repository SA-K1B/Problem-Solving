#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fpin,*fpout;
    char *infile="image.png";
    char *outfile="image1.png";
    int x;
    fpin=fopen(infile,"rb");
    if(fpin==NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    fpout=fopen(outfile,"wb");
    while(1){
        x=fgetc(fpin);
        if(x==EOF)
            break;
        fputc(x,fpout);
    }
    fclose(fpin);
    fclose(fpout);
    return 0;
}
