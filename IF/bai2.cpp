#include <iostream> 
using namespace std; 
int main()
{
    int Year; 
    cout << "Nhap nam: ";
    cin >> Year; 
    if(Year % 4 == 0 && (Year % 100 != 0 || Year % 400 != 0))
    {
        cout << Year << " la nam nhuan!" << endl; 
    }
    else cout << Year << " khong phai la nam nhuam!"<< endl; 
    return 0; 
}