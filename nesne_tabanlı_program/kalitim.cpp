#include <iostream>
using namespace std;
class insan{
    protected:
    string tc;
    string isim;
    string soyad;
    public:
        insan(string tc="", string isim="",string soyad=""):tc(tc),isim(isim),soyad(soyad){};

        
        string getTc() {return tc;}
        string getIsim() {return isim;}
        string getSoyad() {return soyad;}
        void setTc(string tc) {this->tc = tc;} 
        void setIsim(string isim) {this->tc = tc;}
        void setSoyad(string soyad) {this->soyad = soyad;}
};

class ogrenci:public insan{
    private:
        string ogrenciNo;
    public:
        ogrenci(string ogrenciNo="",string tc="",string isim="", string soyisim=""): ogrenciNo(ogrenciNo),insan(tc,isim,soyad){}
        string getOgrenciNo() {return ogrenciNo;}
        void setOgrenciNo(string ogrenciNo) {this ->ogrenciNo = ogrenciNo;}
};



int main(){

    insan ali("31288833112","Onur","Doğan");
    cout << ali.getIsim() << ali.getTc() << endl; 
    ogrenci ayse("1234","112213131231","Onur","Doğan");
    cout <<ayse.getOgrenciNo() << ayse.getIsim() << ayse.getTc() << endl;
    return 0;
}