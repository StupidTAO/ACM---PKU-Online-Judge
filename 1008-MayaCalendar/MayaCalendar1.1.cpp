#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    char h[20][10]={"","pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
    char t[21][10]={"","imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};
    int time;
    cin>>time;
    cout<<time<<endl;
    int sum,hy,hd,ty,tm,td;
    char dot[10],str[10];
    while(time--)
    {
        sum=0;
        cin>>hd>>dot>>str>>hy;
        sum+=hd;
        int i;
        for(i=1;i<=20;i++)
        {
            if(strcmp(str,h[i])==0)
            break;
        }
        sum+=(i-1)*20;
        sum+=hy*365;
        td=sum%13+1;
        tm=sum%20+1;
        ty=sum/260;
        cout<<td<<" "<<t[tm]<<" "<<ty<<endl;
    }
    return 0;
}
