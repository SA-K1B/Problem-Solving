#include<stdio.h>
#include<math.h>
#define ll long long
int main()
{
    ll bin,dec=0,i=0,rem,j,k,x;
  /*  scanf("%d",&bin);
    while(bin>0){
        rem=bin%10;
        dec+=rem*pow(2,i);
        i++;
        bin/=10;
    }
    printf("%lld\n",dec);*/
    i=1;
    dec=7;
    ll bin2=0;
    while(dec>0){
        rem=dec%2;
        bin2+=(rem*i);
        dec/=2;
        i*=10;
    }
    printf("%lld",bin2);
    return 0;
}
