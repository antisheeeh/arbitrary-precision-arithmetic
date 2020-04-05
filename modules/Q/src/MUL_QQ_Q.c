/* 
    Author: Epifantsev Egor
    Group: 9305
*/

#include <stdlib.h>
#include "../lib/MUL_QQ_Q.h"
#include "../../../modules/Z/lib/MUL_ZZ_Z.h"
#include "../../../modules/Z/lib/TRANS_N_Z.h" // Нужно юзать только умножение целых придется подключить
#include "../../../modules/Z/lib/TRANS_Z_N.h"

longNumberQ *mulQ(longNumberQ *a, longNumberQ *b)
{
    longNumberQ *res = malloc(sizeof(longNumberQ));

    if(res == NULL) return NULL;

    res->numerator = multyZ(a->numerator,b->numerator);
    res->denominator = transZtoN(multyZ(transNtoZ(a->denominator),transNtoZ(b->denominator)));

    return res;
}