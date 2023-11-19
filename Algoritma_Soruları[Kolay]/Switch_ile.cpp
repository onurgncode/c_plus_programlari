#include <iostream>
using namespace std;
int main()
{
    int kod;
    cout << "Plaka Kodu giriniz";
    cin >> kod;
    switch (kod)
    {
    case 16:
        cout << "Bursa";
        break;
    case 01 || 1:
        cout << "Adana";
        break;
    default:
        cout << "Girdiğiniz değer yanlış";
        break;
    }
    return 0;
}