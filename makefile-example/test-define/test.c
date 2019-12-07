#include <stdio.h>
#include <test-add.h>
#include <test-sub.h>
int main(void)
{
    int a = 3;
    int b = 2;
       
    printf("a=%d\n", a);
    printf("b=%d\n", b);

#ifdef TEST_ADD    
    printf("a+b=%d\n", add(a, b));
#endif

#if TEST_SUB  
    printf("a-b=%d\n", sub(a, b));
#endif
    return 0;
}
