#include <stdio.h>
#define PI 3.14159
float calculateArea(float radius) {
    return PI * radius * radius;
}

int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);

    float area = calculateArea(r);
    printf("Area of the circle = %.2f\n", area);

    return 0;
}
