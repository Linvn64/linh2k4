#include <iostream>
using namespace std;
int main()
{
    int Old; 
    cout << "Nhap tuoi: "; 
    do
    {
        cin >> Old; 
        if(Old <= 0) cout << "Tuoi khong hop le!\nNhap lai: " << endl;
    } while (Old <= 0);
    
    if(Old >= 16)
    {
        cout << "Du dien kien vao lop 10!" << endl; 
    }
    else cout << "Khong du dieu kien vao lop 10!" << endl; 
    return 0; 
}