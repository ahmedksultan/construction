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

int main() {
    // creating three structs (data: 2017)
    struct city a;
    a.name = "New York";
    a.pop = 8623000;
    struct city b;
    b.name = "Chicago";
    b.pop = 2716000;
    struct city c;
    c.name = "Los Angeles";
    c.pop = 4000000;

    printf("%s\t%d\n", a.name, a.pop);
    printf("%s\t%d\n", b.name, b.pop);
    printf("%s\t%d\n", c.name, c.pop);
}
