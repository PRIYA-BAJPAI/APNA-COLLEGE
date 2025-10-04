#include <iostream>
// #include<math.h>
using namespace std;
int main()
{
    int n = 125;
    int copy = n;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }
    cout << sum << endl;
    if (copy == sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }
    return 0;
}