#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char stringe[101];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", stringe);
        int len = strlen(stringe);
        printf("%c", stringe[0]);
        for (int i = 1; i < len; i += 2)
        {
            printf("%c", stringe[i]);
        }
        printf("\n");
    }
    return 0;
}
