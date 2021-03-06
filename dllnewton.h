#ifndef DLLNEWTON_H
#define DLLNEWTON_H

#include "dllnewton_global.h"
#include "intervalarithmetic.h"

using namespace intervalarth;

#ifdef __cplusplus
extern "C"
{
#endif

long double DLLNEWTONSHARED_EXPORT  f(long double x);
long double DLLNEWTONSHARED_EXPORT df(long double x);
/*
interval DLLNEWTONSHARED_EXPORT intervalF(long double x);
interval DLLNEWTONSHARED_EXPORT intervalDF(interval x);
*/
#ifdef __cplusplus
}
#endif


#endif // DLLNEWTON_H
