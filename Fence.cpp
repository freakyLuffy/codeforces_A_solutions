#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c;
        d=(a+b+c);
        while(1)
        {
            if(((a+b+c)>d)&&((a+c+d)>b)&&((b+c+d)>a))
            {
                break;
            }
            d--;
        }
        cout<<d<<"\n";
    }
    return 0;
}