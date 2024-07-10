#include<stdio.h>
#include<math.h>
struct point{
    int x;
    int y;
    }v1,v2;
int calDist(struct point v1,struct point v2){
    int a=v1.x-v2.x;
    a=pow(a,2);
    int b=v1.y-v2.y;
    b=pow(b,2);
    int ans;
    ans=sqrt(a+b);
    return ans;
}
int main()
{
    int x1,x2,y1,y2;
    scanf("%d %d",&v1.x,&v1.y);
    scanf("%d %d",&v2.x,&v2.y);
    int m=calDist(v1,v2);
    printf("%d\n",m);
    return 0;
}
