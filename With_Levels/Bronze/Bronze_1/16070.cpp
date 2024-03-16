// problem: It's Time for a Montage
// id: 16070
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, ht, t;
    cin >> n;
    vector<int> h(n), v(n);
    for (auto &i : h)
        cin >> i;
    for (auto &i : v)
        cin >> i;
    ht = v[0] - h[0];
    ans = ht;
    for (int i = 1; i < n; i++)
    {
        t = v[i] - h[i] - ht;
        if (t != 0)
        {
            if (t > 0)
                ans++;
            break;
        }
    }
    cout << max(ans, 0) << '\n';

    return 0;
}
