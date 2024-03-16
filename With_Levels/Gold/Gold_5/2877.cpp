// problem: 4와 7
// id: 2877
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t = 1, r = 1;
    cin >> n;
    while (true)
    {
        if (n <= r * 2)
            break;
        r *= 2;
        n -= r;
        t++;
    }
    n--;
    string s = "";
    for (int i = 0; i < t; i++)
        s += '4';
    r = 0;
    while (n > 0)
    {
        s[r] += (n % 2) * 3;
        r++;
        n /= 2;
    }
    for (int i = t - 1; i >= 0; i--)
        cout << s[i];

    return 0;
}