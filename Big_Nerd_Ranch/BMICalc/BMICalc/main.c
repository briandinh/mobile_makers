//
//  main.c
//  BMICalc
//
//  Created by Brian Dinh on 7/6/13.
//  Copyright (c) 2013 Brian Dinh. All rights reserved.
//

#include <stdio.h>

//Here is the declaration of the type Person
typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person p)
{
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}

int main(int argc, const char * argv[])
{

    Person person;
    person.weightInKilos = 96;
    person.heightInMeters = 1.8;
    float bmi =bodyMassIndex(person);
    printf("person has a BMI of %.2f\n", bmi);
    return 0;
}

