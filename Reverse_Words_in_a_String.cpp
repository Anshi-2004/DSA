//Reverse Words in a String
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
string reverseWords(const string& s) {
    stringstream ss(s);
    string word;
    string result;
    
    while (ss >> word) {
        if (!result.empty()) {
            result = " " + result;
        }
        result = word + result;
    }
    
    return result;
}
int main() {
    string s = "  Hello   World  from   C++  ";
    string reversed = reverseWords(s);
    cout << "Original String: \"" << s << "\"" << endl;
    cout << "Reversed Words: \"" << reversed << "\"" << endl;
    return 0;
}