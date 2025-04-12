
#include <bits/stdc++.h>
using namespace std;

int megasum(vector<int> &a, int k) {
    int maxsum = 0;
    for (int i = 0; i < k; i++) {
        maxsum += a[i];
    }
    int currsum = maxsum;
    for (int i = k; i < a.size(); i++) {
        currsum +=   a[i] - a[i - k]; 
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    int k;
    cin >> k;
    cout << megasum(a, k) << endl;
    return 0;
}
