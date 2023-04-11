#include<iostream>
using namespace std;
void nhiphan(int n)
{
    int a[1000] , i = 0 , dem = 0;
    while(n != 0)
    {
        a[i] = n% 2 ;
        n = n/2;
        i++;
        dem ++;
    }
    for(i = dem - 1; i >= 0; i--) cout << a[i];
}
int main()
{
    int n;
    cin >> n;
    nhiphan(n);
    return 0;
}
