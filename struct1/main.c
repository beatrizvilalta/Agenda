//
//  main.c
//  struct1
//
//  Created by Beatriz Vilalta on 15/06/20.
//  Copyright © 2020 Beatriz Vilalta. All rights reserved.
//

#include <stdio.h>

typedef struct{
    
    int hour, minute;
    int day, month, year;
    char description[500];

} Apointment;

Apointment createApointment(){
    
    Apointment apointment;
    
    printf("Add a description: ");
    fseek(stdin, 0, SEEK_END);
    gets(apointment.description);
    
    printf("Enter the date \n");
    printf("Enter the day: ");
    scanf("%d", &apointment.day);
    printf("Enter the month: ");
    scanf("%d", &apointment.month);
    printf("Enter the year: ");
    scanf("%d", &apointment.year);

    printf("Enter the time \n");
    printf("Enter the hour: ");
    scanf("%d", &apointment.hour);
    printf("Enter the minutes: ");
    scanf("%d", &apointment.minute);
    
    return apointment;
}

void printApointment(Apointment apointment){
    printf("Description: %s\n", apointment.description);
    printf("\n");
    printf("Date: ");
    printf("%d / %d / %d\n", apointment.day, apointment.month, apointment.year);
    printf("Time: ");
    printf("%d:%d\n", apointment.hour, apointment.minute);
}

int main() {

    Apointment firstApointment;
    firstApointment = createApointment();
    
    Apointment secondApointment;
    secondApointment = createApointment();
    
    printf("\n");
    printf("Apointments: \n");
    printf("\n");
    printApointment(firstApointment);
    printf("\n");
    printApointment(secondApointment);

    return 0;
}

