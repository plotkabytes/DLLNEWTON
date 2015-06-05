#include "dllnewton.h"
#include <windows.h>

long double DLLNEWTONSHARED_EXPORT f(long double x)
{
    return x*x-2;
}

long double DLLNEWTONSHARED_EXPORT df(long double x)
{
    return 2*x;
}

/*
interval DLLNEWTONSHARED_EXPORT intervalF(long double x)
{
    interval y;
    y = x;                       // Use interval arithmetic
    return IntervalArithmetic::ISqr(y,0) + IntervalArithmetic::DIMul(IntervalArithmetic::IAdd(y,1.0),cos(y));

}
interval DLLNEWTONSHARED_EXPORT intervalDF(interval& x)
{
    return (1.0 / (2.0 * sqrt(x)) + cos(x) - (x+1.0) * sin(x));
}
*/

extern "C" DLLNEWTONSHARED_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}
