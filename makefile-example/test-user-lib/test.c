#include <stdio.h>
#include <libtest.h>

int main(void)
{
    int a = 3;
    int b = 2;
        
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    
    printf("a+b=%d\n", add(a, b));
    printf("a-b=%d\n", sub(a, b));
    return 0;
}
