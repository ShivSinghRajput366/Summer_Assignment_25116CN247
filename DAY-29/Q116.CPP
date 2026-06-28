#include <stdio.h>

int main()
{
    int id[100], quantity[100];
    float price[100];
    int n, i, choice, searchId;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Product %d\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &id[i]);

        printf("Quantity: ");
        scanf("%d", &quantity[i]);

        printf("Price: ");
        scanf("%f", &price[i]);
    }

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Display Inventory\n");
        printf("2. Search Product\n");
        printf("3. Update Quantity\n");
        printf("4. Calculate Total Inventory Value\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nID\tQuantity\tPrice\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d\t%d\t\t%.2f\n", id[i], quantity[i], price[i]);
                }
                break;

            case 2:
                printf("Enter Product ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        printf("\nProduct Found\n");
                        printf("ID: %d\n", id[i]);
                        printf("Quantity: %d\n", quantity[i]);
                        printf("Price: %.2f\n", price[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Product not found.\n");
                break;

            case 3:
                printf("Enter Product ID: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &quantity[i]);
                        printf("Quantity Updated Successfully.\n");
                        break;
                    }
                }

                if(i == n)
                    printf("Product not found.\n");
                break;

            case 4:
            {
                float total = 0;

                for(i = 0; i < n; i++)
                {
                    total += quantity[i] * price[i];
                }

                printf("Total Inventory Value = %.2f\n", total);
                break;
            }

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}