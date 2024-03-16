// problem: Reading Digits
// id: 13858
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, p, iter;
    string s, t;
    cin >> k >> p >> s;
    iter = s.length();
    while (k--)
    {
        t = "";
        for (int i = 0; i < iter; i += 2)
        {
            for (int j = s[i] - '0'; j > 0; j--)
                t += s[i + 1];
        }
        s = t;
    }
    cout << s[p];

    return 0;
}