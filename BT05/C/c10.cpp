
#include <iostream>
#include <stdlib.h>
#include <time.h>
 using namespace std;

int random(int min1, int max1){
 return min1 + rand() % (max1 + 1 - min1);
}
int main()
{
    srand((int)time(0));
    int n;
    cin >> n;
    int i , a[n];
    for(i = 0; i < n; i++)
    {
        a[i] = random(0,49);
    }
    for(i = 0; i < n - 2; i++)
    {
        if((a[i] + a[i+1] + a[i+2]) % 25 == 0) cout << a[i] << "," << a[i+1] << "," << a[i+2] << endl;
    }
    return 0;
}
