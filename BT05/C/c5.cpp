#include<iostream>
#include<cmath>
using namespace std;
bool check(int n)
{
    int i , dem =0;
    for(i = 2; i <= sqrt(n) ;i++ )
    {
        if(n % i == 0) dem ++;
    }
    if(n <= 1) return false;
    else{
        if(dem == 0) return true;
        else return false;
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 2; i < n; i++)
    {
        if(check(i)) cout << i << " ";
    }
    return 0;
}
