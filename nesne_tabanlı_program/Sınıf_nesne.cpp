#include <iostream>
using namespace std;
// isim uzayı herkesin kendi değişkenleri 
namespace parogramci1{
    int x = 15;
    void boo(){
        int x = 7;
        cout << x << endl;
    };
}
namespace parogramci2{
    int x = 15;
    void boo(){
        int x = 7;
        cout << x << endl;
    };
}


/*
eğer bir değişken dışarı yazıldıysa global fonksiyon geçerlidir
ama herhangi bir fonsksiyon class içine yazılırsa işlemez.

scopların dışındakiler kontrolü öenlidir yanlış yapma

*/


class Nokta{
    public:
    int x,y;
    void degerAta(int _y,int _x)
    {
        x = _x;
        y = _y;
    }
    void ekranYazdir(){
        cout << x << "," << y << endl;
    }
    bool baslangictaMi(){
        if(x == 0 && y == 0)
            return true;
        else 
            return false;
        /* uzatmak yerine return x==0 && y == 0; kullanılabilir*/
    }
};

int main(){
    Nokta n;
    Nokta* n2; /* pointer referans yer*/
    n2 = &n;

    n.degerAta(0,0);
    n.ekranYazdir();
    if(n.baslangictaMi())
        cout << "Başlangıçta";
    n2 ->degerAta(5,2);
    n2 ->ekranYazdir();
    cout << parogramci1::x << endl;
    parogramci2::boo();
    return 0;
}