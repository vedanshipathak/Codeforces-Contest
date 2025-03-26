#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> hash(10, 0);
        hash[0] = 3;
        hash[1] = 1;
        hash[3] = 1;
        hash[2] = 2;
        hash[5] = 1;

        int cnt = 0;

        if (n < 8) {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < n; i++) {
            
            if (arr[i] < 10 && hash[arr[i]] > 0) {
                hash[arr[i]]--;
            }
            bool flag = true;
            for (int j = 0; j < 10; j++) {
                if (hash[j] > 0) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                cnt = i + 1;
                break;
            }
        }

        cout << cnt << endl;
    }
    
    return 0;
}

