#include <stdio.h>
#include <stdbool.h>
    int day, month, year, ndays, leapdays;
    bool leapyear;
    int main () {
        //day = 31;
        //month = 12;
        //year = 2010;
printf("Enter DDMMYYYY in this format:");
scanf("%d%d%d",&day,&month,&year);
        ndays = day + 1;
        leapyear = 0;
        printf ("Enter a date in the form day month year: %d %d %d \n", day, month, year);
        if (year % 4 == 0) {
            leapyear = 1;
        }
        if (year % 100 == 0) {
            leapyear = 0;
        }
        if (year % 400 == 0) {
            leapyear = 1;
        }
        if ((leapyear) && (month == 12 || month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 )) {
            leapdays = 31;
        }
        if ((leapyear) && (month == 4 || month == 6 || month == 9 || month == 11 )) {
            leapdays = 30;
        }
        if ((leapyear) && (month == 2 )) {
            leapdays = 29;
        } else if (leapyear == 0) {
            leapdays = 28;
        }
        if ((leapdays == 31) && (day == 31)) {
            ndays = 1;
            month = month + 1;
        }else if ((leapdays == 30) && (day == 30)) {
                    ndays = 1;
                    month = month + 1;

        }else if ((leapdays == 29) && (day == 29)) {
                        ndays = 1;
                     month = month + 1;
        }else if ((leapdays == 28) && (day == 28)) {
                    ndays = 1;
                    month = month + 1;
        }else if ((month == 12) && (day == 31)) {
                   ndays = 1;
                    month = 1;
                   year = year + 1;
        }


        printf ("The date of the next day is: %d/%d/%d\n", ndays, month, year);
    }
