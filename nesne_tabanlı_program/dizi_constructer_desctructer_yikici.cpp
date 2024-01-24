#include <iostream>
using namespace std;
// desctructerlar yıkcıı metodlardır aldığımız pointer bellieğini geri vermemize yani bellekte boş yer kaplamamasını sağlar.
class Virgul{
    private:
        int x;
        int y;
       
    public:
        
        int* z;
        Virgul();
        Virgul(int,int);

        ~Virgul();
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
    // Boş kurucu fonskiyon
    x = 0;
    y = 0;
    z = new int(5);
}
Virgul::Virgul(int x, int y = 8){ //  dolu constructer ile aldığımız değeri yazdırabiliyoruz
    // dolu kurucu fonskiyon
    this -> x = x;
    this -> y = y;
    z = new int(6);
}

Virgul::~Virgul(){
    cout << "Yıkıcı Çalıştı" << endl;
    delete z; // burada yıkıcı fonksiyon yani dectructerı çalıştırdık.
}


int main(){
    Virgul c(15,20);

    
    
    
    // Virgul c[5] = {{1,2},{2,3},{4,5}};
    // for (int i =0; i < 5; i++)
    // {
    //     cout << c[i].getX() << " " << c[i].getY() << endl;
    // }
    // Virgul* pointer = new Virgul(2,7);
    // return 0;



    // Virgul c(15,30);
    // cout << c.getX() << " " << c.getY() << endl;
    return 0;
}