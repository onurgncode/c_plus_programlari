#include <iostream>
using namespace std;

class Kompleks{

    public:
        Kompleks(int r = 0 , int s = 0)
        {
            reel = r;
            sanal = s;
        }
        int getReel(){return reel;}
        int getSanal(){return sanal;}
        void setReel(int r){ reel = r;}
        void setSanal(int s) {sanal = s;}

        void print(){
            cout << reel << " + " << sanal << "i" << endl;
            cout << reel << " - " << sanal << "i" << endl; 
        };


        /*
        Kompleks operator+(Kompleks obj1)
        {
            Kompleks toplam;
            toplam.reel = reel + obj1.reel;
            toplam.sanal = sanal + obj1.sanal;
            return toplam;
        }*/

        private:
            int reel;
            int sanal;

};


Kompleks operator+(Kompleks obj1, Kompleks obj2)
{
    Kompleks toplam;
    toplam.setReel(obj1.getReel() + obj2.getReel());
    toplam.setSanal(obj1.getSanal() + obj2.getSanal());
    return toplam;
}



int main(){
    Kompleks k(2,3);
    Kompleks k2(3,2);
    Kompleks k3 = k + k2;
    k3.print();
    k.print();
    k2.print();


    return 0;
}