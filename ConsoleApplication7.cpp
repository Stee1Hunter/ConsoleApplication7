
#include <iostream>
#include <Windows.h>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <complex>

using namespace std;
class BankAccount {
private: int accountNumber;
private: double balance;
private: double interestRate=0;
public:
    BankAccount(int accNumber, double Balance) {
        accountNumber = accNumber;
        balance = Balance;
        interestRate = 0;
    }

public: double deposit(double plus) {
    balance = balance + plus;
    return(balance);
}
public: double withdraw(double minus) {
    if (minus > balance)
    {
        cout << "Средств слишком мало!!" << endl;
    }
    else {
        balance = balance - minus;
        return(balance);
    }
}
public: double getBalance() {
    return(balance);
}
public: double getInterest() {
    balance = balance + balance * interestRate/100;
    return(balance);
}
public: double setInterestRate(double proc) {
    interestRate = proc;
    return(interestRate);
}
public: double getAccountNumber() {
    return(accountNumber);
}


};
int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    BankAccount acc1(12345, 1000.0);
    BankAccount acc2(54321, 2000.0);
    int a,b;
    cout << "Введите данные аккаунта:" << endl;
    cin >> a;
    cout << "Введите ваш баланс:" << endl;
    cin >> b;
    cout << "Выберите одно из действий:" << endl;
    cout << "1) пополнение баланса:" << endl;
    cout << "2) снять средства со счета:" << endl;
    cout << "3) расчёт текущего баланса:" << endl;
    cout << "4) рассчитать и вернуть сумму процентов, заработанных на счете:" << endl;
    cout << "5) обновить процентную ставку:" << endl;
    cout << "6) получить номер банковского счёта:" << endl;
    cout << "7) выйти." << endl;
    int c;
    if (a == 12345 && b == 1000) {
        while (true) {
            int i;
            cout << "Выберите одно из действий:" << endl;
            cin >> c;
            if (c == 1) {
                cout << "введите сумму, которую хотите внести:" << endl;
                cin >> i;
                cout << "Ваш баланс:" << acc1.deposit(i)<<endl;
            }
            if (c == 2) {
                cout << "введите сумму, которую хотите снять:" << endl;
                cin >> i;
                cout<<"Ваш баланс:" << acc1.withdraw(i) << endl;
            }
            if (c == 3) {
                cout << "Ваш баланс:" << acc1.getBalance() << endl;
            }
            if (c == 4) {
                cout << "Ваш баланс:" << acc1.getInterest() << endl;
            }
            if (c == 5) {
                cout << "введите новую процентную ставку(в процентах):" << endl;
                cin >> i;
                cout << "Ваша процентная ставка:" << acc1.setInterestRate(i) << endl;
            }
            if (c == 6) {
                cout << "Номер вашего счёта:" << acc1.getAccountNumber() << endl;
            }
            if(c==7) {
                break;
            }
        }
        
    }
    if (a == 54321 && b == 2000) {
        while (true) {
            int i;
            cout << "Выберите одно из действий:" << endl;
            cin >> c;
            if (c == 1) {
                cout << "введите сумму, которую хотите внести:" << endl;
                cin >> i;
                cout << "Ваш баланс:" << acc2.deposit(i) << endl;
            }
            if (c == 2) {
                cout << "введите сумму, которую хотите снять:" << endl;
                cin >> i;
                cout << "Ваш баланс:" << acc2.withdraw(i) << endl;
            }
            if (c == 3) {
                cout << "Ваш баланс:" << acc2.getBalance() << endl;
            }
            if (c == 4) {
                cout << "Ваш баланс:" << acc2.getInterest() << endl;
            }
            if (c == 5) {
                cout << "введите новую процентную ставку(в процентах):" << endl;
                cin >> i;
                cout << "Ваша процентная ставка:" << acc2.setInterestRate(i) << endl;
            }
            if (c == 6) {
                cout << "Номер вашего счёта:" << acc2.getAccountNumber() << endl;
            }
            if (c == 7) {
                break;
            }
        }
    }
    else {
        return 0;
    }
}
