#include <iostream> 
using namespace std; 

int main()
{
    float a, b, c; 
    cout << "Nhap 3 so tu ban phim" << endl; 
    cin >> a >> b >> c;
    float max = a; 
    if (b > max)
    {
        cout << "max = " << b << endl; 
    }
    else 
    {
        if(c > max)
        {
            cout << "max = " << c << endl; 
        }
        else cout << "max = " << a << endl; 
    }
    float min = a; 
    if(b < min)
    {
        cout << " min = " << b << endl; 
    }
    else
    {
        if(c < min)
        {
            cout << "min = " << c << endl; 
        }
        else cout << "min = " << a << endl;  
    }
    return 0; 
}