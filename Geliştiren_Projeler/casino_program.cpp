// slot oyunu olacak başlangıç parası 800 olacak
// 3 random sayı alınacak eğer ve bir katlama değeri ayrıca yatırılan para miktarı olacak
// Yatırılan para miktarının katına göre para kaybedecek yada para kazanacak


#include <iostream>
#include <cstdlib>
using namespace std;


            
class slotDeger{
    private:
        int a,b,c;
    public:
        void randomAt(){
            this -> a = rand() % 100;
            this -> b = rand() % 100;
            this -> c = rand() % 100;

            cout << a << " " << b << " " << c << " " << endl;
                
            }
            
            int getA() {return a;}
            int getB() {return b;}
            int getC() {return c;}
};


int main(){
    
    int kalan_para = 0;
    int sayac = 0;
    int yatirilan_para;
    int para = 800;
    int cis;
    
    cout << "Ne kadar para yatırmak istersin Her slot 20 tl" << endl;
    cin >> yatirilan_para;
    slotDeger c;
    c.randomAt();
    cout << c.getA() << endl;
    // kat alma daha yapılmadı
    // tekrarlama konusunda sıkıntı var
    for(int i = 0; i < yatirilan_para; i= i+20)
    {
    
        if(c.getA() == c.getB() == c.getC())
        {
            cout << "Tebrikler kazandınız" << endl;
            para =+ yatirilan_para;
            break;
        }
    cout << "Tekrar etmek istermisin 1 tıkla" << endl << endl;
        if (cis == 1)
        {
            kalan_para = para - yatirilan_para;
            cout << kalan_para << " KALAN PARANIZ" << endl; 
        }
        
    }
    
    cin >>  cis;
    return 0;
}