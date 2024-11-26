#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, delta, x1, x2;
    printf("Hay nhap a: ");
    scanf("%f", &a);
    printf("Hay nhap b: ");
    scanf("%f", &b);
    printf("Hay nhap c: ");
    scanf("%f", &c);
    if (a == 0) {
        printf("Phuong trinh khong phai phuong trinh bac 2\n");
    } else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem: x1 = %.2f, x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    }

    return 0;
}
