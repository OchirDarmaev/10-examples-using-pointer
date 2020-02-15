#include <iostream>

using namespace std;

void printM(string msg = "empty")
{
    printf("\n\n%s\n", msg.c_str());
}

void example_1()
{
    printM("Define a pointer variable and init as NULL");
    int *p = nullptr;
    cout << p << " address" << endl;
}

void example_2()
{
    printM("Assigning the address of a variable to a pointer using unary operator (&) which returns the address of that variable.");
    int *p = nullptr;
    int i = 200;
    cout << p << " address" << endl;
    p = &i;
    cout << p << " address" << endl;
    cout << *p << " value" << endl;
}

void example_3()
{
    printM("Accessing the value stored in the address using unary operator (*) which returns the value of the variable located at the address specified by its operand.");
    int *p = nullptr;
    int i = 300;
    cout << i << "  i value" << endl;
    p = &i;
    *p = 303;
    cout << i << "  i value" << endl;
}

void example_4()
{
    printM("Pass-by-Reference with Pointer Arguments");
    const auto square2 = [](int *n) {
        // Explicit de-referencing to get the value pointed-to
        *n *= *n;
    };

    int x = 5;
    square2(&x);
    cout << x;
}
void example_5()
{
    printM("Pass-by-Reference with Reference Argument");
    const auto square2 = [](int &n) {
        n *= n;
    };

    int x = 6;
    square2(x);
    cout << x;
}
void example_6()
{
    printM("Pass-by-Value");
    const auto square2 = [](int n) -> int {
        return n * n;
    };
    int x = 7;
    cout << square2(x);
}

void example_7()
{
    printM("Array Name as Pointer");

    int val[] = {2, 3, 5};
    int *ptr;
    ptr = val;
    printf("%d address of %val[0]\n", &val[0]);
    printf("%d value of val\n", val);
    printf("%d value of ptr \n", ptr);

    printf("Elements of the array are: ");
    printf("%d %d %d", ptr[0], ptr[1], ptr[2]);
}

void example_8()
{
    printM("Pointer arithmetic");
    int val[] = {2, 3, 5};
    int size = sizeof(val) / sizeof(int);

    int *p = val;
    for (int i = 0; i < size; i++)
    {
        cout << "p " << p << endl;
        cout << "*p " << *p << endl;
        p++;
    }
}

void example_9()
{
    printM("Pointers and String literals");

    const char *c = "message";
    printf("%s", c);
}

void example_10()
{
    printM("void pointer");
    const auto increase = [](void *data, int ptr_size) {
        if (ptr_size == sizeof(char))
        {
            char *char_prt = (char *)data;
            (*char_prt)++;
        }
        if (ptr_size == sizeof(int))
        {
            int *int_ptr = (int *)data;
            (*int_ptr)++;
        }
    };

    char c = 't';
    int i = 10;
    printf("%d %c \n", i, c);
    increase(&c, sizeof(char));
    increase(&i, sizeof(int));
    printf("%d %c \n", i, c);
}

int main()
{
    example_1();
    example_2();
    example_3();
    example_4();
    example_5();
    example_6();
    example_7();
    example_8();
    example_9();
    example_10();
}