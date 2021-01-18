#include <stdio.h>
#include <string.h>
#include <conio.h>



struct order{
    char name[20];
    int order_no;
    int no_of_items;
    int price;
}arr[5000];
int no_of_order = 0, no_of_served = 0;

int order ()
{
    int n, item_no, quantity;
    printf ("Please enter your name: ");
    gets (arr[no_of_order].name);
    arr[no_of_order].order_no = 1+no_of_order;
    items();
    arr[no_of_order].no_of_items = n;
    arr[no_of_order].price = 0;
    arr[no_of_order].no_of_items = 0;

    level:
    printf ("How many items you want to order?: \n");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter chosen item no: \n");
        scanf ("%d", &item_no);
        getchar();
        switch(item_no){
    case 20 : {
        printf ("Sandwich\n Please choose a size: 1.Small 2.Medium 3.Large\n");
        int i;
        scanf ("%d",&i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d",&quantity);
        getchar();
        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (100*quantity);

        else if (i==2) arr[no_of_order].price += (150*quantity);

        else arr[no_of_order].price += (200*quantity);
        break;
    }
    case 21 : {
        printf ("French Fries\n Please choose a size: 1.Small 2.Medium 3.Large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantity);
        getchar();

        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (75*quantity);

        else if (i==2) arr[no_of_order].price += (100*quantity);

        else arr[no_of_order].price += (125*quantity);
        break;
    }
    case 22 :{
        printf ("Veg Cheese Pizza\n Please choose a size: 1.Small 2.Medium 3.Large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantity);
        getchar();

        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (200*quantity);

        else if (i==2) arr[no_of_order].price += (275*quantity);

        else  arr[no_of_order].price += (350*quantity);

        break;
    }
    case 23 :{
        printf ("Veg Fried Rice\n Please choose a size: 1.Small 2.Medium 3.Large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantity);
        getchar();

        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (200*quantity);

        else if (i==2) arr[no_of_order].price += (250*quantity);

        else  arr[no_of_order].price += (300*quantity);

        break;
    }
    case 24 :{
        printf ("Burnt Garlic Noodles\n Please choose a size: 1.Small 2.Medium 3.Large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantity);
        getchar();

        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (230*quantity);

        else if (i==2) arr[no_of_order].price += (290*quantity);

        else  arr[no_of_order].price += (350*quantity);

        break;
    }
    case 25 :{
        printf ("Caesar Salad\n Please choose a size: 1.Small 2.Medium 3.Large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantity);
        getchar();

        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (220*quantity);

        else if (i==2) arr[no_of_order].price += (270*quantity);

        else arr[no_of_order].price += (320*quantity);

        break;
    }
    case 26 :{
        printf ("Chocolate Pastry\n Please choose a size: 1.Small 2.Medium 3.Large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantity);
        getchar();

        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (80*quantity);

        else if (i==2)arr[no_of_order].price += (120*quantity);

        else arr[no_of_order].price += (160*quantity);

        break;
    }
    case 27 : {
        printf ("Coffee\n Please choose a size : 1.Small 2.Medium 3.Large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantity);
        getchar();

        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (105*quantity);

        else if (i==2) arr[no_of_order].price += (155*quantity);

        else arr[no_of_order].price += (205*quantity);

        break;
    }
    case 28 : {
        printf ("Iced Tea\n Please choose a size: 1.Small 2.Medium 3.Large\n");
        int i;
        scanf("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantity);
        getchar();

        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (75*quantity);

        else if (i==2) arr[no_of_order].price += (100*quantity);

        else arr[no_of_order].price += (125*quantity);
        break;
    }
    case 29 : {
        printf ("Chocolate Cake\n Please choose a size: 1.Small 2.Medium 3.Large\n");
        int i;
        scanf("%d",&i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantity);
        getchar();

        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (200*quantity);

        else if (i==2) arr[no_of_order].price += (250*quantity);

        else arr[no_of_order].price += (300*quantity);
        break;
    }
    case 30 :{
        printf ("Berry Milkshake\n Please choose a size: 1.Small 2.Medium 3.Large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantity);
        getchar();

        arr[no_of_order].no_of_items += quantity;

        if (i==1) arr[no_of_order].price += (150*quantity);

        else if (i==2) arr[no_of_order].price += (200*quantity);

        else arr[no_of_order].price += (250*quantity);
        break;
    }
    default : {
        printf ("Wrong selection, please try again\n");
        n++;
    }
        }
    }
    int temp;
    printf ("Do you want to order anything else?(1.yes/2.no)\n ");
    scanf("%d", &temp);
    if (temp == 1 )
        goto level;
    printf ("\nNumber of items ordered: %d\n", arr[no_of_order].no_of_items);
    printf ("\nThank you %s for choosing us. Your bill is %d rupees.\nPlease wait while the food is being prepared.\n\n",
    arr[no_of_order].name, arr[no_of_order].price);
    no_of_order ++;
}
int receive ()
{
    if (no_of_order==0){
        printf ("Please order first\n");
        return;
    }

    else if (no_of_served == no_of_order) {
        printf ("All orders served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", arr[no_of_served].no_of_items, arr[no_of_served].name);
    printf ("Enjoy your meal!\n\n");
    no_of_served++;
}
int display ()
{
    printf ("Total orders: %d\n", (no_of_order));
    printf ("Total orders served: %d\n", no_of_served);
    printf ("Number of items in the kitchen: %d\n", (no_of_order-no_of_served));
    printf ("Currently preparing food for order no.: %d\n\n", arr[no_of_served].order_no);
}
void items ()
{
    printf("*********************************MENU******************************************\n");

    printf("Item No    |  Dish Name           |       Size       |           Price(Rs.)   |\n");

    printf("[20]-------|-Sandwich-------------|-------S/M/L------|-----------100/150/200--|\n");
    printf("[21]-------|-French Fries---------|-------S/M/L------|-----------75/100/125---|\n");
    printf("[22]-------|-Veg Cheese Pizza-----|-------S/M/L------|-----------200/275/350--|\n");
    printf("[23]-------|-Veg Fried Rice-------|-------S/M/L------|-----------250/300/350--|\n");
    printf("[24]-------|-Burnt Garlic Noodles-|-------S/M/L------|-----------230/290/350--|\n");
    printf("[25]-------|-Caesar Salad---------|-------S/M/L------|-----------220/270/320--|\n");
    printf("[26]-------|-Chocolate Pastry-----|-------S/M/L------|-----------80/120/160---|\n");
    printf("[27]-------|-Coffee---------------|-------S/M/L------|-----------105/155/205--|\n");
    printf("[28]-------|-Iced Tea-------------|-------S/M/L------|-----------75/100/125---|\n");
    printf("[29]-------|-Chocolate Cake-------|-------S/M/L------|-----------200/250/300--|\n");
    printf("[30]-------|-Berry Milkshake------|-------S/M/L------|-----------150/200/250--|\n");
}
int main ()
{
    printf ("\t\t   ***Welcome To Callisto Cafe***\n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

        int item_no;
        scanf ("%d", &item_no);
        getchar ();
        switch (item_no){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                system ("COLOR 4");
                printf ("We are closed, please visit later!\n\n");

                return 0;
            }
        }
    }
}
