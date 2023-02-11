#include <iostream> 
using namespace std; 
int main()
{
    float a, b , c; 
    int luachon; 
    cout << "Nhap lan luot 3 so nguyen tu ban phim: "; 
    cin >> a >> b >> c; 
    cout << "1.Tinh tong a + b + c" << endl; 
    cout << "2.Tinh tich a * b * c" << endl; 
    cout << "3.Giai phuong trinh ax + b = 0" << endl; 
    cout << "Nhap lua chon: ";
    cin >> luachon;
    switch (luachon)
    {
    case 1:
        cout << a << "+" << b << "+" << c << "=" <<  a + b + c; 
        break;
    case 2:
        cout << a << "*" << b << "*" << c << "=" << a * b * c; 
        break;
    case 3:
        if(a == 0)
        {
            if(b == 0)
            {
                cout << "Phuong trinh vo so nghiem!" << endl; 
            }
            else 
            {
                cout << "Phuong trinh vo nghiem!" << endl; 
            }
        }
        else cout << "phuong trinh co mot nghiem duy nhat x = " << -b/a << endl; 
        break;
    default:
        cout << "Lua chon khong hop le!" << endl; 
        break;
    }
    return 0; 
}