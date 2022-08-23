#include <stdio.h>
int main()
{
    int array_el, rot_time;
    scanf("%d %d", &array_el, &rot_time);
    int array[array_el];

    for (int i = 0; i < array_el; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int j = 1; j <= rot_time; j++)
    {
        int temp = array[0];
        for (int k = 1; k < array_el; k++)
        {
            array[k - 1] = array[k];
        }
        array[array_el - 1] = temp;
    }
    for (int p = 0; p < array_el; p++)
    {
        printf("%d ", array[p]);
    }

    return 0;
}
