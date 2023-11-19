//5000 Tl den yüksekse 1000 tl prim
// adi soyadı çalıştığı saat saatıığı ürünler toplamı
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    char adi[22],s_adi[22];
    float toplam,sattigi_mal,saat,ucret;
    cout << "***Maaş Bordrosu***\n";
    cout << "Çalışanın Adını giriniz=  \n";
    cin >> adi;
    cout << "Çalışanın Soyadını Griniz=  \n";
    cin >> s_adi;
    cout << "Çalışanın çalıştığı saati giriniz= ";
    cin >> saat;
    ucret = 50*saat;
    cout << "Çalışanının saatığı mal fiyatını giriniz= ";
    cin >> sattigi_mal;
    if(sattigi_mal >= 5000)
    {
        toplam = ucret + sattigi_mal + 1000;
        cout << "Sattığınız Mal 5000 Tl den fazla olduğu için \n Ekstra 1000 tl eklenmiştir Toplam Maaşınız= " << toplam;
    }
    else
    {
    toplam = ucret + sattigi_mal;
    cout << "Prim Ödenmemiştir Toplam Maaşınız= " << toplam;
    }
    return 0;
    

}



