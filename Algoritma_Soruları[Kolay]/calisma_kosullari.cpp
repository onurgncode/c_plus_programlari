#include <iostream>
using namespace std;

int main(){
    int kod;
    cout << "Basınç Kodunu Giriniz";
    cin >> kod;
    switch (kod)
    {
    case 8:
        cout << "Basınç Kodu yüksek " << "Sistemi kapat";
        break;
    case 7:
        cout << "Sıcaklığı Düşür " << "Sistemi Kontrol et";
        break;
    case 6:
        cout << "Dikkat her 5 dk bir kontrol et";
        break;
    
    default:
        cout << "Basınç Normal";
        break;
    }
}