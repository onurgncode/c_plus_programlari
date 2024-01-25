#include <iostream>
using namespace std;

class sabitDegisken{
    public:
        const int t; // sadece get edilebilirken bunu bunu aşağıdaki gibi bybass edebiliriz.
        sabitDegisken();
        sabitDegisken(int);
};


sabitDegisken::sabitDegisken(int t) : t(t) // fonskiyon çalışmadan önce değer atama yapılır bu sayede const değişkenine değer verilir 
{
    cout << t << endl;
    // this -> t = t; hatalı kullanım
}

int main(){
    sabitDegisken(10);
    sabitDegisken(20);
    
    return 0;
}