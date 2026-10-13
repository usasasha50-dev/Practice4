#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> S;
    int count = 0;
    int foundCount = 0;

    S.push(6);
    S.push(12);
    S.push(18);
    S.push(24);
    S.push(30);
    S.push(36);

    int findNum;
    cout << "Введіть число для пошуку: ";
    cin >> findNum; 

    cout << "Витягнуті елементи з стека: ";
    while (!S.empty()) {
        int num = S.top();
        S.pop();
        cout << num << " ";
        count++;

        if (num == findNum) {
            foundCount++;
            break; 
        }
    }
    cout << endl;

    if (foundCount > 0) {
        cout << "Число " << findNum << " знайдено!" << endl;
    } else {
        cout << "Число " << findNum << " не знайдено." << endl;
    }

    cout << "Кількість витягнутих елементів: " << count << endl;

    return 0;
}
