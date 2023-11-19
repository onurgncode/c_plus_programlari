#include <iostream>
using namespace std;
int main()
{
    int sayi1,sayi2,islem,toplam;
    cout << "***********Hesap Makinesi*********"<< endl;
    cout << "İşlem yapmak için 1. sayıyı giriniz ";
    cin >> sayi1;
    cout << "İşlem yapmak için 2.Sayıyı giriniz";
    cin >> sayi2;
    cout << "Hangi işlemi yapmak istiyorsan sayısını seç" <<
    "1- Toplama 2-Çıkarma 3-Çarpma 4- Bölme";
    cin >> islem;
    switch (islem)
    {
    case 1:
        toplam = sayi1 + sayi2;
        break;
    case 2:
        toplam = sayi1 - sayi2;
        break;
    case 3:
        toplam = sayi1 * sayi2;
        break;
    case 4:
        toplam = sayi1 / sayi2;
        break;
    
    default:
    cout << "Yanlış işlem yaptınız tekrarlayın";
        break;
    }
    cout << toplam << endl;
}