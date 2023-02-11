#include <iostream> 
#include <cmath>
using namespace std; 
int main()
{
    int so; 
    cout << "Nhap so kiem tra: " << endl; 
    do
    {
        cin >> so ; 
        if(so <= 0 ){
            cout << "So khong hợp lệ nhap so tu nhien! " << endl; 
        }
    }while(so <= 0);
    if((sqrt(so) * sqrt(so)) == so)
    {
        cout << "So chinh phuong! " << endl; 
    }
    else 
        cout << "Khong phai so chinh phuong! " << endl; 
    return 0; 
}
