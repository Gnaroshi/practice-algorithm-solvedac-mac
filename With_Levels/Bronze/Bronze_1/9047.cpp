// problem: 6174
// id: 9047
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, a, t;
        cin >> s;
        int cnt = 0;
        while (true)
        {
            if (s == "6174")
                break;
            sort(s.begin(), s.end(), greater<>());
            a = s;
            sort(s.begin(), s.end());
            s = to_string(stoi(a) - stoi(s));
            if (s.length() < 4)
            {
                t = "";
                for (int i = 4 - s.length(); i > 0; i--)
                    t += '0';
                s = t + s;
            }
            cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}