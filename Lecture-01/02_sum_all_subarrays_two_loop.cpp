O(n ^ 2) approach

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

    for (int st = 0; st < n; st++) {
        int prev = 0;

        for (int en = st; en < n; en++) {
            prev += A[en];
            sum += prev;
        }
    }

    cout << sum << endl;

    return 0;
}
