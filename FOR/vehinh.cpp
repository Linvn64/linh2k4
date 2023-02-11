#include <iostream> 
using namespace std; 
void hinhchunhat(int &dai, int &rong)
{
    for(int i = 0; i < rong; i++)
    {
        for(int j = 0; j < dai; j++)
        {
            cout << "*"; 
        }
        cout << endl; 
    }
}
void tamgiac()
{
    int soDong; 
    cout << "Nhap so dong: ";
    cin >> soDong;
    for(int i = soDong; i > 0; i--) {
        //in so ky tu sao
        for(int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        //xuong dong ke tiep
        cout << endl;
    }
}
int main()
{
    int dai, rong; 
    cout << "Nhap chieu dai: "; cin >> dai; 
    cout << "Nhap chieu rong: "; cin >> rong; 
    hinhchunhat(dai, rong);
    tamgiac();
    return 0; 
}