#include <iostream>
#include <string>
using namespace std;
// car sınıfı 

class car{
    private:
        string company;
        string model;
        int price;
        int topSpeed;
    public:
    // Defalut ataması yapalım 
    car(){
        company = "BMW";
        model = "5.20";
        price = 150000;
        topSpeed = 260;
    }
    // Construcktor Fonskiyonun oluştur
    car(string c, string m, int p, int t)
    {
        company = c;
        model = m;
        price = p;
        topSpeed = t;
    }
    // Set fonksiyonlarımızı ayarlayalım amaç : Main içinde verdiğimiz değerleri car veri atamak
    void setCompany(string c){company = c;}
    void setModel(string m) {model = m;}
    void setPrice(int p) {price = p;}
    void setTopSpeed(int t) {topSpeed = t;}
    void setAll(string c , string m, int p, int t)
    {
        company = c;
        model = m;
        price = p;
        topSpeed = t;
    }
    
    // Get fonksiyonlarımızı ayarlayalım amaç : Main içindeki verileri çağırmak
    string getCompany(){return company;}
    string getModel(){return model;}
    int getPrice(){return price;}
    int getTopSpeed(){return topSpeed;}
    
    // Ekrana yazdırma fonskiyonu 
    void printAll()
    {
        cout << "Company   : " << company << endl;
        cout << "Model   : " << model << endl;
        cout << "Price   : " << price << endl;
        cout << "Top Speed   : " << topSpeed << endl;
    }

}
    car1;

int main(){
    car1.setModel("5.30");
    car1.printAll();
    car car2("AUDİ","AS",100000,200);
    car2.printAll();
    system("pause");
    return 0;


}