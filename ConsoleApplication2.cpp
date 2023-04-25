#include <iostream>
using namespace std;

void swap(int arr[], int pos1, int pos2) 
{
	int temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

void quickSort(int arr[], int low, int high) 
{
	if (low < high) 
	{
		int pivot = arr[high], i = low, j = low;

		while (i <= high) 
		{
			if (arr[i] > pivot) i++;
			else 
			{
				swap(arr, i, j);
				i++;
				j++;
			}
		}
		int pos = j - 1;
		quickSort(arr, low, pos - 1);
		quickSort(arr, pos + 1, high);
	}
}

int main()
{
	int size_arr = 0;
	cout << "Enter the size of array ";
	cin >> size_arr;
	int* arr = new int[size_arr];
	for (int i = 0; i < size_arr; i++)
	{
		cin >> arr[i];
	}
	quickSort(arr, 0, size_arr - 1);
	cout << "The sorted array is:\n";
	for (int i = 0; i < size_arr; i++)
	{
		cout << arr[i] << "\n";
	}
}