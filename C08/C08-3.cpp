#include <stdio.h>

int main() {
    int t=0;
    printf("Please enter a grade (0-100): ");
    scanf("%d", &t);
    switch (t / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            if (t >= 0 && t <= 59) {
                printf("Grade: E\n");
            } else {
                printf("Invalid input, please enter a value between 0 and 100.\n");
            }
            break;
    }

    return 0;
}
