O(n ^ 3) approach
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    long long sum = 0;

    for (int st = 0; st < n; st++) {
        for (int en = st; en < n; en++) {
            int s = 0;

            for (int i = st; i <= en; i++) {
                s += A[i];
            }

            sum += s;
        }
    }

    cout << sum << endl;

    return 0;
}
