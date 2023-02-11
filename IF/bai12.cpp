#include <iostream> 
#include <cmath>
using namespace std; 
int main()
{
    long doanhthu; 
    cout << "Nhap tong doanh thu: "; 
    cin >> doanhthu; 

    if(doanhthu <= 100)
    {
        cout << "Tien hoa hong: " << doanhthu * 0.05  << " trieu" << endl; 
    }
    else if(doanhthu <= 300)
    {
        cout << "Tien hoa hong: " << doanhthu * 0.1 << " trieu" << endl; 
    }
    else cout << "Tien hoa hong: " << doanhthu * 0.2 << " trieu" << endl; 

    return 0; 
}