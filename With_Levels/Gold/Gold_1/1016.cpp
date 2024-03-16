// problem: 제곱 ㄴㄴ 수
// id: 1016
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MX = 1000001;

bool chk[MX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, mx = 2, c, d, ans = 0;
    cin >> a >> b;
    for (ll t = mx; t * t <= b; t++)
    {
        d = t * t;
        c = a / (d);
        c += (a % (d) != 0);
        while (c * d <= b)
        {
            chk[c * d - a] = 1;
            c++;
        }
    }
    for (ll i = a; i <= b; i++)
        ans += (!chk[i - a]);
    cout << ans << '\n';

    return 0;
}