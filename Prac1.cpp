#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> S;
    
    S.push("Intel");
    S.push("AMD");
    S.push("Nvidia");

    int total_length = 0;
    stack<string> tempS; 

    while (!S.empty()) {
        string str = S.top();
        total_length += str.length();
        cout << str << endl;
        tempS.push(str);
        S.pop();
    }

    while (!tempS.empty()) {
        S.push(tempS.top());
        tempS.pop();
    }

    cout << "Загальна кількість символів: " << total_length << endl;

    return 0;
}

