#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void insert(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int curr = arr[i];
		int j = i - 1;
		while(j >= 0 && curr < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = curr;
	}
}

int merge(int arr1[], int n1, int arr2[], int n2)
{
	int result[n1 + n2];
	int i = 0, j = 0, k = 0;
	while(i < n1 && j < n2)
	{
		if(arr1[i] < arr2[j]) result[k++] = arr1[i++];
		else if(arr2[j] < arr1[i]) result[k++] = arr2[j++];
		else
		{
			result[k++] = arr1[i++];
			j++;
		}
	}
	while(i < n1) result[k++] = arr1[i++];
	while(j < n2) result[k++] = arr2[j++];
	
	int size = 1;
	for(int i = 1; i < k; i++)
	{
		if(result[i] != result[i - 1]) result[size++] = result[i];
	}
	cout << "\nKońcowa tablica:\n";
	for(int l = 0; l < size; l++) cout << result[l] << " ";
	cout << endl;

	return size;
}

int main()
{
	srand(time(nullptr));
	const int N1 = 10;
	const int N2 = 15;
	int t1[N1];
	int t2[N2];
	for(int i = 0; i < N1; i++)
	{
		t1[i] = rand() % 10 + 1;
		cout << t1[i] << " ";
	}
	cout << "\n-----------------------------" << endl;
	for(int i = 0; i < N2; i++)
	{
		t2[i] = rand() % 10 + 1;
		cout << t2[i] << " ";
	}
	insert(t1, N1);
	insert(t2, N2);
	cout << "\n\nPosortowane tablice: " << endl;
	for(int i = 0; i < N1; i++)
	{
		cout << t1[i] << " ";;
	}
	cout << "\n-----------------------------" << endl;
	for(int i = 0; i < N2; i++)
	{
		cout << t2[i] << " ";
	}
	cout << endl;
	merge(t1, N1, t2, N2);

	return 0;
}
