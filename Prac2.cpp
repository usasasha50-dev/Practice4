#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> S;
    int sum = 0;

    S.push(12);
    S.push(15);
    S.push(18);
    S.push(21);
    S.push(24);

    cout << "Елементи стека: ";
    while (!S.empty()) {
        int num = S.top();
        cout << num << " ";
        sum += num;
        S.pop();
    }

    cout << "\nСума чисел: " << sum << endl;

    return 0;
}
