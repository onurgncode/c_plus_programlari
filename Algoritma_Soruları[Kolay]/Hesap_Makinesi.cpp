#include <iostream>
using namespace std;
int main()
{
    double s1,s2,secim,sonuc;

    cout << "İlk Sayınızı Giriniz";
    cin >> s1;
    cout << "İkinci Sayınızı Giriniz";
    cin >> s2;
    cout << "İşlem Seçiniz 1-Toplam 2-Çıkar 3-Böl 4-Çarp \n";
    cin >> secim;
    switch ((int)secim)
    {
    case 1:
        cout << s1 + s2;
        cin >> sonuc;
        cout << sonuc;
        break;
    case 2:
        cout << s1 - s2;
        cin >> sonuc;
        cout << sonuc;
        break;
    case 3:
        cout << s1 / s2;
        cin >> sonuc;
        cout << sonuc;
        break;
    case 4:
        cout << s1 * s2;
        cin >> sonuc;
        cout << sonuc;
        break;
    
    
    }    
    return 0;
} // namespace std;
