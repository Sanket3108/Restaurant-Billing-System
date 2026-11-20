#include <stdio.h>

int main()
{
    int choice, qty;
    int total = 0;
    int price = 0;
    int payment;

    do
    {
        printf("\n---Restaurant Menu---\n");
        printf("1. Pizza       - Rs.150\n");
        printf("2. Burger      - Rs.80\n");
        printf("3. Sandwich    - Rs.70\n");
        printf("4. Cold Drink  - Rs.40\n");
        printf("5. Remove Last Item\n");
        printf("6. View Bill & Pay\n\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Quantity: ");
                scanf("%d", &qty);
                price = 150 * qty;
                total += price;
                printf("Added Pizza : Rs.%d\n", price);
                break;

            case 2:
                printf("\nEnter Quantity: ");
                scanf("%d", &qty);
                price = 80 * qty;
                total += price;
                printf("Added Burger : Rs.%d\n", price);
                break;

            case 3:
                printf("\nEnter Quantity: ");
                scanf("%d", &qty);
                price = 70 * qty;
                total += price;
                printf("Added Sandwich : Rs.%d\n", price);
                break;

            case 4:
                printf("\nEnter Quantity: ");
                scanf("%d", &qty);
                price = 40 * qty;
                total += price;
                printf("Added Cold Drink : Rs.%d\n", price);
                break;

            case 5:
                total -= price;

                if(total < 0)
                    total = 0;

                printf("Last Item Removed.\n");
                break;

            case 6:
                printf("\nFinal Bill Amount = Rs.%d\n", total);

                printf("Enter payment amount: Rs.");
                scanf("%d", &payment);

                if(payment == total)
                {
                    printf("Payment Successful!\n");
                    printf("Thank you! Visit Again.\n");
                }
                else if(payment < total)
                {
                    printf("Payment Failed! Insufficient amount.\n");
                    printf("Please complete the payment first.\n");
                }
                else
                {
                    printf("Payment Successful!\n");
                    printf("Return Amount = Rs.%d\n", payment - total);
                    printf("Thank you! Visit Again.\n");
                }

                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice < 6);

    return 0;
}
