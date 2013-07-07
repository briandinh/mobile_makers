//
//  main.c
//  Numbers
//
//  Created by Brian Dinh on 6/24/13.
//  Copyright (c) 2013 Brian Dinh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    long x = 255;
    printf("x is %ld.\n",x);
    printf("In octal, x is %lo.\n", x );
    printf("in hexadecimal, x is %lx.\n", x);
    
    printf("3 * 3 + 5 * 2 = %d\n" , 3*3+5*2);
    printf("11 / 3 = %f\n", 11 / (float) 3);
    printf("The absolute value of -5 is %d\n", abs(-5));
    
    double y = 12345.6789;
    printf("y is %.2f\n", y);
    printf("y is %.2e\n", y);
    
 
    printf("The sine of 1 radian is %.3f\n", sin(1));
    
    return 0;
}

