// problem: 행복 점수
// id: 30445
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    int ph = 0, pg = 0;

    for (auto i : s)
    {
        if (isalpha(i))
        {
            if (i == 'A')
                ph++, pg++;
            else if (i == 'H' || i == 'P' || i == 'Y')
                ph++;
            else if (i == 'S' || i == 'D')
                pg++;
        }
    }
    cout << fixed;
    cout.precision(2);
    if (ph == 0 && pg == 0)
        cout << 50.00;
    else
        cout << double(ph * 100000 / (ph + pg)) / 1000.0;

    return 0;
}
