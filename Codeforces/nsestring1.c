#include<stdio.h>
int main()
{
   // freopen("i.txt","r",stdin);
    char ch,s1[100],s2[100];
    int f=0,size1,size2,i,j;
    gets(s1);
    gets(s2);
    size1=strlen(s1);
    size2=strlen(s2);
    i=0;
    while(i<size1){
            //printf("%d\n",i);
            j=0;
        while(j<size2){
            if(s1[i]==s2[j]){
               // printf("%c\n",s2[j]);
                f=1;
                ch=s2[j];
                break;
            }
            j++;
        }
       if(f)
        break;
        i++;
    }
    if(f){
        printf("%c\n",ch);
    }
    else printf("0\n");
    return 0;
}
