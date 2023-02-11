#include <iostream>
using namespace std; 
int main()
{
    float a, b; 
    cin >> a >> b;
    if(a != 0)
    {
        if(a > 0)
        {
            cout << "bpt co nghiem! " << "x > " << (-b/a) << endl; 
        }
        else 
            cout << "bpt vo nghiem! " << "x < " << (-b/a) << endl; 
    }
    else 
    {
        if(b > 0)
            cout << "bpt co vo so nghiem! " << endl; 
        else 
            cout << "bpt vo nghiem! " << endl; 
    }
    return 0;
}