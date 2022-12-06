#include<stdio.h> 
void quickSort(int list[], int, int);
//main function definition 
int main()
{
	int list[20], size, i;
	printf("Enter size of the list: ");
	scanf_s("%d", &size);
	printf("Enter %d integer values: \n", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &list[i]);
	}
	printf("Array elements before sorting:\n ");
	for (i = 0; i < size; i++)
	{
		printf("%d\t", list[i]);
	}
	quickSort(list, 0, size - 1);
	printf("\nArray elements after sorting:\n ");
	for (i = 0; i < size; i++)
	{
		printf("%d\t", list[i]);
	}
	return 0;
}
void quickSort(int list[], int low, int high)
{
	int pivot, l, h, temp;
	if (low < high)
	{
		pivot = low;
		l = low;
		h = high;
		while (l < h)
		{
			while (list[l] <= list[pivot] && l < high)
			{
				l++;
			}
			while (list[h] > list[pivot])
			{
				h--;
			}
			if (l < h)
			{
				temp = list[l];
				list[l] = list[h];
				list[h] = temp;
			}
		}
		temp = list[pivot];
		list[pivot] = list[h];
		list[h] = temp;
		quickSort(list, low, h - 1); //sort left sub-list 
		quickSort(list, h + 1, high); //sort right sub-list 
	}
}