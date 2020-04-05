/*
    author Valentin Pronin
    group 9305
*/

#include "../lib/ADD_ZZ_Z.h"

longNumberZ* sumZ(longNumberZ* a, longNumberZ* b) {
    longNumberN* aN = transZtoN(a);
    longNumberN* bN = transZtoN(b);

    if(a->sign == NEUTRAL) return b;
    if(b->sign == NEUTRAL) return a;

    if(a->sign == PLUS) {
        if(b->sign == PLUS) {
            return transNtoZ(sumN(aN, bN));
        } else if(b->sign == MINUS) {
            if(compare(aN, bN) == GREATER) {
                return transNtoZ(subN(aN, bN));
            } else {
                return changeSign(transNtoZ(subN(bN, aN)));
            }
        }
    } else if(a->sign == MINUS) {
        if(b->sign == MINUS) {
            return changeSign(transNtoZ(sumN(aN, bN)));
        } else if(b->sign == PLUS) {
            if(compare(aN, bN) == LESS) {
                return transNtoZ(subN(bN, aN));
            } else {
                return changeSign(transNtoZ(subN(aN, bN)));
            }
        }
    }
}