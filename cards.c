/*  Program to evaluate face values.
 Released under the Vegas Public License.
 (c)2014 The College Blackjack Team. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
     char card_name[3];
    puts("Enter the card name:  ");
    scanf("%2s", card_name);

    int val = 0;
    if (card_name[0] == 'K')
    {
        val = 10;
    } else if (card_name[0] == 'Q') {
        val = 10;
    }else if (card_name[0] == 'J' ) { 
        val = 10;
    }else if (card_name[0] == 'A'){
        val = 11;
    }else { val = atoi(card_name);
    }

    /* Code checks if the value is 3 to 6 inclusive */

    if ((val >= 3) && (val <= 6)) {
        puts("Count has gone up");

    /* Otherwise checks if the card is 10, J, Q, or K */

    }else if (val == 10 || val == 'J' || val == 'Q' || val == 'K') {
        puts("Count has gone down");
    }
    return 0;
}
