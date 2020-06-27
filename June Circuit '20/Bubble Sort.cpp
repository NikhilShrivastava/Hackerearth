#include <bits/stdc++.h>

using namespace std;
void  Bsort(vector<int> v)
{
    int n=v.size();
    int count=0;
    bool swapped = true;
    while(swapped!=false)
    {
        swapped=false;
        count=count+1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                swap(v[i],v[i+1]);
                swapped=true;
            }
        }
    }
    cout<<count<<endl;
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    Bsort(v);
    
}
