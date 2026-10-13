#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    stack<int> S;
    const int size = 8;
    int sum = 0;
    int count = 0;

    srand(time(0));

    for (int i = 0; i < size; i++) {
        int randomNum = rand() % (80 - 20 + 1) + 20;
        S.push(randomNum);
    }

    cout << "Елементи стека (випадкові числа): ";
    while (!S.empty()) {
        int num = S.top();
        S.pop();
        cout << num << " ";

        if (num >= 40 && num <= 70 && num % 2 != 0) {
            sum += num;
            count++;
        }
    }
    cout << endl;

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Середнє значення відфільтрованих чисел: " << average << endl;
    } else {
        cout << "Чисел, що відповідають критерію, не знайдено." << endl;
    }

    return 0;
}
