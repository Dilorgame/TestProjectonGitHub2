#include <iostream>
using namespace std;

int main()
{
    int ar1[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int* val1 = ar1;
    for (int i = 0; i < 10; i++)
    {
        cout << val1 << ' ' << *val1 << endl;
        val1++;
    }

}