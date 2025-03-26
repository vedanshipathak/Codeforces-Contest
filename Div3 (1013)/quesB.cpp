// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int t;
//   cin>>t;
//   while(t--)
//   {
//     int n,x;
//     cin>>n>>x;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++)
//     {
//       cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end(),greater<int>());
//     int cnt=0;
//     for(int i=0;i<n;i++)
//     {
//       if(arr[i]>=x)
//       {
//         cnt++;
//       }
//       else{
//         int j=i+1;int mini=arr[i];
//         while(j<n)
//         {
//           mini=min(mini,arr[j]);
//           if(mini*(j-i+1)>=x)
//           {
//             cnt++;
//             i++;
//             break;
//           }
//           j++;
//         }
//       }
//     }
//     cout<<cnt<<endl;

//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int cnt = 0;
        int len = 0;  
        for (int i = 0; i < n; i++) {
            len++;  
            if (arr[i] * len >= x) {
                cnt++;
                len = 0; 
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
