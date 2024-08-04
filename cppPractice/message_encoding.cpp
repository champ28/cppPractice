#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    string str;
    int len;
    string ans = "";

    while (t--) {
        ans="";
        cin >> len >> str;

        for (int i = 0; i < len - 2; i = i + 2) {
            ans += str[i + 1];
            ans += str[i];
            //cout << ans << endl;

        }
        if (len % 2 == 0) {
            ans += str[len - 1];
            ans += str[len - 2];
        }
        else
            ans += str[len - 1];


        str = "";
        for (int i = 0; i < ans.length(); i++) {

            char a = static_cast < char > (219 - ans[i]);
            str += a;
        }

        cout << str << endl;

    }

}
