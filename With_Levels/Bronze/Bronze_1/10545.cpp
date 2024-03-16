// problem: 뚜기뚜기메뚜기
// id: 10545
// time taken:
#include <bits/stdc++.h>
using namespace std;

string ph[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int ky[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
int kyt[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, iter;
    vector<pair<int, int>> v;
    v.push_back({0, 0});
    for (int i = 0; i < 9; i++)
    {
        cin >> t;
        v.push_back({t, i + 1});
    }
    sort(v.begin(), v.end());
    string s, ret = "";
    cin >> s;
    t = s[0] - 'a';
    int bef = ky[t];
    iter = s.length();
    for (int i = 0; i < kyt[t]; i++)
        ret += char(v[ky[t]].second + '0');
    for (int i = 1; i < iter; i++)
    {
        t = s[i] - 'a';
        if (bef == ky[t])
            ret += '#';
        for (int j = 0; j < kyt[t]; j++)
            ret += char(v[ky[t]].second + '0');
        bef = ky[t];
    }
    cout << ret;

    return 0;
}