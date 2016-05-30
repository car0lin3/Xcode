//
//  main.c
//  0406_pascals triangle
//
//  Created by Gyuwon Lee on 4/7/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int height;
    
    printf("Height?: ");
    scanf("%d", &height);
    
    int array[height-1];
    int count=0;
    
    for(int i=0; i<height; i++){
        for (int j=0; j<=i; j++){
            array[0]=1;
            array[i]=1;
            if(j!=0 && j!=i){
                array[j]=array[j-1]+array[j];
            }
            printf("%d ", array[j]);
        }
        printf("\n");
    }

    return 0;
}