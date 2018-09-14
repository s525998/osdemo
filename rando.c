#include <stdio.h>

// funtion prototypes
int foo();
void greet (int id);
int bar();
int main (int argc, char*argv[]) {
        greet (96);
        foo();
        return 0;
}

void greet (int id)
{       printf("Greetings ageent %d\n", id);

}
int foo(){
return bar();
}

int bar()
{
        return 24;

}

