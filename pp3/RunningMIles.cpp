#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 23, INF = 1e9 + 23;
int dp[N][3];
int b[N];
int n;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {

        cin >> n;
        for (int i = 0; i <= n; i++)
            dp[i][0] = dp[i][1] = dp[i][2] = -INF;
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        for (int i = 1; i <= n; i++)
        {
            dp[i][0] = max(dp[i - 1][0], b[i] + i);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + b[i]);
            dp[i][2] = max(dp[i - 1][2], dp[i - 1][1] + b[i] - i);
        }
        cout << dp[n][2] << endl;
    }
}