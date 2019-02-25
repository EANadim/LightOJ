#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int x1,y1,x2,y2,x,y,Case=1,T,M;
    cin>>T;
    while(T--)
        {
            cout<<"Case "<<Case++<<":"<<endl;
            cin>>x1>>y1>>x2>>y2;
            cin>>M;
            while(M--)
                {
                    cin>>x>>y;
                    if((x>=x1 && x<=x2) && (y>=y1 && y<=y2))
                        cout<<"Yes"<<endl;
                    else
                        cout<<"No"<<endl;
                }
        }
    return 0;
}
