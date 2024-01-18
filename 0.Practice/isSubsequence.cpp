#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int i = 0, j = 0;

        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++; 
                j = 0;
            }
            else
                j++;
        }

        return i == s.length();
    }
};

int main() {
    Solution solution;

    string s1 = "abc";
    string t1 = "acb";

    if (solution.isSubsequence(s1, t1)) {
        cout << "Output for Test Case: true\n";
    } else {
        cout << "Output for Test Case: false\n";
    }

    return 0;
}
