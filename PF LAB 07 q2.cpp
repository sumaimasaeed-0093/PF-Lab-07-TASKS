#include <stdio.h>

int main() {
    int num[10];
    int n, i, j, search, count;
    count = 0;

    printf("Value you want to search: ");
    scanf("%d", &search);

    for (i = 0; i < 10; i++) {
        printf("Enter num: ");
        scanf("%d", &num[i]);
    }

    for (j = 0; j < 10; j++) {
        if (num[j] == search) {
            count++;
        }
    }

    if (count == 0) {
        printf("Number not found\n");
    } else {
        printf("This number has occurred %d times\n", count);
    }

    return 0;
}

