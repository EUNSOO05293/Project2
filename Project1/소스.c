#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARR_SIZE 10

// 함수 프로토타입 선언
void fillCD(int arr[], int size, int start, int diff);
void PrintArray(int arr[], int size);

void fillCD(int arr[], int size, int start, int diff)
{
	int i;
	arr[0] = start;

	for (i = 1; i < size; i++)
	{
		arr[i] = arr[i - 1] + diff;
	}
}

int Assignment01()
{
	int result[ARR_SIZE] = { 0 };
	int start = 0;
	int diff = 0;

	printf("초기값과 차이를 입력하세요: ");
	scanf("%d %d", &start, &diff);

	fillCD(result, ARR_SIZE, start, diff);
	PrintArray(result, ARR_SIZE);

	return 0;
}

void PrintArray(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	return Assignment01();
}
