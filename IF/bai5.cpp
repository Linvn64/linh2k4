#include <iostream>
#include <cmath>
using namespace std; 
int main()
{
    float a, b , c;
    cin >> a >> b >> c; 
    float p = (a + b + c) / 2; 
    if(a + b > c || a + c > b || b + c > a)
    {
        cout << "Chu vi tam giac la: " << a + b + c << endl; 
        cout << "Dien tich tam giac la: " << sqrt(p * (p - a) * (p - b) * (p - c))<< endl; 

        if(a == b && b == c)
        {
            cout << "Tam giac deu " << endl; 
        }
        else if(a == b || b == c ||  a == c)
        {
            cout << "Tam giac can " << endl; 
        }
        else cout << "Tam giac thuong " << endl; 
    }
    else cout << "3 cạnh khong tao nen mot tam giac! ";
    return 0;
}