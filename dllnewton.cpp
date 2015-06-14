#include "dllnewton.h"
#include <windows.h>

//using namespace intervalarth;

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
    IntervalArithmetic IA;
    int st;
    interval y;
    interval z;

    z.a = 1.0;
    z.b = 1.0;

    y.a = x;
    y.b = x;

    interval sqrt = IA.ISqr(y,st);
    interval cos = IA.ICos(y, st);
    interval add = IA.IAdd(y,z);


    return IA.IAdd(sqrt,IA.IMul(cos,add));
}

interval DLLNEWTONSHARED_EXPORT intervalDF(interval x)
{

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
