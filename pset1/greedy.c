#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float amount;
    printf("O hai! ");
    //prompt user
    do
    {
        printf("How much change is owed?\n");
        amount = get_float();
    }
    while (amount < 0);

    //convert float to int
    int change = round(amount * 100);
    int quarters = change / 25;
    int dimes = (change % 25) / 10;
    int nickels = ((change % 25) % 10) / 5;
    int pennies = (((change % 25) % 10) % 5);

    printf("%i\n", quarters + dimes + nickels + pennies);
}