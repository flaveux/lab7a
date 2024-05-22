#include <iostream>
#include <string>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    string S, S0;
    S = "The greatest of all time";
    S0 = "greatest";
    cout << "Первая строка S " << endl << S << endl << endl;
    cout << "Вторая подстрока S0 " << endl << S0 << endl << endl;
    int n = S.find(" greatest");
    if (n > -1) {
        int p = S0.size();
        S.erase(n, p);
        cout << "Удаляем подстроку S0" << endl;
        cout << S;
    }
    else cout << "Совпадения не обнаружены.";
}
