#include <stdio.h>
#include <math.h>
#include <windows.h>

// Прототипи функцій
void task1();
void task2();
void task3();
void task4();
void task5();

int main()
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	task1();
	task2();
	task3();
	task4();
	task5();
	return 0;
}

// Завдання 1: Обчислення ціни зі знижкою
void task1()
{
	double price = 450.0;
	double discount = 15.0;
	double final_price = price * (100.0 - discount) / 100.0;
	printf("\nЦіна зі знижкою: %.1f грн\n", final_price);
}

// Завдання 2: Обчислення віку
void task2()
{
	int birth_year, current_year = 2025;
	printf("\nВведіть рік народження: ");
	scanf("%d", &birth_year);
	printf("Ваш вік: %d років\n", current_year - birth_year);
}

// Завдання 3: Обчислення відстані між точками
void task3()
{
	double x1, y1, x2, y2;
	printf("\nВведіть координати першої точки (x1 y1): ");
	scanf("%lf %lf", &x1, &y1);
	printf("Введіть координати другої точки (x2 y2): ");
	scanf("%lf %lf", &x2, &y2);
	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("Відстань між точками: %.2f\n", distance);
}

// Завдання 4: Обчислення ціни зі знижкою
void task4()
{
	double price, discount;
	printf("\nВведіть вартість товару: ");
	scanf("%lf", &price);
	printf("Введіть відсоток знижки: ");
	scanf("%lf", &discount);
	double final_price = price * (100.0 - discount) / 100.0;
	printf("Кінцева вартість: %.2f грн\n", final_price);
}

// Завдання 5: Сума цифр тризначного числа
void task5()
{
	int num;
	printf("\nВведіть тризначне число: ");
	scanf("%d", &num);
	int sum = (num / 100) + (num / 10 % 10) + (num % 10);
	printf("Сума цифр: %d\n", sum);
}