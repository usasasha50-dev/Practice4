#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string str = "reviver";
    stack<char> charStack;

    for (char ch : str) {
        charStack.push(ch);
    }

    string reversedStr = "";
    while (!charStack.empty()) {
        reversedStr += charStack.top();
        charStack.pop();
    }

    if (str == reversedStr) {
        cout << "Рядок \"" << str << "\" є паліндромом." << endl;
    } else {
        cout << "Рядок \"" << str << "\" НЕ є паліндромом." << endl;
    }

    return 0;
}
