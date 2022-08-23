#include <stdio.h>
#include <string.h>

int main()
{

  int num;
  scanf("%d", &num);

  int arr[num];

  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }

  int max_num = arr[0];

  for (int i = 1; i < num; i++)
  {
    if (arr[i] > max_num)
      max_num = arr[i];
  }
  int total = 0;
  for (int i = 0; i < num; i++)
  {
    total = (total + (max_num - arr[i]));
  }

  printf("%d\n", total);

  return 0;
}
