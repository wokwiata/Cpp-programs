#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		cout << "Usage: ./zad1 [komp lub dekomp] {tekst lub t2ek3st}" << endl;
		return 1;
	}
	string opcja = argv[1];
	string text = argv[2];
	if(opcja == "komp")
	{
		int size = text.size();
		int arr[2][size];
		for(int k = 0; k < size; k++) arr[1][k] = 0;
		for(int i = 0; i < size; i++)
		{
			arr[0][i] = int(text[i]);
			for(int j = i + 1; j < size; j++)
			{
				if(arr[0][i] == int(text[j]))
				{
					arr[1][i]++;
				}
				else break;
			}
		}
		for(int l = 0; l < size; l++)
		{
			if(arr[1][l] == 0) cout << char(arr[0][l]);
			if(arr[1][l] > 0)
			{
				cout << "[" << arr[1][l] + 1 << char(arr[0][l]) << "]";
				l += arr[1][l];
			}
		}
		cout << endl;
		return 0;
	}
	else if(opcja == "dekomp")
	{
		int size = text.size();
		int arr[2][size];
		for(int k = 0; k < size; k++) arr[1][k] = 0;
		int j = 0;
		for(int i = 0; i < size; i++)
		{
			if(int(text[i]) >= 48 && int(text[i]) <= 57)
			{
				arr[0][j] = text[i] - '0';
				j++;
				i++;
			}
			else
			{
				arr[0][j] = 1;
				j++;
			}
			arr[1][j - 1] = int(text[i]);
		}
		for(int i = 0; i < j; i++)
		{
			//cout << arr[0][i] << char(arr[1][i]) << endl;
			if(arr[0][i] > 1)
			{
				for(int k = 0; k < arr[0][i]; k++) cout << char(arr[1][i]);
			}
			else if(arr[0][i] == 1) cout << char(arr[1][i]);
		}
		cout << endl;
		return 0;
	}
	else
	{
		cout << "Usage: ./zad1 [komp lub dekomp] {tekst lub t2ek3st}" << endl;
		return 1;
	}
}
