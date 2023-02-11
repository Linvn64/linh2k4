#include <iostream>
#include <cmath>
using namespace std; 
int main()
{
    int luachon; 
    float dai, rong, canh, thangcao, bhcao,lon, nho, bhcanh; 
    cout << "1.Tinh dien tich hinh vuong" << endl; 
    cout << "2.Tinh dien tich hinh chu nhat" << endl; 
    cout << "3.Tinh dien tich hinh thang" << endl; 
    cout << "4.Tinh dien tich hinh binh hanh" << endl; 
    cout << "Nhap lua chon: "; 
    cin >> luachon; 
    switch (luachon)
    {
    case 1:
        cout << "Nhap canh cua hinh vuong: "; cin >> canh; 
        cout << "Dien tich hinh vuong la: " << canh * canh << endl; 
        break;
    case 2: 
        cout << "Nhap chieu dai, rong cua hinh chu nhat: "; 
        do
        {
            cin >> dai >> rong; 
            if (dai == rong) cout << "Khong hop le!" << endl; 
        } while (dai == rong);
        cout << "Dien tich hinh chu nhat la: " << dai * rong << endl; 
        break; 
    case 3:  
        cout << "Nhap day lon, day nho, chieu cao hinh thang: "; 
        cin >> lon >> nho >> thangcao; 
        cout << "Dien tich hinh thang la: " << (lon + nho) / 2 * thangcao << endl; 
        break; 
    case 4:  
        cout << "Nhap do dai canh va chieu cao hbh: "; 
        cin >> bhcanh >> bhcao; 
        cout << "Dien tich hinh binh hanh la: " << bhcanh * bhcao << endl; 
        break; 
    default:
        cout << "Lua chon khong hop le!" << endl; 
        break;
    }
    return 0;
}