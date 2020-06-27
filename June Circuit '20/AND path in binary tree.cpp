#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
int main()
{
    fast;
    ll arr[100001];
    for(ll i=3;i<100001;i=i+4)
    {
        arr[i]=-1;
    }
    ll ctr;
    for(ll i=3;i<100001;i+=4)
    {
        if(arr[i]==-1)
        {
            ctr=1;
            ll j=i;
            while(j<100001)
            {
                arr[j]=ctr;
                ctr++;
                j=(j*2)+1;
            }
        }
    }
    for(ll i=7;i<100001;i+=4)
    {
        arr[i]=arr[i]+arr[i-4];
    }
    ll t,n;
    cin>>t;
    arr[0]=0;arr[1]=0;arr[2]=0;arr[3]=1;

    while(t--)
    {
        cin>>n;
        if(n==1||n==2)
        {
            cout<<"0"<<endl;
            continue;
        }
        ll s=n%4;
        if(s!=3)
        n=n-s-1;
        cout<<arr[n]<<endl;
    }

}
