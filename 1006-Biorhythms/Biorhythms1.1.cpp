#include<stdio.h>
int main()
{
    int p,e,i,d,k=1,a;
    while(scanf("%d%d%d%d",&p,&e,&i,&d)!=EOF)
    {
        if(p==-1&&e==-1&&i==-1&&d==-1)break;
        a=((5544*p+14421*e+1288*i)-d)%21252;
        if(a<=0)a+=21252;
        printf("Case %d: the next triple peak occurs in %d days.\n",k++,a);
    }
    return 0;
}
