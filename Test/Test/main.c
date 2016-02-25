//
//  main.c
//  Test
//
//  Created by Gyuwon Lee on 2/25/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int number;
    int result=0;
    printf("Give me a number: \n");
    scanf("%d", &number);
    
    for(int i=2; i<number; i++){
        if(number%i == 0){
            printf("%d ", i);
            result=result+i;
        }
    }
    printf("\n");
    
    printf("%d\n", result);
    
    return 0;
}
