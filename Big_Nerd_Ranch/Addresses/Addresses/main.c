//
//  main.c
//  Addresses
//
//  Created by Brian Dinh on 7/2/13.
//  Copyright (c) 2013 Brian Dinh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i =17;
    int *addressOfI = &i;
    printf("i stores its value at %p\n",addressOfI);
    printf("i stores its value at %p\n", &i);
    
    return 0;
}

  