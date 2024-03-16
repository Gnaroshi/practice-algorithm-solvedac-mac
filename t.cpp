// // problem:
// // id:
// // time taken:
// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string s;
//     cin >> s;
//     if (s.length() % 2)
//     {
//         cout << 0 << '\n';
//         return 0;
//     }
//     stack<char> st;
//     for (auto i : s)
//     {
//         if (!st.empty())
//         {
//             if (st.top() == i)
//             {
//                 st.pop();
//                 continue;
//             }
//         }
//         st.push(i);
//     }
//     cout << !st.empty() << '\n';

//     return 0;
// }

// problem:
// id:
// time taken:
// #include <bits/stdc++.h>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;
int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    fork();
    cout << "hello world\n";

    return 0;
}