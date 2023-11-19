#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish"); // Bu Türkçe Karakter sorununu çözer.
    int dersnotu;
    cout << "Ders Notu Giriniz";
    cin >> dersnotu;
    if (dersnotu > 50)
    {
        cout << "geçtiniz";
    }
    else
    {
        int butnot;
        cout << "Bütten Alınan Notu Giriniz";
        cin >> butnot;
        if (butnot >50)
        {
            cout << "Dersden Kaldınız ama bütten geçtiniz";
        }
        else
        {
            cout << "Kaldınız";
        }
    }
}