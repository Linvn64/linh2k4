#include <iostream> 
using namespace std; 
int main()
{
    int sodien; 
    do
    {
        cin >> sodien; 
        if(sodien < 0) cout << "so dien khong hop le! " << endl << "nhap lai:";
    } while (sodien < 0);
    if(sodien <= 100)
    {
        cout << "So tien dien la: " << sodien * 500  << "d" << endl; 
    }
    else cout << "So tien dien la: " <<  (sodien*500) + (sodien - 100)*800 << "d" << endl; 
    return 0;
}