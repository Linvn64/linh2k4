#include <iostream> 
#include <cmath>
using namespace std; 
int main()
{
    float ktra,giuaki,cuoiki; 
    cout << "Diem kiem tra: "; cin >> ktra;
    cout << "Diem giua ki: "; cin >> giuaki;
    cout << "Diem cuoi ki: "; cin >> cuoiki;
    float Tb = (ktra + giuaki + cuoiki) / 3; 
    cout << Tb << endl; 
    if(Tb >= 9)
    { 
        cout << "A" << endl;
    }
    else if(Tb >= 7)
    {
        cout << "B" << endl;
    }
    else if(Tb >= 5)
    {
        cout << "C" << endl; 
    }
    else 
    {
        cout << "F"<< endl; 
    }
    return 0; 
}