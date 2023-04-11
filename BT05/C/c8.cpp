#include<iostream>
using namespace std;
int rnd(double x)
{
    int a = (int) x;
    x = x - a;
    if(x >= 0.5) return a+1;
    else return a;
}
int main()
{
    double n;
    cin >> n;
    cout << rnd(n);
    return 0;
}
