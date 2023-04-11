
#include<iostream>
using namespace std;
int n , a[11] , b[11] = {};
void try1(int i)
{
    int j;
    for(j = 1; j <= n ;j++)
    {
        if(b[j] == 0)
        {
            b[j] = 1;
            a[i] = j;
            if(i == n)
            {
                for(int k = 1; k <= n ; k++) cout << a[k] ;
                cout << endl;
            }
            else try1(i+1);
            b[j] = 0;
        }

    }
}
int main()
{
    cin >> n;
    try1(1);
    cout << endl;
    return 0;
}
