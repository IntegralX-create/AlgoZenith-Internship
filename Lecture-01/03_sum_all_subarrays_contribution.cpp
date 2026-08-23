Contribution Technique — O(N)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += 1LL * A[i] * (i + 1) * (n - i);
    }

    cout << sum << endl;

    return 0;
}
