//
//  main.c
//  struct1
//
//  Created by Beatriz Vilalta on 15/06/20.
//  Copyright © 2020 Beatriz Vilalta. All rights reserved.
//

#include <stdio.h>

int main() {

    struct Apointment{

        int hour, minute;
        int day, month, year;
        char description[500];

    };

    struct Apointment apointment;

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

    printf("Type a description: ");
    fseek(stdin, 0, SEEK_END);
    gets(apointment.description);


    printf("Date: ");
    printf("%d / %d / %d\n", apointment.day, apointment.month, apointment.year);
    printf("Time: ");
    printf("%d:%d\n", apointment.hour, apointment.minute);
    printf("Description: %s\n", apointment.description);



    return 0;
}
