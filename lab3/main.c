#include <stdio.h>
#include <math.h>
#include <windows.h>

#define _USE_MATH_DEFINES

int main()
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	// Завдання 1: Перетворення метрів у сантиметри і міліметри
	double meters;
	printf("Введіть довжину в метрах: ");
	scanf("%lf", &meters);
	printf("%.2lf метрів = %.2lf сантиметрів = %.2lf міліметрів\n\n", meters, meters * 100, meters * 1000);

	// Завдання 2: Обчислення площі круга
	double radius;
	printf("Введіть радіус кола: ");
	scanf("%lf", &radius);
	double area = 3.14 * radius * radius;
	printf("Площа круга: %.2lf\n\n", area);

	// Завдання 3: Перетворення секунд у години, хвилини і секунди
	int total_seconds;
	printf("Введіть кількість секунд: ");
	scanf("%d", &total_seconds);
	int hours = total_seconds / 3600;
	int minutes = (total_seconds % 3600) / 60;
	int seconds = total_seconds % 60;
	printf("%d секунд = %d годин %d хвилин %d секунд\n\n", total_seconds, hours, minutes, seconds);

	// Завдання 4: Перевірка на парність числа
	int number;
	printf("Введіть ціле число: ");
	scanf("%d", &number);
	if (number % 2 == 0)
		printf("Число %d є парним\n\n", number);
	else
		printf("Число %d є непарним\n\n", number);

	// Завдання 5: Перетворення малої літери у велику
	char lower;
	printf("Введіть малу літеру англійського алфавіту: ");
	scanf(" %c", &lower);
	if (lower >= 'a' && lower <= 'z')
	{
		char upper = lower - ('a' - 'A');
		printf("Велика літера: %c\n", upper);
	}
	else
	{
		printf("Помилка: введено не малу літеру\n");
	}

	return 0;
}
