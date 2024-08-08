#include <stdio.h>
#include <string.h>

int main() {
    // Variables
    int a, b;
    float c;
    char y;

    while (1) {
        printf("Enter The Degree in Fahrenheit: ");
        scanf("%d", &a);


        while (getchar() != '\n'); //

        b = a - 32;
        c = b / 1.8;
        printf("%.2f\n", c);

        printf("\nIf you want to exit, press 'q' ... or press any other key to continue: ");
        y = getchar();

        if (y == 'q' || y == 'Q') {
            break;
        }

        /
        while (getchar() != '\n');
    }

    return 0;
}
