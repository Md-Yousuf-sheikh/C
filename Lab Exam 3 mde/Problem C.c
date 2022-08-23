#include<stdio.h>
#include<string.h>

int main() {

	 int number;
	scanf("%d",&number);

	char arry[number];

	 scanf("%s",arry);

	int countr = 0;

    for (int i = 0; i < number; i++){
         if (arry[i] == arry[i+1])
            countr++;
    }


      printf("%d\n",countr);

    return 0;
}
