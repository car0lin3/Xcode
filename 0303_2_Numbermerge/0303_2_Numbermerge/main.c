//
//  main.c
//  0303_2_Numbermerge
//
//  Created by Gyuwon Lee on 3/3/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void dissectNumbers(int number);

int main(int argc, const char * argv[]) {
    unsigned int number=0;
    
    printf("Give me a number.\n");
    scanf("%d", &number);
    
    dissectNumbers(number);
    return 0;
}

void dissectNumbers(int number){
    
    int cipher=0;
    int sum=0;
    
    if(number<10){
        printf("FINISHED.\n");
        return;
    }
    
    while(number>pow(10,cipher)){
        cipher++;
    }//find the cipher
    
    int array[cipher];
    cipher--;
    
    printf("Number: %d, Cipher: %d\n", number, cipher);
    
    for (int i=0; i<cipher+1; i++)
        array[i]=0;
    // {0, 0, 0, 0} for example
    
    int tempNumber=number;
    int tempCipher=cipher;
    
    for (int j=0; j<cipher+1; j++){
        while( array[j]*pow(10, tempCipher) < tempNumber){
            array[j]++;
        }
        array[j]--;
        tempNumber= tempNumber-array[j]*pow(10, tempCipher);
        tempCipher--;
    }
    array[cipher]++;
    
    for(int i=0; i<cipher+1; i++){
        sum=sum+array[i];
    }
    
    printf("Sum: %d\n", sum);
    number=sum;
    
    dissectNumbers(number);

    return;
}