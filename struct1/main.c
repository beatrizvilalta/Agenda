//
//  main.c
//  struct1
//
//  Created by Beatriz Vilalta on 15/06/20.
//  Copyright © 2020 Beatriz Vilalta. All rights reserved.
//

#include <stdio.h>


int main() {
  
    int hour[3], i;
    
    printf("Type what time your apointment is (hour, minute, second): \n");
    for (i = 0; i < 3; i++){
        if (i > 0){
            printf(":");
        }
        fseek(stdin, 0, SEEK_END);
        scanf(" %d", &hour[i]);
    }
    
    int date[3];
    
    printf("Type the date of your apointment (day, month, year): \n");
    for (i = 0; i < 3; i++){
        if (i > 0){
            printf("/");
        }
        fseek(stdin, 0, SEEK_END);
        scanf(" %d", &date[i]);
       
    }
    
    char description[60];
    
    printf("Add a description: ");
    fseek(stdin, 0, SEEK_END);
    gets(description);
    
    
    printf("Hour: ");
    
    for (i = 0; i < 3; i++){
        
        if (i > 0) {
            printf(":");
        }
        printf(" %d", hour[i]);
    }
    
    printf("\n");
    
    printf("Date: ");
    
    for (i = 0; i < 3; i++) {
        
        if (i > 0) {
            printf("/");
        }
        printf(" %d", date[i]);
    }
    printf("\n");
    printf("Description: %s\n", description);
        
    return 0;
}
