#include<stdio.h>
struct Student
{
    char name[100];
    int roll;
    int marks;

};

int main()
{
  int n;
  scanf("%d",&n);

  for(int i=0; i<n ; i++){
    struct Student a;
    scanf("%s %d %d", &a.name, &a.roll, &a.marks);
    printf("%s %d %d", a.name ,a.roll, a.marks);
  }

    return 0;
}
