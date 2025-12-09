#include <stdio.h>
#include <string.h>

typedef struct{
    char vehicle[50];
} Car;

void startEngine(Car* c){
    printf("%s's Car: Engine started!\n", c->vehicle);
}

void accelerate(Car* c){
    printf("%s's Car: Pressing gas pedal...\n", c->vehicle);
}

void brake(Car* c){
    printf("%s's Car: Applying brakes...\n", c->vehicle);
}

int main(){
    Car jane;
    strcpy(jane.vehicle, "Jane");

    Car jack;
    strcpy(jack.vehicle, "Jack");

    startEngine(&jane);
    accelerate(&jane);
    brake(&jane);

    startEngine(&jack);
    accelerate(&jack);
    brake(&jack);

    return 0;
}