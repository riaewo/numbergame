#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(0, "");
    // ������������� ���������� ��������� �����
    srand(time(0));

    // ���������� ����� �� 1 �� 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "� ������� ����� �� 1 �� 100. �������� �������!" << endl;

    do {
        cout << "���� �������: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "������� ����!" << endl;
        }
        else if (guess > secretNumber) {
            cout << "������� �����!" << endl;
        }
        else {
            cout << "����������! �� ������ �� " << attempts << " �������." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}