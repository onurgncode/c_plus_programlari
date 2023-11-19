#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    char tahmin,gizli,yanit;
    gizli = rand() % 100;
    cout << "Tahmininizi Giriniz";
    cin >> tahmin;
    if (tahmin == gizli)
    {
        cout << "Tebrikler Gizli sayıyı buldunuz" "\n";
        cout << "Gizli Sayı= " << gizli << "\n";
    }
    else
    {
        setlocale(LC_ALL,"Turkish");
        cout << "Üzgünüm sayıyı bilemediniz \n";
        if (tahmin < gizli)
        {
            
            cout << "Tahmininiz Gizli Sayıdan küçük \n";
            
        }
        else 
        {
            
            cout << "Tahmininiz Gizli Sayıdan büyüktür \n";

        }
    }
    cout << "Gizli Sayıyı bilmek istermisin? bilmek-1 istemiyorsan-2";
    cin >> yanit;
    if (yanit == 1)
    cout << "Gizli Sayı= "<< gizli;
    else
    cout << "Program Kapanıyor...";
} // namespace std;
