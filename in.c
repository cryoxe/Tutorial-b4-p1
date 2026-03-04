#include <stdio.h>

int main()
{
    unsigned char code[] = { 76, 70,  75, 77, 117, 30, 81, 82, 69,
                             88, 117, 72, 88, 75,  68, 73, 66, 87 };
    for (int i = 0; i < 18; i++)
    {
        code[i] = code[i] ^ 42;
    }

    printf("%s\n", code);
}
