#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	// Завдання 1
	int a = 5, b = 2;
	float result = (float)a / b;
	printf("Результат ділення: %.2f\n", result);

	// Завдання 2
	const float PI = 3.14;
	printf("Значення константи PI: %.2f\n", PI);

	// Завдання 3
	char symbol = 'A';
	printf("Символ: %c, його ASCII-код: %d\n", symbol, symbol);

	// Завдання 4
	int intNumber;
	float floatNumber;
	printf("Введіть ціле та дробове число: ");
	scanf("%d %f", &intNumber, &floatNumber);
	printf("Сума: %.2f\n", intNumber + floatNumber);

	// Завдання 5
	char inputChar;
	printf("Введіть символ: ");
	scanf(" %c", &inputChar);
	printf("Наступний символ: %c\n", inputChar + 1);

	return 0;
}
