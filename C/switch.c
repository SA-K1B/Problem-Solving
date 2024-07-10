#include<stdio.h>
int main()
{
    /*char ch,x;
    ch=getchar();
    switch(ch){
    case 'A':
    case 'B':
    case 'Z':  x='Z';
               break;
    case 'O':  x='o';
               break;
    default : x='f';
    }
    printf("%c",x);*/
   int n;
    scanf("%d",&n);
 /*   switch(n){
    case 4: printf("4");
             break;
    case 10: printf("10");
              break;
    default :printf("d");
    }
    */
    int y=n<9?6:2;
    printf("%d",y);
    return 0;
}
