#include <iostream>
#include <cmath> 
using namespace std; 
int main()
{
    float a, b, c, max, min;   
    float delta = b * b -  4 * a * c; 
    int luachon; 
    cout << "Nhap lan luot 3 so a, b , c: " << endl; 
    cin >> a >> b >> c; 
    cout << "1.Kiem tra 3 so co tao thanh 1 tam giac hay khong? " << endl; 
    cout << "2.Giai phuong trinh ax2 + bx + c =  0 " << endl; 
    cout << "3.Tim so lon nhat trong 3 so " << endl; 
    cout << "Nhap lua chon: "; cin >> luachon; 
    switch (luachon)
    {
    case 1:
        if(a + b > c || a + c > b || b + c > a)
        {
            cout << "3 so tao thanh 1 tam giac! " << endl; 
        }
        else cout << "3 so khong tao thanh 1 tam giac! " << endl; 
        break;
    case 2: 
        if(a == 0)
        {
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
        }
        else 
        {
            if(delta < 0) cout << "Phuong trinh so nghiem" << endl; 
            else if(delta == 0)
            {
                cout << "Phuong trinh co nghiem kep x = " << -b / 2*a << endl; 
            }
            else 
            {
                cout << "Phuong trinh co 2 nghiem phan biet x1 = " << (-b + sqrt(delta))/2*a << "\nx2 = " << (-b - sqrt(delta))/2*a;
            }
        }
        break; 
    case 3: 
            if(a > b) max = a;
            if(max < c)  max=c;
            cout << "max = "  << max << endl; 

            if(a > b) min = b;
            if(max > c)  min = c;
            cout << "min = " << min << endl; 
        break; 
    default:
        cout << "Lua chon khong hop le!" << endl; 
        break;
    }
    return 0; 
}