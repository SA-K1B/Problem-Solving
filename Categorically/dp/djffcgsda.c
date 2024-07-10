#include<stdio.h>
int main()
{
    freopen("string.txt","r",stdin);
    freopen("o.txt","w",stdout);
    char name[50];
    gets(name);
    printf("%s",name);
    return 0;
}
