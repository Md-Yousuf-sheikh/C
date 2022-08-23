#include <stdio.h>
#include <string.h>
void stringCat(char a[], char b[], char out[])
{
    int A = strlen(a);
    int B = strlen(b);

    for (int i = 0; i < A; i++)
    {
        out[i] = a[i];
    }
    for (int i = 0; i < B; i++)
    {
        out[i + A] = b[i];
    }
}
int main()
{
    char a[101], b[101], out[202];

    gets(a);
    gets(b);

    stringCat(a, b, out);

    printf("%s", out);

    return 0;
}
