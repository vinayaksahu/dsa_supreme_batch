#include <iostream>
#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int n = s.size();
        int count = 0;
        for(int i = n-1; i >= 0; i--) {
            if(s[i] != ' ') 
                count++;
            else if(count > 0)
                return count;
        }
        return count;
    }
};

int main() {
    Solution solution;

    // Test cases
    std::string test1 = "   fly me   to   the moon  ";
    std::string test2 = "the moon ";

    int result1 = solution.lengthOfLastWord(test1);
    int result2 = solution.lengthOfLastWord(test2);

    std::cout << "Length of the last word in \"" << test1 << "\": " << result1 << std::endl;
    std::cout << "Length of the last word in \"" << test2 << "\": " << result2 << std::endl;

    return 0;
}
