#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     long long n,m,k;
    cin>>n>>m>>k;
    long long s=1, e=m, ans;
    while(s<=e)
    {
      long long mid=(s+e)/2;
      long long ways=(m/(mid+1))*mid+(m%(mid+1));
      long long total=n*ways;
      if(total>=k)
      {
        ans=mid;
        e=mid-1;
      }
      else
      {
        s=mid+1;
      }
    }
    cout<<ans<<endl;
  }
}