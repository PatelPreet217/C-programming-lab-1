#include <stdio.h>

void check_leap_or_nonleap( int year);

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    check_leap_or_nonleap( year );
    return 0;
}

void check_leap_or_nonleap( int year){
    if ( year%400 == 0 ){
        printf("It is a leap year. ");
    }else if (year %100 == 0) {
        printf("It is non-leap year. ");
    }else if ( year%4 == 0 ){
        printf("It is a leap year. ");
    }else {
        printf("It is a non-leap year. ");
    }
    
}
