#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000005

int spf[MAX];

void sievespf(int n) {
    for (int i = 1; i <= n; i++) {
        spf[i] = i;
    }
    for (int p = 2; p * p <= n; p++) {
        if (spf[p] == p) {
            for (int i = p * p; i <= n; i += p) {
                if (spf[i] == i) {
                    spf[i] = p;
                }
            }
        }
    }
}

void solve() {
    int x;
    cin >> x;
    int ans = 1;
    while (x != 1) {
        int y = spf[x];
        int c = 1;
        while (x % y == 0) {
            c++;
            x /= y;
        }
        ans *= c;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sievespf(1000000);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
