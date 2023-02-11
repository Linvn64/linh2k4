#include <iostream> 
using namespace std; 
int main()
{
    char color; 
    cout << "Nhap ky tu mau:";
    cin >> color; 
    switch (color)
    {
    case 'R':
    case 'r':
        cout << "RED" << endl;
        break;
    case 'G':
    case 'g': 
        cout << "GREEN" << endl; 
        break; 
    case 'B': 
    case 'b':
        cout << "BLUE" << endl; 
        break; 
    default:
        cout << "BLACK" << endl;
        break;
    }
    return 0; 
}