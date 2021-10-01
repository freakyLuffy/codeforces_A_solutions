#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>n>>x;
        int floor=1,room=2;
        while(room<n)
        {
            room+=x;
            floor++;
        }
        cout<<floor<<"\n";
    }
    return 0;
}