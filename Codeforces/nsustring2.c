#include<stdio.h>
int main()
{
    char ch,s1[100],s2[100];
    int v1=0,v2=0,c1=0,c2=0,w1=0,w2=0;
    int i,j,sz1,sz2,x,y;
    gets(s1);
    gets(s2);
    strlwr(s1);
    strlwr(s2);
    sz1=strlen(s1);
    sz2=strlen(s2);
    strlwr(s1);
    strlwr(s2);
    i=0;
    while(i<sz1){
        ch=s1[i];
        if(ch==' ')
            w1++;
       else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v1++;
       else c1++;
       i++;
    }
    i=0;
    while(i<sz2){
        ch=s2[i];
        if(ch==' ')
            w2++;
       else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v2++;
       else c2++;
       i++;
    }
    if(v1==v2&&c1==c2&&w1==w2)
        printf("YES");
    else printf("NO");
    return 0;
}
