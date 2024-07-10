#include<stdio.h>
struct movieStar{
    double age;
    double an_inc;
    char gender;
    char name[50];
};
double highINC(struct movieStar s[],int size)
{
    int i;
    double max=s[1].an_inc;
    for(i=2;i<=size;i++)
    {
        if(s[i].an_inc>=max)
            max=s[i].an_inc;
    }
    return max;
}
double youngSTR(struct movieStar s[], int size)
{
    int i,id;
    double min=s[1].age;
    for(i=2;i<=size;i++)
    {
        if(s[i].age<=min){
            min=s[i].age;
        }
        return min;
}
}
int main()
{
    int n,i;
    double high,yng;
    printf("Enter amount of student: ");
    scanf("%d", &n);
    struct movieStar s[n];
    printf("\nEnter info of %d students: ",n);
    for(i=1;i<=n;i++)
    {
    printf("%d %d\n",n,i);
    printf("\nAge: ");
    scanf("%lf",&s[i].age);
    printf("\nName: ");
   // fflush(stdin);
     getchar();
    gets(s[i].name);
    printf("\nGender: ");
    scanf("%c",&s[i].gender);
    printf("\nAnnual income: ");
    scanf("%lf",&s[i].an_inc);
    }
    high = highINC(s,n);
    printf("\nHighest income: %.3lf\n",high);
    yng= youngSTR(s,n);
    printf("Youngest star: %.2lf\n", yng);
    return 0;
}
