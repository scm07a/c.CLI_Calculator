#include <stdio.h>
#include "moha_math.h"
#include "moha_utils.h"

int main()
{
    while (1)
    {
        int num_count, n, choice;
        double values[999];
        printf("\n\n----------Calculator CLI----------\n\n");
        printf("0.Exit\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Prime Checker\n6.Factorial\n7.Even Checker\n8.Odd Checker\n9.Biggest Number\n10.Smallest Number\nChoose Your Operation:");
        scanf("%d", &choice);
        flush_buff();

        if (choice == 0)
            printf("\nExiting Program...");
            break;

        //Addition
        if (choice == 1)
        {
            printf("Enter How Many Numbers You Would Like To Use In The Calculator:");
            scanf("%d", &num_count);
            flush_buff();
            num_count=mem_lim(num_count);
            printf("Enter The Numbers:");
            for (int i = 0; i < num_count; i++){
                scanf("%lf", &values[i]);
                flush_buff();
            }
            printf("%.2lf", addition(values, num_count));
            wait_usr();
        }

        //Subtraction
        else if (choice == 2)
        {
            printf("Enter How Many Numbers You Would Like To Use In The Calculator:");
            scanf("%d", &num_count);
            flush_buff();
            num_count=mem_lim(num_count);
            printf("Enter The Numbers:");
            for (int i = 0; i < num_count; i++){
                scanf("%lf", &values[i]);
                flush_buff();
            }
            printf("%.2lf", subtraction(values, num_count));
            wait_usr();
        }

        //Multiplication
        else if (choice == 3)
        {
            printf("Enter How Many Numbers You Would Like To Use In The Calculator:");
            scanf("%d", &num_count);
            flush_buff();
            num_count=mem_lim(num_count);
            printf("Enter The Numbers:");
            for (int i = 0; i < num_count; i++){
                scanf("%lf", &values[i]);
                flush_buff();
            }
            printf("%.2lf", multiplication(values, num_count));
            wait_usr();
        }

        //Division
        else if (choice == 4)
        {
            printf("Enter How Many Numbers You Would Like To Use In The Calculator:");
            scanf("%d", &num_count);
            flush_buff();
            num_count=mem_lim(num_count);
            int valid = 1;
            printf("Enter The Numbers:");
            for (int i = 0; i < num_count; i++)
            {
                scanf("%lf", &values[i]);
                flush_buff();
                if (i > 0 && values[i] == 0)
                {
                    printf("ERROR! Zero Division Invalid!!\n");
                    valid = 0;
                    break;
                }
            }
            if (valid == 1)
                printf("%.2lf", division(values, num_count));
            wait_usr();
        }

        //Prime Checker
        else if (choice == 5)
        {
            printf("Enter The Number You Want To Check For Prime:");
            scanf("%d", &n);
            flush_buff();
            if (is_prime(n))
                printf("\n%d is Prime.\n", n);
            else
                printf("\n%d is not Prime.\n", n);
            wait_usr();
        }

        //Factorial
        else if (choice == 6)
        {
            printf("Enter The Number You Want To Find The Factorial Of:");
            scanf("%d", &n);
            flush_buff();
            if (n < 0)
                printf("Can't Calculate Factorial Of Negative Number!!!");
            else
                printf("\nFactorial Of %d Is %d\n", n, fact(n));
            wait_usr();
        }

        //Even Checker
        else if (choice == 7)
        {
            printf("Enter How Many Numbers You Would Like To Use In The Calculator:");
            scanf("%d", &num_count);
            flush_buff();
            num_count=mem_lim(num_count);
            printf("Enter The Numbers You Want To Check:");
            for (int i = 0; i < num_count; i++)
            {
                scanf("%lf", &values[i]);
                flush_buff();
            }
            printf("Even Numbers Are:");
            for (int i = 0; i < num_count; i++)
            {
                if (is_even((int)values[i]))
                    printf("[%.2lf] ", values[i]);
            }
            wait_usr();
        }

        //Odd Checker
        else if (choice == 8)
        {
            printf("How Many Numbers You Would Like To Use In The Calculator:");
            scanf("%d",&num_count);
            flush_buff();
            printf("Enter The Numbers You Want To Check:");
            for (int i=0;i<num_count;i++){
            scanf("%lf",&values[i]);
            flush_buff();
            }
            printf("The Odd Numbers Are:");
            for (int i=0;i<num_count;i++){
                if (is_odd((int)values[i]))
                printf("[%.2lf] ",values[i]);
            }
            wait_usr();
        }

        //Max Number
        else if(choice==9){
            printf("How Many Numbers You Would Like To Use In The Calculator:");
            scanf("%d",&num_count);
            printf("Enter The Numbers:");
            for (int i=0;i<num_count;i++){
                scanf("%lf",&values[i]);
                flush_buff();
            }
            printf("The Max Number Is %d",max_element(values,num_count));
            wait_usr();
        }

        //Min Number
        else if (choice==10){
            printf("How Many Numbers You Would Like To Use In The Calculator:");
            scanf("%d",&num_count);
            printf("Enter The Numbers:");
            for (int i=0;i<num_count;i++){
                scanf("%lf",&values[i]);
                flush_buff();
            }
            printf("The Min Number Is %d",min_element(values,num_count));
            wait_usr();
        }

        else
        {
            printf("\nInvalid Input\n");
            wait_usr();

        }
    }
    return 0;
}