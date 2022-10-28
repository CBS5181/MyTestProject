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

<<<<<<< main
int divide(int a, int b)
{
    return a / b;
=======
int test()
{
    assert(multiply(2, 2) == 4);
    assert(multiply(-3, 2) == 6);
>>>>>>> Add tests for multiply function.
}

int main()
{
    printf("Hey, Little Peter!");
    test();
    return 0;
}