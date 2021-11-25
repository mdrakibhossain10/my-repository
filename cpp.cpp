#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
ll  n;
cin>>n;
for(ll i=0;i<n;i++)
{
  ll x,c=0;
  cin>>x;
  for(ll j=1;j<=x;j++)
  {
      ll a,b;
      cin>>a>>b;
      if(j<=a && j<=b)
        c++;
  }
  cout<<c<<endl;
}
return 0;
}
