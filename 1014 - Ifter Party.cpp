#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    set<ll>seq;
    ll t,p,l,Case=1,i,start,finish;
    cin>>t;
    while(t--)
        {
            seq.clear();
            cin>>p>>l;
            cout<<"Case "<<Case++<<":";
            start=l+1;
            finish=p-l;
            if(finish<start)
                {
                    cout<<" impossible";
                }
            else
                {
                    for(i=1;i<=sqrt(finish);i++)
                    {
                        if(finish%i==0)
                            {
                                seq.insert(i);
                                seq.insert(finish/i);
                            }
                    }
                    set<ll>::iterator it;
                    for(it=seq.begin();it!=seq.end();it++)
                    {
                        if(*it>=start)
                            {
                                cout<<" "<<*it;
                            }
                    }
                }
            cout<<endl;
        }
    return 0;
}
