#include <stdio.h>
int main ()
{
    int choice;
    printf("WELCOME TO SWAMINI & SWARA'S CAFE\n");
    printf("1. PERI-PERI MOMOS RS:150\n");
    printf("2. BARBEQUE FRENCH FRIES RS:90\n");
    printf("3. HOT CHOCOLATE RS:60\n");
    printf("4. PINK SAUCE PASTA RS:110\n");
    printf("5. STRAWBERRY CHEESE CAKE RS:200\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: printf("What would you like to have?\n");
        break;
        case 2: printf("Enjoy free dip along with french fries!\n");
        break;
        case 3: printf("Stressed blessed hot chocolate obsessed!\n");
        break;
        case 4: printf("All you need is pasta!\n");
        break;
        case 5: printf("Sending you a virtual slice of cheese cake!\n");
        break;
        default:
        printf("Invalid choices\n");
    }
        return 0;
}