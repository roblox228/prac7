#include <stdio.h>
#include <math.h>
#include <Windows.h>
int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double x1, y1, r1, x2, y2, r2;
    double d;

    printf("Введіть координати та радіус першого кола (x1 y1 r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);

    printf("Введіть координати та радіус другого кола (x2 y2 r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);


    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));


    if (d > r1 + r2 || d < fabs(r1 - r2)) {

        printf("Кількість точок перетину: 0\n");
    } else if (d == 0 && r1 == r2) {

        printf("Кількість точок перетину: -1\n");
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {

        printf("Кількість точок перетину: 1\n");
    } else {

        printf("Кількість точок перетину: 2\n");
    }

    return 0;
}
