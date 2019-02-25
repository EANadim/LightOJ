#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    ll i,t,year1,date1,month1,year2,date2,month2,Case=1,digit;
    char mdy1[MAX],mdy2[MAX];
    cin>>t;
    cin.ignore();
    while(t--)
        {
            fgets(mdy1,100,stdin);
            fgets(mdy2,100,stdin);
            year1=0;month1=0;date1=0;year2=0;month2=0;date2=0;digit=10;
            for(i=0;i<strlen(mdy1);i++)
                {
                    if(mdy1[i]==',')
                        break;
                    if(mdy1[i]>=48 && mdy1[i]<=57)
                        {
                            date1=date1+(mdy1[i]-48)*digit;
                            digit=digit/10;
                        }
                }
            digit=10;
            for(i=0;i<strlen(mdy2);i++)
                {
                    if(mdy2[i]==',')
                        break;
                    if(mdy2[i]>=48 && mdy2[i]<=57)
                        {
                            date2=date2+(mdy2[i]-48)*digit;
                            digit=digit/10;
                        }
                }
            digit=1;
            for(i=strlen(mdy1)-1;i>=0;i--)
                {
                    if(mdy1[i]==',')
                        break;
                    if(mdy1[i]>=48 && mdy1[i]<=57)
                        {
                            year1=year1+(mdy1[i]-48)*digit;
                            digit=digit*10;
                        }
                }
            digit=1;
            for(i=strlen(mdy2)-1;i>=0;i--)
                {
                    if(mdy2[i]==',')
                        break;
                    if(mdy2[i]>=48 && mdy2[i]<=57)
                        {
                            year2=year2+(mdy2[i]-48)*digit;
                            digit=digit*10;
                        }
                }
            month1=3;month2=3;
            if((mdy1[0]=='J' || mdy1[0]=='j') && (mdy1[1]=='A' || mdy1[1]=='a'))
                {
                    month1=1;
                }
            if(mdy1[0]=='F' || mdy1[0]=='f')
                {
                    month1=2;
                }
            if((mdy2[0]=='J' || mdy2[0]=='j') && (mdy2[1]=='A' || mdy2[1]=='a'))
                {
                    month2=1;
                }
            if(mdy2[0]=='F' || mdy2[0]=='f')
                {
                    month2=2;
                }
            if(month1>2)
                year1++;
            if(month2<=2 && date2!=29)
                year2--;
            ll leap;
            leap=year2/4-(year1-1)/4;
            leap=leap-(year2/100-(year1-1)/100);
            leap=leap+(year2/400-(year1-1)/400);
            cout<<"Case "<<Case++<<": "<<leap<<endl;
            //cout<<date1<<"/"<<month1<<"/"<<year1<<"     "<<mdy1<<endl;
            //cout<<date2<<"/"<<month2<<"/"<<year2<<"     "<<mdy2<<endl;
        }
    return 0;
}
