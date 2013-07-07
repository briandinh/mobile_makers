//
//  main.c
//  Coolness
//
//  Created by Brian Dinh on 7/2/13.
//  Copyright (c) 2013 Brian Dinh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
//counts backwards fromm 99  by 3
//prints Found one if divisble by 5

{
    int i;
    for (i = 99; i >= 0; i -= 3) {
        
      
        if (i%5==0){
            printf("Found one!\n");
        }
        else  {
         printf("%d\n", i);   
        }
    }
 
    return 0;
}

