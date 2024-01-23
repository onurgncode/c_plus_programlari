// pointer kullanımı ve nedir 
// pointerlar deişkenin adresini tutarlar
#include <iostream>
using namespace std;
int main()
{
    int x = 7;

    int *adres;
    adres =  &x; // &: of demek


    cout << adres << endl;
    // adres çıktı 0x2179bffcb4 remde tutulan yer bu adres x'le aynı yeri tutar
    cout << *adres << endl;
    // çıktı 7 dir adres x in kısayoludur diyebiliriz
    *adres = 8;
    cout << "x in yeni hali " << x << endl;


    return 0;
} 
