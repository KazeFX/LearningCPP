#include <iostream>
using namespace std;

// KazeSort ~ QuickSort with too many pivots? Time complexity still O(nlog(n))-ish
int partition(int arr[], int beginning, int end)
{
	//Putting that arrrrr in the pivot.
	int pivot{ arr[beginning] };

	int count{ 0 };
	for (int i = beginning + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}

	// Putting pivots in the right order.
	int pivotIndex{ beginning + count };
	swap(arr[pivotIndex], arr[beginning]);

	// Sorting left and right parts of the pivot.
	int i{ beginning }, j{ end };

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}
			
		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}

	}

	return pivotIndex;
}

void quickSort(int arr[], int beginning, int end)
{

	// default
	if (beginning >= end)
		return;

	// partitioning the array
	int p{ partition(arr, beginning, end) };

	// Sorting the left part
	quickSort(arr, beginning, p - 1);

	// Sorting the right part
	quickSort(arr, p + 1, end);
}

// quicksort main
int main()
{
	// Initialize array elements.
	int arr[] = { 5, 9, 44, 4, 22, 1, 8, 13, 53, 12, 35 };
	int n{ 11 };

	quickSort(arr, 0, n - 1);
	cout << "QuickSorted: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
