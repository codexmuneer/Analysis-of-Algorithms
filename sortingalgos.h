#include <iostream>
using namespace std;
template <class T>
T* bubbleSort(T arr[], int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}
int* selectionSort(int arr[], int size)
{
	
	for (int i = 0; i < size - 1; i++)
	{
		int less = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[less])
			{
				less = j;
			}
		}
		if (arr[less] < arr[i])
		{
			int temp = arr[less];
			arr[less] = arr[i];
			arr[i] = temp;
		}
		
	}

	return arr;
}
int* insertionSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int temp = arr[i];
		int j = i - 1;
		while (temp < arr[j] && j >= 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
	return arr;
}
char* caseBasedSort(char arr[], int size)
{
	//{ 'z','D','v','L','a','g','T' };
	//{ 'a','g','v','z','D','L','T' };
	bubbleSort(arr, size);
	int ind = 0;
	char* arrC = new char[size];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			ind = i;
			break;
		}
	}
	int ind1 = 0;
	for (int i = ind; i < size; i++)
	{
		arrC[ind1] = arr[i];
		ind1++;
	}
	for (int i = 0; i < ind; i++)
	{
		arrC[ind1] = arr[i];
		ind1++;
	}
	

	
	return arrC;
}
int** sortPuzzle(int arr[][7], int size)
{
	int** abc = new int* [3];
	abc[0] = selectionSort(arr[0], 7);
	abc[1] = insertionSort(arr[1], 7);
	abc[2] = bubbleSort(arr[2], 7);
	return abc;
}
int searchForRectangles(int arr[][2], int xsize, int ysize)
{
	float Larg, Smal;
	int noOfRect = 0;
	for (int i = 0; i < xsize; i++)
	{
		for (int j = 0; j < ysize; j++)
		{
			Larg = arr[i][j];
			j = j + 1;
			Smal = arr[i][j];
		}
		float c = Larg / Smal;
		if (c >= 1.6 && c <= 1.7F)
		{
			noOfRect++;
		}
	}
	return noOfRect;

}
