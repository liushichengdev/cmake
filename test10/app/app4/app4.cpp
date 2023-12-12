#include "app4.h"
#include "public4.h"

void App4_print(void)
{
    struct public4 s_4;
    s_4.a = 1;
    s_4.b = 2;
    s_4.s_3.a = 3;
    s_4.s_3.b = 4;
    printf("app4: cmake\r\n");
    printf("app4: end\r\n");
}