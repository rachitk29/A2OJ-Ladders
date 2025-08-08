#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype> 
using namespace std;

class wordModifier {
public:
    string modify(string str) {
        int upperStr = 0, lowerStr = 0;

        for (int i = 0; i < str.length(); i++) {
            if (isupper(str[i])) {
                upperStr++;
            } else if (islower(str[i])) {
                lowerStr++;
            }
        }

        if (upperStr > lowerStr) {
            for (int i = 0; i < str.length(); i++) {
                str[i] = toupper(str[i]);
            }
        } else {
            for (int i = 0; i < str.length(); i++) {
                str[i] = tolower(str[i]);
            }
        }

        return str;
    }
};

int main() {
    wordModifier wordMod;
    string str;
    cin >> str; 

    string ans = wordMod.modify(str);
    cout << ans << endl;

    return 0;
}
