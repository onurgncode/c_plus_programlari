// genel tekrar

#include <iostream>
using namespace std;
class Kolon {
    int * data;
    int boyut;
    public:
        Kolon (int boyut = 1) : boyut(boyut){
            data = new int[boyut];
            cout << boyut << " Elamanlı bir dizi oluşturuldu." << endl;
        }

        Kolon(const Kolon& k){
            this ->boyut = k.boyut;
            data = new int[boyut];
            for(int i=0; i < boyut; i++)
            {
                data[i] = k.data[i];
                
            }
            cout << "Kopyalama Kurucusu Çalıştı." << endl;
        }
            // Yukıcı Fonskiyon
        ~Kolon(){delete[] data; cout << "Yıkıcı çalıştı Dizi silindi" << endl;}
        
        void set(int indis, int value)
        {
            if(indis < boyut){
                data[indis] = value;
            }
           
        }
        
        
        int getBoyut() {return boyut;}
        void setBoyut(int boyut) {this ->boyut = boyut;}
        void print()const{
            for(int i =0;i< boyut; i++)
            {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    
    Kolon topla(const Kolon&k)const{
        if(boyut == k.boyut){
            Kolon temp(boyut);
            for(int i =0; i< boyut; i++){
                temp.data[i] = data[i] + k.data[i];
            }
            return temp;
        }
    }


};


int main(){
    Kolon k(3);
    k.set(0,5);
    k.set(1,3);
    k.set(2,10);

    Kolon k2 = k;
    k.print();
    k2.print();

    cout << endl << endl;
    (k.topla(k2)).print();
}