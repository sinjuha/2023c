#include <stdio.h>
struct math
{
    int a, b;
}me;
void main()
{
    me.a = 3, me.b =4;
    printf("%d",me.a+me.b);
}