#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    int count;
    int i = 0;
    int b = 0;
    char ch;
    string password;

    cout << "Введите число символов в пароле: ";
    cin >> count;

    while (b < 5)
    {
        password = "";
        while (i < count)
        {
            string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
            ch = alphabet[rand() % alphabet.size()];
            password += ch;

            i++;
        }
        i = 0;
        cout << password << endl;
        b++;
    }
}