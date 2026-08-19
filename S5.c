#include <stdio.h>

int main()
{
    int cart_items[3] = {0, 2, 3};
    int cart_quantities[3] = {5, 2, 3};
    int shop_prices[5] = {10, 20, 35, 40, 55};

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &cart_items[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &cart_quantities[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &shop_prices[i]);
    }

    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += cart_quantities[i] * shop_prices[cart_items[i]];
    }
    printf("%d", total);

    return 0;
}