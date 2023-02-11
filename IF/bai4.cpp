#include <iostream> 
using namespace std;
int main()
{
    float Number; 
    cout << "Nhap so:"; 
    cin >> Number; 
    if(Number < 100)
    {
        cout << Number << " < 100" << endl;
    }
    else if(Number > 100)
    {
        cout << Number << " > 100" << endl;
    }
    else cout << Number << " = 100" << endl; 
    return 0;
}