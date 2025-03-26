#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    if(n%2==0)cout<<-1<<endl;
    else{
      for(int i=0;i<n;i+=2)
      {
        cout<<arr[i]<<" ";
      }
      for(int i=1;i<n;i+=2)
      {
        cout<<arr[i]<<" ";
      }
    }

  }
  return 0;
}