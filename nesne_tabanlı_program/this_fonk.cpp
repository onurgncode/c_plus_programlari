#include <iostream>
using namespace std;

class Nokta{
    private:
        int x;
        int y;
    public:
        int getX();
        int getY();

        void setX(int);
        void setY(int);
        void yazdir();
};

void Nokta::yazdir(){
    cout << x << "," << y << endl;
}


int Nokta::getX(){
    return x;
}

int Nokta::getY(){
    return y;
}

void Nokta::setX(int x) // this burada deişkenlerin karışmamasını salarlar
{
    this ->x = x;
}

void Nokta::setY(int _y) // istersek böylede kullanabiliriz 
{
    y = _y;
}

int main(){
    Nokta c;
    c.setX(50);
    c.yazdir();
    return 0;
}