#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    int i, n;

    printf("Enter number of points: ");
    scanf("%d", &n);

    struct Point points[n];

    for(i = 0; i < n; i++) {
        printf("Enter x and y for point %d: ", i + 1);
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    printf("\nYou entered these points:\n");
    for(i = 0; i < n; i++) {
        printf("Point %d: (%d, %d)\n", i + 1, points[i].x, points[i].y);
    }

    return 0;
}
