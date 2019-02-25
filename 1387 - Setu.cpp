#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int n,t,d,sum,i,j;
    char x[MAX];
    cin>>t;
    for(i=1;i<=t;i++)
        {
            sum=0;
            cout<<"Case "<<i<<":"<<endl;
            cin>>n;
            for(j=1;j<=n;j++)
                {
                    cin>>x;
                    if(x[0]=='d')
                        {
                            cin>>d;
                            sum=sum+d;
                        }
                    else
                        cout<<sum<<endl;
                }
        }
    return 0;
}
