#include <iostream>
#include <cmath>
using namespace std; 
int main()
{
    float a, b, c, delta; 
    cout << "Nhap lan luot 3 so a, b, c: "; 
    cin >> a >> b >> c; 
    delta = b*b - 4*a*c; 
    if(a == 0)
    {
        if(b == 0)
            cout << "Phuong trinh vo nghiem! " << endl; 
        else 
            cout << "phuog trinh co nghiem duy nhat x = " << -c/b << endl;
    }
    else
    {
        if(delta > 0)
            cout << "x1 = " << (-b + sqrt(delta)) / (2 *a) << endl; 
            cout << "x2 = " << (-b - sqrt(delta)) / (2 *a) << endl; 
    }
    
    return 0;
}