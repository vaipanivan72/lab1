#include <stdio.h> 
#include <math.h>  

int main() {
    // Оголошуємо змінні
    double a, b, sa, sg;

    // Присвоюємо значення напряму
printf("Enter a: ");
scanf("%lf", &a);

printf("Enter b: ");
scanf("%lf", &b);

    // Розраховуємо результати
    sa   =  (a  +  b)  /  2.0;
   if (a * b < 0) 
    printf("Помилка: неможливо обчислити sg\n");
   
  // Використовуємо printf для виведення вхідних даних та результату
    printf("Вхідні дані:  a  =  %.0f,  b  =  %.0f\n",  a,  b);
    printf("Вихідні дані:  sa  =  %.0f,  sg  =  %.0f\n",  sa,  sg);

    return 0; 
}
