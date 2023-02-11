#include <iostream> 
#include <iostream>
using namespace std; 
int main()
{
    int a, b; 
    cout << "Nhap 2 so nguyen tu ban phim: " << endl; 
    cin >> a >> b; 
    cout << "a + b = " << a + b << endl; 
    cout << "a - b = " << a - b << endl; 
    cout << "a * b = " << a * b << endl; 
    if(b == 0)
    {
        cout << "khong hop le!" << endl; 
    }
    else cout << "a / b = " << a / b << endl; 
    return 0; 
}