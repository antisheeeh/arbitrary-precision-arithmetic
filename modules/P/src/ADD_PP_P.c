#include <stdlib.h>
#include "../lib/ADD_PP_P.h"
#include "../../../modules/Q/lib/ADD_QQ_Q.h"

longNumberP *sumP(longNumberP* a , longNumberP * b)
{
    longNumberP *res = malloc(sizeof(longNumberP));
    int i;

    if(a->degree > b->degree) res->degree = a->degree;
    else res->degree = b->degree;

    res->coefficient = malloc(res->degree * sizeof(longNumberQ*));

    for(i = 0; i < res->degree; i++){
        if(i >= a->degree){
            res->coefficient[i] = b->coefficient[i];
        } else if(i >= b->degree) {
            res->coefficient[i] = a->coefficient[i];
        } else {
            res->coefficient[i] = addQ(a->coefficient[i] , b->coefficient[i]);
        }
    }

    return res;
}