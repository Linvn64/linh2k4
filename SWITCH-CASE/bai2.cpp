#include <iostream>
using namespace std; 
int main()
{
    char kytu; 
    cin >> kytu; 
    switch (kytu)
    {
    case 'A':
    case 'a':
        cout << "Xin chao" << endl; 
        break;
    case 66:
    case 'b':
        cout << "Hoan nghenh" << endl; 
        break; 
    default:
        cout << "Xin loi" << endl;
        break;
    }
    return 0; 
}