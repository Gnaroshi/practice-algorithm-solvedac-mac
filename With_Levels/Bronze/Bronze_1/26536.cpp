// problem: Cowspeak
// id: 26536
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, m, o;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s, t;
        getline(cin, s);
        stringstream st;
        st.str(s);
        while (st >> t)
        {
            m = o = 0;
            for (auto i : t)
            {
                if (i == 'M')
                    m++;
                else
                    o++;
            }
            cout << char(m * 16 + o);
        }
        cout << '\n';
    }

    return 0;
}