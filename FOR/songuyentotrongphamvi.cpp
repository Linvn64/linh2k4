#include <iostream> 
#include <cmath>
using namespace std; 
int main()
{
    int n; 
    cout << "Nhap n: "; cin >> n; 
    if(n < 2)
    {
        cout << "khong phai la so nguye to!" << endl; 
    }
    else 
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                cout << "Khong phai la so nguye to!"; 
                return 0; 
            }
        }
        cout << "La so nguyen to!" << endl;
    }
    return 0; 
}