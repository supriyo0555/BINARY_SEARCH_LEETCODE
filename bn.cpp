#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

 int count = 0;
    for (int i = 0; i < n - 1; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[i] > arr[j]){
                count=count+(i+1)*(n-j);
            }
                
            
            }
        }

    return count;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cout << solve() << '\n';
    }

    return 0;
}
