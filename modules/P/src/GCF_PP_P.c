#include "../lib/GCF_PP_P.h"
#include "../lib/DIV_PP_P.h"
#include "../lib/FAC_P_Q.h"
#include "../utils/lib/input.h"
#include <stdio.h>

#include "../lib/MOD_PP_P.h"

longNumberP* gcfP(longNumberP* a, longNumberP* b) {
    longNumberP* temp;

    while((b->degree == 0 && b->coefficient[0]->numerator->num[0] != 0) || (b->degree != 0)) {
        temp = b;
        b = modP(a, b);
        a = temp;
    }
    
    return divP(a, facP(a));
}