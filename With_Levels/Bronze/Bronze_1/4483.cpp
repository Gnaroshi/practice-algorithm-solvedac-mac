// problem: “Robot Roll Call – Cambot...Servo...Gypsy...Croooow”
// id: 4483
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, n, d;
    string s, t;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Test set " << tcc << ":\n";
        vector<string> v, w;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.push_back(s);
        }
        cin >> d;
        cin.ignore();
        while (d--)
        {
            getline(cin, s);
            stringstream st;
            st.str(s);
            while (st >> t)
                w.push_back(t);
        }
        for (auto i : v)
        {
            cout << i << " is ";
            if (find(w.begin(), w.end(), i) != w.end())
                cout << "present\n";
            else
                cout << "absent\n";
        }
        cout << '\n';
    }

    return 0;
}