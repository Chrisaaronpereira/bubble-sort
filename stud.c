# disp-first-n-number
#include <stdio.h>

int main() {
    int total, n, i;
    char students[100][50];

    printf("Enter the total number of students: ");
    scanf("%d", &total);

    printf("Enter the names of students:\n");
    for (i = 0; i < total; i++) {
        scanf("%s", students[i]);
    }

    printf("Enter n (number of students to display): ");
    scanf("%d", &n);

    if (n > total) {
        n = total;
    }

    printf("\nFirst %d students are:\n", n);
    for (i = 0; i < n; i++) {
        printf("%s\n", students[i]);
    }

    return 0;
}
