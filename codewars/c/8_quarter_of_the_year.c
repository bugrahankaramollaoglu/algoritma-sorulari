// Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer number.

#include <stdio.h>

/* switch-case
int quarter_of(int month) {
    for (int i = 0; i <= 11; i++) {
        switch (month)
        {
        case 1:
            return 1;
            break;
        case 2:
            return 1;
            break;
        case 3:
            return 1;
            break;
        case 4:
            return 2;
            break;
        case 5:
            return 2;
            break;
        case 6:
            return 2;
            break;
        case 7:
            return 3;
            break;
        case 8:
            return 3;
            break;
        case 9:
            return 3;
            break;
        case 10:
            return 4;
            break;
        case 11:
            return 4;
            break;
        case 12:
            return 4;
            break;     
        }
    }
} */

/* if-elseIf
int quarter_of(int month) {

    if(month == 1 || month == 2 || month == 3)
    {
        return 1;  
    }
    else if(month == 4 || month == 5 || month == 6)
    {
        return 2;  
    }
    else if(month == 7 || month == 8 || month == 9)
    {
        return 3;  
    }
    else if(month == 10 || month == 11 || month == 12)
    {
        return 4;  
    }
    else
    {
        return 0;  
    }
} */

/* smart way in just 3 lines of code
#include<math.h>
int quarter_of(int month) {
  return ceil(month/3.0);
} */

/* int quarter_of(int month) 
{
    return (month-1) / 3 + 1;
} */ 

/* int quarter_of(int month) {
  return 1 * (month > 0 && month <= 3) +
         2 * (month > 3 && month <= 6) +
         3 * (month > 6 && month <= 9) +
         4 * (month > 9 && month <= 12);
} */

