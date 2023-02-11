#include <iostream> 
#include <cmath>
using namespace std; 
int main()
{
    int n; 
    long s = 0; 
    cout << "Nhap n: "; cin >> n; 
   for(int i = 0; i < n; i++)// tìm ước thì là i <= n còn tìm số hoàn hảo thì i < n 
   {
        if(n % i == 0 )
        {
            cout << i << "\t"; 
            s = s + i;
        }
   }
   cout << s << endl; 
   if(s == n)
   {
    cout << "la so hoan hao!" << endl; 
   }
   else cout << "khong phai so hoan hao!" << endl; 
    return 0; 
}