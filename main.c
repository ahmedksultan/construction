#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* --- INSTRUCTIONS ---
* Create a struct that has at least 2 data members, one must be a string.
    * You can provide struct prototypes outside of functions.
    * Don't just combine random things, make it meaningful (like food and price, athlete and associated statistic, Pokemon and something about Pokemon ..)

* Write a function that returns an example of your struct when run.
    * This should NOT return the same values every time.
* Write a function that prints out variables of your structs type in a reasonable way.
* Write a function that modifies values of your struct's type.

* Write a main function that tests all these things.
    * Have meaningful output.
* DONT FORGET A MAKEFILE.
--- INSTRUCTIONS --- */

// prototyping struct (name, population)
struct city {char* name; int pop;};

void printCity(struct city ex) {
    printf("The city of %s has a population of %d.\n", ex.name, ex.pop);
}

void modifyCity(struct city* ex, char* newname, int newpop) {
    ex->name = newname;
    ex->pop = newpop;
}

int main() {
    srand(time(NULL));

    // creating five structs (data is from 2017)
    struct city a;
    a.name = "New York";
    a.pop = 8623000;
    struct city b;
    b.name = "Chicago";
    b.pop = 2716000;
    struct city c;
    c.name = "Los Angeles";
    c.pop = 4000000;
    struct city d;
    d.name = "Philadelphia";
    d.pop = 1581000;
    struct city e;
    e.name = "Houston";
    e.pop = 2313000;

    struct city cities[]= {a, b, c, d, e};

    printf("\n");

    int n = 0;
    while (n < 5) {
        struct city cty = cities[rand() % 5];
        printCity(cty);
        n++;
    }
    
    printf("\n");

    printf("Testing the function to modify a city...\nCity before: ");
    struct city cty2 = cities[rand() % 5];
    printCity(cty2);
    printf("Modifying city...\nCity after: ");
    modifyCity(&cty2, "Boston", 685094);
    printCity(cty2);

    printf("\n");
}

