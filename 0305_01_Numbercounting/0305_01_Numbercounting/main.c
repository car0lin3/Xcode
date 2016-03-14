//
//  main.c
//  0305_01_Numbercounting
//
//  Created by Gyuwon Lee on 3/5/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>

int checkNumber(int number);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a, b, c;
    
    printf("Give me three numbers between 100-999.\n");
    while(1){
        printf("A: \n");
        scanf("%d", &a);
        if(checkNumber(a)==0){
            break;
        }
    }
    while(1){
        printf("B: \n");
        scanf("%d", &b);
        if(checkNumber(b)==0){
            break;
        }
    }
    while(1){
        printf("C: \n");
        scanf("%d", &c);
        if(checkNumber(c)==0){
            break;
        }
    }
    
    int product=a*b*c;
    
    printf("A*B*C=%d\n", product);
    
    
    
    return 0;
}

int checkNumber(int number){
    if (number < 100 || number> 1000){
        printf("The number's out of range. Try again.\n");
        return 1;
    }
    else
        return 0;
}