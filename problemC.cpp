#include<bits/stdc++.h>

typedef long long int ll;


using namespace std;

int main()
{
        ll i,j,k;
        ll a,b;
        vector<ll> v;

        cin>>a>>b;

        v.push_back(b);
        while(b>0)
        {
            if(b%2==0)
            {
                b/=2;
                v.push_back(b);
            }

            else if((b-1)%10==0)
            {
                b-=1;
                b/=10;
                v.push_back(b);
            }

            else
                break;

            if(b==a)
            {
                break;
            }
        }

        if(v[v.size()-1]!=a)
        {
            cout<<"NO";
        }

        else
        {
            cout<<"YES"<<endl;
            cout<<v.size()<<endl;
            ll n=v.size();
            for(i=n-1;i>=0;i--)
                cout<<v[i]<<" ";
        }

        return 0;
}
