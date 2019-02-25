#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    ll t,Case=1,a1,b1,c1,d1,a2,b2,c2,d2,i,digit,flag;
    char bin[MAX],dec[MAX];
    cin>>t;
    while(t--)
        {
            cin>>dec>>bin;
            a1=0;b1=0;c1=0;d1=0;a2=0;b2=0;c2=0;d2=0;
            digit=1;
            flag=1;
            for(i=strlen(dec)-1;i>=0;i--)
                {
                    if(dec[i]>=48 && dec[i]<=57)
                        {
                            if(flag==1)
                                {
                                    d1=d1+(dec[i]-48)*digit;
                                }
                            else if(flag==2)
                                {
                                    c1=c1+(dec[i]-48)*digit;
                                }
                            else if(flag==3)
                                {
                                    b1=b1+(dec[i]-48)*digit;
                                }
                            else if(flag==4)
                                {
                                    a1=a1+(dec[i]-48)*digit;
                                }
                            digit=digit*10;
                        }
                    else if(dec[i]=='.')
                        {
                            flag++;
                            digit=1;
                        }
                }
            //cout<<a1<<"."<<b1<<"."<<c1<<"."<<d1<<endl;
            digit=0;
            flag=1;
            for(i=strlen(bin)-1;i>=0;i--)
                {
                    if(bin[i]>=48 && bin[i]<=57)
                        {
                            if(flag==1)
                                {
                                    d2=d2+(bin[i]-48)*pow(2,digit);
                                }
                            else if(flag==2)
                                {
                                    c2=c2+(bin[i]-48)*pow(2,digit);
                                }
                            else if(flag==3)
                                {
                                    b2=b2+(bin[i]-48)*pow(2,digit);
                                }
                            else if(flag==4)
                                {
                                    a2=a2+(bin[i]-48)*pow(2,digit);
                                }
                            digit++;
                        }
                    else if(bin[i]=='.')
                        {
                            flag++;
                            digit=0;
                        }
                }
                //cout<<a2<<"."<<b2<<"."<<c2<<"."<<d2<<endl;
                cout<<"Case "<<Case++<<": ";
                if(a1==a2 && b1==b2 && c1==c2 && d1==d2)
                    {
                        cout<<"Yes"<<endl;
                    }
                else
                    {
                        cout<<"No"<<endl;
                    }
        }
    return 0;
}
