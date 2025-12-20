//Remove Outermost Parentheses
#include <iostream>
#include <string>
using namespace std;
string removeOuterParentheses(const string& s) {
    string result;
    int openCount = 0;

    for (char ch : s) {
        if (ch == '(') {
            if (openCount > 0) {
                result += ch;
            }
            openCount++;
        } else if (ch == ')') {
            openCount--;
            if (openCount > 0) {
                result += ch;
            }
        }
    }

    return result;
}
int main() {
    string s = "(()())(())(()(()))";
    string modifiedString = removeOuterParentheses(s);
    cout << "Original String: " << s << endl;
    cout << "Modified String: " << modifiedString << endl;
    return 0;
}