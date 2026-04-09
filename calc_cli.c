    #include "math_moha.h"
    #include <stdio.h>


    int mem_lim(int n) {
    if (n > 999) {
        n = 999;
        printf("\nMaximum Capacity Reached!\n");
        return 999;
    }
    return n;
    }

    int main() {
    while (1) {
        int num_count, n, choice;
        double values[999];
        printf("\n\n----------Calculator CLI----------\n\n");
        // TODO: Remember To Add Odd Checker, Max/Min Number.
        printf("0.Exit\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5."
            "Prime Checker\n6.Factorial\n7.Even Checker\n8.Odd Checker\nChoose "
            "The Following:");
        scanf("%d", &choice);
        if (choice == 0)
        break;

        if (choice == 1) {
        printf("Enter How Many Numbers You Would Like To Use In The Calculator:");
        scanf("%d", &num_count);
        mem_lim(num_count);
        printf("Enter The Numbers:");
        for (int i = 0; i < num_count; i++)
            scanf("%lf", &values[i]);
        printf("%.2lf", addition(values, num_count));
        printf("\n...Press Enter To Continue...");
        getchar();
        getchar();
        getchar();
        } else if (choice == 2) {
        printf("Enter How Many Numbers You Would Like To Use In The Calculator:");
        scanf("%d", &num_count);
        mem_lim(num_count);
        printf("Enter The Numbers:");
        for (int i = 0; i < num_count; i++)
            scanf("%lf", &values[i]);
        printf("%.2lf", subtraction(values, num_count));
        printf("\n...Press Enter To Continue...\n\n");
        getchar();
        getchar();
        getchar();
        } else if (choice == 3) {
        printf("Enter How Many Numbers You Would Like To Use In The Calculator:");
        scanf("%d", &num_count);
        mem_lim(num_count);
        printf("Enter The Numbers:");
        for (int i = 0; i < num_count; i++)
            scanf("%lf", &values[i]);
        printf("%.2lf", multiplication(values, num_count));
        printf("\n...Press Enter To Continue...\n\n");
        getchar();
        getchar();
        getchar();
        } else if (choice == 4) {
        printf("Enter How Many Numbers You Would Like To Use In The Calculator:");
        scanf("%d", &num_count);
        mem_lim(num_count);
        int valid = 1;
        printf("Enter The Numbers:");
        for (int i = 0; i < num_count; i++) {
            scanf("%lf", &values[i]);
            if (i > 0 && values[i] == 0) {
            printf("ERROR! Zero Division Invalid!!\n");
            valid = 0;
            break;
            }
        }
        if (valid = 1)
            printf("%.2lf", division(values, num_count));
        printf("\n...Press Enter To Continue...\n\n");
        getchar();
        getchar();
        getchar();
        } else if (choice == 5) {
        printf("Enter The Number You Want To Check For Prime:");
        scanf("%d", &n);
        if (is_prime(n))
            printf("\n%d is Prime.\n", n);
        else
            printf("\n%d is not Prime.\n", n);
        } else if (choice == 6) {
        printf("Enter The Number You Want To Find The Factorial Of:");
        scanf("%d", &n);
        if (n < 0)
            printf("Can't Calculate Factorial Of Negative Number!!!");
        else
            printf("\nFactorial Of %d Is %d\n", n, fact(n));
        } else if (choice == 7) {
        printf("Enter How Many Numbers You Would Like To Use In The Calculator:");
        scanf("%d", &num_count);
        mem_lim(num_count);
        printf("Enter The Numbers You Want To Check:");
        for (int i = 0; i < num_count; i++) {
            scanf("%lf", &values[i]);
        }
        printf("Even Numbers Are:");
        for (int i = 0; i < num_count; i++) {
            if (is_even(values[i])) {
            printf("%.2lf, ", values[i]);
                }
            }
            } else if (choice == 8) {
                printf("W.I.P");
            continue;
            } else {
            printf("\nInvalid Input....Press Enter To Try Again\n");
            getchar();
            getchar();
                getchar();
            }
        }
        return 0;
        }