//string to integer conversion in c++
#include <iostream>
#include <string>
using namespace std;
int stringToInteger(const string &str) {
    int result = 0;
    int sign = 1;
    size_t i = 0;

    // Handle leading whitespace
    while (i < str.length() && isspace(str[i])) {
        i++;
    }

    // Handle optional sign
    if (i < str.length() && (str[i] == '+' || str[i] == '-')) {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    // Convert characters to integer
    while (i < str.length() && isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}
int main() {
    string str;
    cout << "Enter a string representing an integer: ";
    getline(cin, str);
    int number = stringToInteger(str);
    cout << "The converted integer is: " << number << endl;
    return 0;
}

