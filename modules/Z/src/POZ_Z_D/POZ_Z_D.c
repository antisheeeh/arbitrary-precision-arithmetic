/*
    author Valentin Pronin
    group 9305
*/

#include <stdlib.h>
#include "../../../N/lib/number.h"
#include "../../lib/POZ_Z_D/POZ_Z_D.h"

int check_sign(longNumber* number){
    int i;
    if (number->num[number->len-1] > 0) i = 2;
    else if (number->num[number->len-1] < 0) i = 1;    
    else i = 0;
    return i;
}