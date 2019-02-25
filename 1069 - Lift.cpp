#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int mpos,lpos,T,Case=1;
    cin>>T;
    while(T--)
        {
            cin>>mpos>>lpos;
            cout<<"Case "<<Case++<<": "<<(4*abs(lpos-mpos))+(4*mpos)+19<<endl;
        }
    return 0;
}
