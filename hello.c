#include <stdio.h>
#include <assert.h>

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int test()
{
    assert(multiply(2, 2) == 4);
    assert(multiply(-3, 2) == 6);
    assert(add(3, 3) == 6);
    assert(add(-1, 5) == 3);
}

int main()
{
    printf("Hey, Little Peter!");
    test();
    return 0;
}