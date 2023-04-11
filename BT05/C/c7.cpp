#include<iostream>
using namespace std;
void hoathi(int n)
{
    int x, y;
    for(y = 0; y < n; y++)
    {
        for(x = - n +1; x < n ; x++)
        {
            if(abs(x) <= y) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    hoathi(n);
    return 0;
}
