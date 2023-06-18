#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cout << "Podaj pierwszą liczbe całkowitą: ";
	cin >> s1;
	cout << "Podaj drugą liczbe całkowitą: ";
	cin >> s2;

	int size = s1.size() + s2.size();
	int result[size] = {0};
	int arr1[s1.size()], arr2[s2.size()];
	
	for(int i = 0; i < s1.size(); i++)
	{
		arr1[i] = s1[i] - '0';
	}
	for(int i = 0; i < s2.size(); i++)
	{
		arr2[i] = s2[i] - '0';
	}

	for(int i = s1.size() - 1; i >= 0; i--)
	{
		for(int j = s2.size() - 1; j >= 0; j--)
		{
			int num = arr1[i] * arr2[j];
			int pos1 = i + j + 1;
			int pos2 = i + j;
			int sum = num + result[pos1];
			result[pos1] = sum % 10;
			result[pos2] += sum / 10;
		}
	}
	
	int i = 0;
	while(result[i] == 0 && i < size - 1) i++;
	for(; i < size; i++)
	{
		cout << result[i];
	}
	cout << endl;
	
	return 0;
}
