#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
int main()
{
	fast;
    ll t,e,n,b1,b2,c,d,ans;
	cin>>t;
    e=t;
    for(ll u=0;u<e;u++)
	{
		cin>>n>>b1>>b2;
		ans=0;
		c=abs(b1-b2);
		if(c==1 || c==(n-1))
		cout<<(n-4)*(n-4)<<endl;
		else
		{
            c--;
            d=n-c-2;
            ans=((c-1)*d)+((d-1)*c);
            if(c>1)
            ans=ans+((c-2)*(c-2));
            if(d>1)
            ans=ans+((d-2)*(d-2));
            cout<<ans<<endl;
        }
	}
}
