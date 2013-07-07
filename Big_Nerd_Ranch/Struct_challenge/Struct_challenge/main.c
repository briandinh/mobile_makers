//
//  main.c
//  Struct_challenge
//
//  Created by Brian Dinh on 7/6/13.
//  Copyright (c) 2013 Brian Dinh. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    long secondsSince1970 = time(NULL);
    long secondsPlus4Million = secondsSince1970 + 4000000;
    
    
    struct tm now;
    localtime_r(&secondsPlus4Million, &now);
    printf("The time is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
   
    
    //Program that tells the date in 4 million seconds
    
    printf("The date in 4 million seconds is %d-%d-%d\n", now.tm_mon+1, now.tm_mday, now.tm_year+1900);
    return 0;
}

