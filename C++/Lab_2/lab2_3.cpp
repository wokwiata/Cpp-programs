#include <iostream>
#include <cmath>

using namespace std;

int fun1(int x)
{
    int r;
    int s = 0;
    while(r != 0)
    {
        r = x % 10;
        s += pow(r, 2);
        x = x/10;
    }
    return s;
}

int fun2(int x)
{
    int c = 0;
    for(int i = 1; i <= x; i++)
    {
        if(x % i == 0) c++;
    }
    return c;
}

int fun3(int x)
{
    int s = 0;
    for(int i = 1; i <= x; i++)
    {
        if(x % i == 0) s += i;
    }
    return s;
}

bool fun4(int x)
{
	bool digits[9] = {false};
	while(x > 0)
	{
		int digit = x % 10;
		if(digits[digit]) return false;
		digits[digit] = true;
		x /= 10;
	}
	return true;
}

int fun5(int x, int y)
{
	int max;
	if(x > y) max = x;
	else if(x < y) max =y;
	int i = 1;
	int NWD;
	while(i <= max)
	{
		if((x % i == 0) && (y % i == 0)) NWD = i;
		i += 1;
	}
	return NWD;
}

int fun6(int x, int y)
{
	return (x * y) / fun5(x, y);
}

bool fun7(int x)
{
	if (x <= 1) return true;
	int prev = 0;
	int curr = 1;
	while(curr <= x)
	{
		if(curr == x) return true;
	
	int next = prev + curr;
	prev = curr;
	curr = next;
	}
	return false;
}

bool fun8(int x)
{
	if(sqrt(x) >= 3)
	{
		int sqr = pow(floor(sqrt(x)), 2);
		return (x % sqr == 0);
	}
	return false;
}

int main()
{
    int x, y;
    cout << "Podaj liczbe: ";
    cin >> x;
    cout << "Suma kwadratow cyfr liczby: " << fun1(x) << endl;
    cout << "Liczba podzielnikow liczby: " << fun2(x) << endl;
    cout << "Suma podzielnikow liczby: " << fun3(x) << endl;
	if(fun4(x) == 1) cout << "Każda cyfra występuje raz." << endl;
	else cout << "Cyfry się powtarzają." << endl;
	if(fun7(x) == 1) cout << "Liczba jest elementem ciągu Fibonacciego." << endl;
	else cout << "Liczba nie jest elementem ciągu Fibonacciego." << endl;
	if(fun8(x) == 1) cout << "Liczba jest wielkokrotnością kwadratu liczby naturalnej większej od 2." << endl;
	else cout << "Liczba nie jest wielkokrotnością kwadratu liczby naturalnej większej od 2." << endl;	
	cout << "Podaj drugą liczbe: ";
	cin >> y;
	cout << "Największy wspólny dzielnik: " << fun5(x, y) << endl;
	cout << "Najmniejsza wspólna wielokrotność: " << fun6(x, y) << endl;

    return 0;
}
