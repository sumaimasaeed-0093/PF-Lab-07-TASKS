#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int marks, count, P, F, countp, countf, i;
    countp = 0;
    countf = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter marks: ");
        scanf("%d", &marks);

        if (marks == -1) {
            break;  
        }

        if (marks >= 5 && marks <= 10) {
            pass[countp] = marks;
            countp++;
        } else if (marks >= 0 && marks < 5) {
            fail[countf] = marks;
            countf++;
        } else {
            printf("Invalid input!\n");
            i--;
        }
    }


    P = 0;
    for (i = 0; i < countp; i++) {
        P += pass[i];
    }
    double avgPass = (countp > 0) ? (double)P / countp : 0;

    F = 0;
    for (i = 0; i < countf; i++) {
        F += fail[i];
    }
    double avgFail = (countf > 0) ? (double)F / countf : 0;
    
    printf("\nPassed students marks: ");
    for (i = 0; i < countp; i++) {
        printf("%d ", pass[i]);
    }
    printf("\nAverage pass marks: %.2f\n", avgPass);

    printf("\nFailed students marks: ");
    for (i = 0; i < countf; i++) {
        printf("%d ", fail[i]);
    }
    printf("\nAverage fail marks: %.2f\n", avgFail);

    return 0;
}

