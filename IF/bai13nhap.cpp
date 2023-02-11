#include <iostream> 
#include <cmath> 
#define phicodinh 30000
using namespace std; 
int main()
{
    long phutgoi, phi; 
    cout << "Nhap so phut goi: " << endl; 
    cin >> phutgoi; 

    if(phutgoi > 50)
    {
       phi = (phutgoi - 50) * 600  ; 
    }
    else if(phutgoi > 150)
    {
        phi = (phutgoi -150) * 400 + (50 * 600 ) ; 
    }
    else phi = (phutgoi - 200) * 200 + (150 * 400 + 50 * 600 ) ; 
    cout << "Tong so tien ban goi voi " << phutgoi << " la: " << phicodinh + phi << endl; 
    return 0; 
}