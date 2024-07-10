#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,j,S,E;
    printf("Enter a string: ");
    gets(s1);
    printf("Enter your search: ");
    gets(s2);
    for(i=0;i<strlen(s1);i++)
    {
        for(j=0;j<strlen(s2);j++)
        {
            if(s2[j]==s1[i])
                S=i;
                break;
         }
         for(j=0;j<=strlen(s2);j++)
        {
            if(s2[strlen(s2)-1]==s1[i])
                E=i;
                break;
        }
    }
   printf("\n%s starts at %dth and finishes at %dth position\n",s2,S+1,E+1);
    return 0;
}
