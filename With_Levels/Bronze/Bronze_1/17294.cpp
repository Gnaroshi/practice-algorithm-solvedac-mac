// problem: 귀여운 수~ε٩(๑> ₃ <)۶з
// id: 17294
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    bool chk = true;
    if (s.length() < 3)
        ;
    else
    {
        int d = s[1] - '0' - (s[0] - '0');
        for (int i = 1; i < iter; i++)
        {
            if (s[i] - s[i - 1] != d)
            {
                chk = false;
                break;
            }
        }
    }

    if (chk)
        cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
    else
        cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
    return 0;
}