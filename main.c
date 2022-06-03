// Flight booking site:
// 1) airlines
// 2) price ticket according to seat
// 3) pilot details
// 4) bill
// 5) City selection

#include <stdio.h>
#include <string.h>
#include <math.h>
// #include <conio.h>

struct costomerps
{ // Costomer personal details
    char name[50];
    int age;
    char email[100];
};



int cities(int allcity, int allcity2)
{ // Cities Data prices
    int delhi, mumbai, kolkata, indore, goa, ahemdabad;
    delhi = 300;
    mumbai = 500;
    kolkata = 350;
    indore = 290;
    goa = 600;
    ahemdabad = 430;

    if (allcity == 1)
    {
        printf("\nDelhi : %d\n\n", delhi);
    }

    else if (allcity == 2)
    {
        printf("\nMumbai : %d\n\n", mumbai);
    }
    else if (allcity == 3)
    {
        printf("Kolkata : %d\n\n", kolkata);
    }
    else if (allcity == 4)
    {
        printf("\nIndore : %d\n", indore);
    }
    else if (allcity == 5)
    {
        printf("\nGoa : %d\n\n", goa);
    }
    else if (allcity == 6)
    {
        printf("\nAhemdabad : %d\n\n", ahemdabad);
    }
    else
    {
        printf("Wrong input, Try again");
    }

    if (allcity2 == 1)
    {
        printf("\nDelhi : %d\n\n", delhi);
    }

    else if (allcity2 == 2)
    {
        printf("\nMumbai : %d\n\n", mumbai);
    }
    else if (allcity2 == 3)
    {
        printf("\nKolkata : %d\n\n", kolkata);
    }
    else if (allcity2 == 4)
    {
        printf("\nIndore : %d\n\n", indore);
    }
    else if (allcity2 == 5)
    {
        printf("\nGoa : %d\n\n", goa);
    }
    else if (allcity2 == 6)
    {
        printf("\nAhemdabad : %d\n\n", ahemdabad);
    }
    else
    {
        printf("Wrong input, Try again");
    }
}

int airlines(int airname)
{ // Airlines charges
    int indigo = 600, airindia = 700, vistara = 900, spicejet = 300;

    if (airname == 1)
    {
        printf("You've chosen Indigo: %d\n", indigo);
    }
    else if (airname == 2)
    {
        printf("You've chosen airindia: %d\n", airindia);
    }
    else if (airname == 3)
    {
        printf("You've chosen vistara: %d\n", vistara);
    }
    else if (airname == 4)
    {
        printf("You've chosen spicejet: %d\n", spicejet);
    }
}

float citiesbill(int citynum, int citynum2){
    if (citynum == 1 && citynum2 == 4)
    {
        printf("Delhi to Indore"); 
        
    }
}
int flightstime(int citynum, int citynum2, int airline) // Flights timing selection
{
    int indigo, airindia, vistara, spicejet;

// Indigo airlines timing
    if (citynum == 1 && citynum2 == 4 && airline == 1)
    {
        printf("\nYou've choosen Delhi to indore on Indigo: \n1) 2:30 to 3:40PM\n2) 6:25 to 7:45PM :\n");
        scanf("%d", &indigo);

        if (indigo == 1)
        {
            printf("You've choosen 2:30 time");
        }
        if (indigo == 2)
        {
            printf("You've choosen 6:25 time");
        }
    }
    if (citynum == 4 && citynum2 == 1 && airline == 1)
    {
        printf("\nYou've choosen Indore to Delhi on Indigo: \n1) 2:30 to 3:40PM\n2) 6:25 to 7:45PM :\n");
        scanf("%d", &indigo);

        if (indigo == 1)
        {
            printf("You've choosen 2:30 time");
        }
        if (indigo == 2)
        {
            printf("You've choosen 6:25 time");
        }
    }
    if (citynum == 2 && citynum2 == 3 && airline == 1)
    {
        printf("\nYou've choosen Mumbai to Kolkata on Indigo: \n1) 2:30 to 3:40PM\n2) 6:25 to 7:45PM :\n");
        scanf("%d", &indigo);

        if (indigo == 1)
        {
            printf("You've choosen 2:30 time");
        }
        if (indigo == 2)
        {
            printf("You've choosen 6:25 time");
        }
    }
    if (citynum == 3 && citynum2 == 2 && airline == 1)
    {
        printf("\nYou've choosen Kolkata to Mumbai on Indigo: \n1) 2:30 to 3:40PM\n2) 6:25 to 7:45PM :\n");
        scanf("%d", &indigo);

        if (indigo == 1)
        {
            printf("You've choosen 2:30 time");
        }
        if (indigo == 2)
        {
            printf("You've choosen 6:25 time");
        }
    }
    if (citynum == 6 && citynum2 == 3 && airline == 1)
    {
        printf("\nYou've choosen Ahemdabad to Kolkata on Indigo: \n1) 1:30 to 4:40AM\n2) 5:25 to 7:45PM :\n");
        scanf("%d", &indigo);

        if (indigo == 1)
        {
            printf("You've choosen 1:30 time");
        }
        if (indigo == 2)
        {
            printf("You've choosen 5:25 time");
        }
    else {
        printf("Sorry, No flights at this moment");
    }
    }


// airindia airlines timing
    if (citynum == 1 && citynum2 == 4 && airline == 2)
    {
        printf("\nYou've choosen Delhi to indore on Airindia: \n1) 2:30 to 3:40PM\n2) 6:25 to 7:45PM :\n");
        scanf("%d", &airindia);

        if (airindia == 1)
        {
            printf("You've choosen 2:30 time");
        }
        if (airindia == 2)
        {
            printf("You've choosen 6:25 time");
        }
    }
    if (citynum == 4 && citynum2 == 1 && airline == 2)
    {
        printf("\nYou've choosen Indore to Delhi on Airindia: \n1) 2:30 to 3:40PM\n2) 6:25 to 7:45PM :\n");
        scanf("%d", &airindia);

        if (airindia == 1)
        {
            printf("You've choosen 2:30 time");
        }
        if (airindia == 2)
        {
            printf("You've choosen 6:25 time");
        }
    }
    if (citynum == 2 && citynum2 == 3 && airline == 2)
    {
        printf("\nYou've choosen Mumbai to Kolkata on Airindia: \n1) 2:30 to 3:40PM\n2) 6:25 to 7:45PM :\n");
        scanf("%d", &airindia);

        if (airindia == 1)
        {
            printf("You've choosen 2:30 time");
        }
        if (airindia == 2)
        {
            printf("You've choosen 6:25 time");
        }

    else {
        printf("Sorry, No flights at this moment");
    }
    }


// Vistara airlines timing
    if (citynum == 1 && citynum2 == 4 && airline == 3)
    {
        printf("\nYou've choosen Delhi to indore on vistara: \n1) 2:30 to 3:40PM\n2) 6:25 to 7:45PM :\n");
        scanf("%d", &vistara);

        if (vistara == 1)
        {
            printf("You've choosen 2:30 time");
        }
        if (vistara == 2)
        {
            printf("You've choosen 6:25 time");
        }
    }
    if (citynum == 4 && citynum2 == 1 && airline == 3)
    {
        printf("\nYou've choosen Indore to Delhi on vistara: \n1) 2:30 to 3:40PM\n2) 6:25 to 7:45PM :\n");
        scanf("%d", &vistara);

        if (vistara == 1)
        {
            printf("You've choosen 2:30 time");
        }
        if (vistara == 2)
        {
            printf("You've choosen 6:25 time");
        }
    }
    if (citynum == 2 && citynum2 == 3 && airline == 3)
    {
        printf("\nYou've choosen Mumbai to Kolkata on vistara: \n1) 2:30 to 3:40PM\n2) 6:25 to 7:45PM :\n");
        scanf("%d", &vistara);

        if (vistara == 1)
        {
            printf("You've choosen 2:30 time");
        }
        if (vistara == 2)
        {
            printf("You've choosen 6:25 time");
        }

    else {
        printf("Sorry, No flights at this moment");
    }
    }

// Vistara airlines timing
    if (citynum == 1 && citynum2 == 4 && airline == 4){
    printf("\nYou've choosen Delhi to indore on spicejet: \n1) 2:30 to 3:40PM\n");
     if (spicejet == 1)
        {
            printf("You've choosen 2:30 time");
        }
        else{
            printf("Sorry, there are no flights of spice jet");
        }
    }
}
int main()
{
    int citynum, citynum2, citytotal, airline;
    char cityname;
    struct costomerps p1;

    

    printf("\tWelcome to FlightBooker.ans\n");
    printf("Enter your name: ");
    scanf("%s", &p1.name);

    printf("Enter your age: ");
    scanf("%d", &p1.age);

    printf("Enter your email: ");
    scanf("%s", &p1.email);

    printf("\n\nCities code:\n1 - Delhi\n2 - Mumbai\n3 - Kolkata\n4 - Indore\n5 - Goa\n6 - Ahemdabad\nNow enter the Departure City: ");
    scanf("%d", &citynum);

    printf("Now, enter the Destination city: ");
    scanf("%d", &citynum2);
    cities(citynum, citynum2);

    printf("Now< Please choose the airlines: \n1 - Indigo\n2 - Airindia\n3 - Vistara\n4 - Spicejet\nSelect: \n");
    scanf("%d", &airline);
    airlines(airline);

    if (p1.age >= 18 && p1.age <= 85)
    {
        printf("Now see the timings of flights:\n");
        flightstime(citynum, citynum2, airline);

        printf("\nThank you, Your booking is confirmed: \n\tBill\nName: %s\nAge: %d\nEmail: %s\nTraveling Cities: %d %d\nGST 18%\nTo Paid: %f",p1.name, p1.age, p1.email, citynum,  citynum2);
    }
    else
    {
        printf("Not eligible");
    }

    return 0;
}

