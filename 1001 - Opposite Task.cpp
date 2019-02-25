#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int i,t,n,digit;
    cin>>t;
    while(t--)
        {
            cin>>n;
            for(i=0;i<=10;i++)
                {
                    digit=(n-i);
                    if(digit<=10)
                        {
                            cout<<i<<" "<<digit<<endl;
                            break;
                        }
                }
        }
    return 0;
}
