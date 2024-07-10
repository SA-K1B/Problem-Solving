#include <stdio.h>
int main()
{
    int i,j,n,SIZE;
    int X[10][10];
    int l,t;
    scanf("%d",&SIZE);
    l=0;
    t= SIZE - 1;
    n=1;

    for(i=1; i<=SIZE/2; i++, l++,t--)
    {
        for(j=l; j<=t; j++, n++)
        {
            X[l][j] = n;
        }

        for(j=l+1;j<=t;j++,n++)
        {
            X[j][t]=n;
        }

        for(j=t-1;j>=l;j--,n++)
        {
            X[t][j]=n;
        }
        for(j=t-1; j>=l+1; j--,n++)
        {
            X[j][l] =n;
        }
    }

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%d ", X[i][j]);
        }
        printf("\n");
    }
    return 0;
}
