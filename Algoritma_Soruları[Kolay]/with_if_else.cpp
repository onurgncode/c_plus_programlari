#include <iostream>
using namespace std;
int main()
{
    int sayi1, sayi2,max;
    cout << "iki sayıyı giriniz \n";
    
    cin >> sayi1 >> sayi2;
    
    if (sayi1 > sayi2)
    {
        max = sayi1;
    }
    else 
    {
        max = sayi2;
    }
    cout << max << "dir.";
    return 0;
} // namespace std;
