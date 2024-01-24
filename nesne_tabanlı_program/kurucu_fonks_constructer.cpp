#include <iostream>
using namespace std;

class Virgul{
    private:
        int x;
        int y;
    public:
        

        Virgul();
        Virgul(int,int);

        int getX();
        int getY();
        void setX(int);
        void setY(int);
        void ekranaYaz();
};

void Virgul::ekranaYaz(){
    cout << x << " " << y << endl;
}

int Virgul::getX(){
    return x;
}

int Virgul::getY(){
    return y;
}
Virgul::Virgul(){ // Boş constructer ile default değer alabilyoruz
    x = 10;
    y = 8;

}
Virgul::Virgul(int x, int y){ //  dolu constructer ile aldığımız değeri yazdırabiliyoruz
    this -> x = x;
    this -> y = y;
}




int main(){
    



    // Virgul c(15,30);
    // cout << c.getX() << " " << c.getY() << endl;
    // return 0;
}