// problem: B번 - 준영이의 등급
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        int t;
        cin >> t;
        t = t * 100 / n;
        if (t <= 4)
            cout << 1;
        else if (t <= 11)
            cout << 2;
        else if (t <= 23)
            cout << 3;
        else if (t <= 40)
            cout << 4;
        else if (t <= 60)
            cout << 5;
        else if (t <= 77)
            cout << 6;
        else if (t <= 89)
            cout << 7;
        else if (t <= 96)
            cout << 8;
        else
            cout << 9;
        cout << ' ';
    }

    return 0;
}