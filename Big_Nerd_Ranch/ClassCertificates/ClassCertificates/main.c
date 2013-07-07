//
//  main.c
//  ClassCertificates
//
//  Created by Brian Dinh on 5/22/13.
//  Copyright (c) 2013 Brian Dinh. All rights reserved.
//

#include <stdio.h>

void congratulateStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days.\n", student, course, numDays);
}

int main(int argc, const char * argv[])
{
    congratulateStudent("Mark", "Cocoa", 5);
    congratulateStudent("Bo", "Objective-C", 2);
    congratulateStudent("Ted", "iOs", 5);
    
    return 0;
    

}

