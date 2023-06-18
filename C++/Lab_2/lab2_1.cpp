#include <iostream>

using namespace std;

int fun(int x, int y)
{
    int z = 0;
    for(int i = x; i <= y; i++)
    {
        if(i % 3 == 0 && i % 7 != 0)
        z++;
    }
    return z;
}

int main()
{
    cout << "Od 1 do 50 jest " << fun(1, 50) << " liczb." << endl;
    cout << "Od 51 do 100 jest " << fun(51, 100) << " liczb." << endl;
    cout << "Od 101 do 150 jest " << fun(101, 150) << " liczb." << endl;

    return 0;
}
