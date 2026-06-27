


#include <stdio.h>

struct Product
{
    char ProductName[20];
    int ProductID;
    int Product_Qty;
    float Product_MRP;
    char Product_Size[5];
};

int main()
{
    struct Product p[5] = {
        {"Shirt",   101, 10, 999,  "M"},
        {"Trouser", 102, 20, 1499, "L"},
        {"Pant",    103, 30, 1299, "XL"},
        {"Cargo",   104, 40, 1799, "M"},
        {"TShirt",  105, 50, 699,  "S"}
    };

    int choice;

    do
    {
        printf("\n\t----------- TRENDS INVOICE -----------\n");
        printf("1. Stock Availability\n");
        printf("2. Purchase Items\n");
        printf("3. Checkout & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\n%-10s %-8s %-10s %-10s %-6s\n",
                   "Name", "ID", "Qty", "MRP", "Size");

            for (int i = 0; i < 5; i++)
            {
                printf("%-10s %-8d %-10d %-10.2f %-6s\n",
                       p[i].ProductName,
                       p[i].ProductID,
                       p[i].Product_Qty,
                       p[i].Product_MRP,
                       p[i].Product_Size);
            }
        }

        else if (choice == 2)
        {
            int product_id, quantity;
            int found = 0;

            printf("Enter Product ID: ");
            scanf("%d", &product_id);

            printf("Enter Quantity: ");
            scanf("%d", &quantity);

            for (int i = 0; i < 5; i++)
            {
                if (p[i].ProductID == product_id)
                {
                    found = 1;

                    if (p[i].Product_Qty >= quantity)
                    {
                        float total = quantity * p[i].Product_MRP;
                        p[i].Product_Qty -= quantity;

                        printf("\nPurchase Successful!\n");
                        printf("\t-------------------------------------------\t\n");
                        printf("\t RECIPT OF THE PURCHASE \t\n");
                        printf("\t-------------------------------------------\t\n");
                        printf("Product Name : %s\n", p[i].ProductName);
                        printf("Product ID   : %d\n", p[i].ProductID);
                        printf("Size         : %s\n", p[i].Product_Size);
                        printf("MRP          : %.2f\n", p[i].Product_MRP);
                        printf("Quantity     : %d\n", quantity);
                        printf("Total Amount : %.2f\n", total);
                       
                    }
                    else
                    {
                        printf("Insufficient Stock!\n");
                    }

                    break;
                }
            }

            if (found == 0)
            {
                printf("Invalid Product ID!\n");
            }
        }

        else if (choice == 3)
        {
            printf("\nThank You For Shopping With Us!\n");
        }

        else
        {
            printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}