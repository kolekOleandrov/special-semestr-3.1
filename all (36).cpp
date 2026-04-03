#include <iostream>

using namespace std;

int main() {
    int score;
    cout << "Введите количество баллов (0-100): ";
    cin >> score;
    
    if (score >= 90 && score <= 100) {
        cout << "отлично" << endl;
    } else if (score >= 70 && score <= 89) {
        cout << "хорошо" << endl;
    } else if (score >= 50 && score <= 69) {
        cout << "удовлетворительно" << endl;
    } else if (score >= 0 && score < 50) {
        cout << "неудовлетворительно" << endl;
    } else {
        cout << "Неверное количество баллов" << endl;
    }
    
    return 0;
}