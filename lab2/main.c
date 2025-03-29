#include <stdio.h>
#include <windows.h>

int main()
{
   SetConsoleOutputCP(65001);
   SetConsoleCP(65001);

   // 1. Вивести "Hello"
   printf("Hello\n");

   // 2. Оголосити int = 10 і вивести
   int num = 10;
   printf("%d\n", num);

   // 3. Оголосити float = 3.14 і вивести з 2 знаками після коми
   float pi = 3.14;
   printf("%.2f\n", pi);

   // 4. Додати 5 і 7 та вивести результат
   int sum = 5 + 7;
   printf("%d\n", sum);

   // 5. Вивести "Hello" і "World" з табуляцією
   printf("Hello\tWorld\n");

   // 6. Вивести float з шириною 8 і 3 знаками після коми
   float num2 = 12.3456;
   printf("%8.3f\n", num2);

   // 7. Додати 3.5 і 2.7 та вивести результат
   float sum2 = 3.5 + 2.7;
   printf("%.2f\n", sum2);

   // 8. Конвертація температури з Цельсія у Фаренгейт
   float celsius = 25.0;
   float fahrenheit = celsius * 9 / 5 + 32;
   printf("%.2f C = %.2f F\n", celsius, fahrenheit);

   // 9. Перевірка на парність числа
   int number = 4;
   if (number % 2 == 0)
   {
      printf("Парне\n");
   }
   else
   {
      printf("Непарне\n");
   }

   // 10. Порівняти два числа і вивести більше
   int a = 15, b = 20;
   printf("%d\n", (a > b) ? a : b);

   return 0;
}
