#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    double a,b,c,r1,r2,r3,q1,q2,q3,s,tri,area,cir;
    int n,Case=1;
    cin>>n;
    while(n--)
        {
            cin>>r1>>r2>>r3;
            cout<<"Case "<<Case++<<": ";
            a=r1+r2;
            b=r2+r3;
            c=r3+r1;
            s=(a+b+c)/2;
            tri=sqrt(s*(s-a)*(s-b)*(s-c));
            q1=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
            q2=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
            q3=acos(((b*b)+(c*c)-(a*a))/(2*b*c));
            cir=((r1*r1*q1)/2)+((r2*r2*q2)/2)+((r3*r3*q3)/2);
            area=tri-cir;
            printf("%.10lf\n",area);
        }
    return 0;
}
