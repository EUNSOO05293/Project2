#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void fillCD(int arr[], int size, int start, int diff)
{
	int i;
	
	arr[0] = start;

	for (i = 0; i < size; i++)
	{
		arr[i] = arr[i - 1] + diff;

	}
	
}

#define ARR_SIZE 10;

int Assignment01()
{
	int result[10] = { 0 };
	int start = 0;
	int diff = 0;
	
	printf("초기값 등차 입력하세요:");
	scanf("%d %d", &start, &diff);
	
	fillCD(result, 10, start, diff);

	PrintArray(result, ARR_SIZE);


}

void PrintArray(int arr[], int size) 
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main()
{
	return Assignment01();
}
