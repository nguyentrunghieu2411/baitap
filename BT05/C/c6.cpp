#include<iostream>
using namespace std;
int ucln(int a , int b)
{
    while(b != 0)
    {
        int tg = a% b;
        a = b;
        b = tg;
    }
    return a;
}
int main()
{
    int a , b;
    cin >> a >> b;
    cout << a << " va " << b ;
    if(ucln(a,b) == 1) cout <<  " la so nguyen to cung nhau";
    else cout << " khong phai so nguyen to cung nhau";
    return 0;
}
