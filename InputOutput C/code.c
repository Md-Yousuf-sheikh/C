#include<stdio.h>

int main()
{
    FILE *inputFile = fopen("inpute.txt", "r");
    FILE *outputFile = fopen("output3.txt","a");
    if(inputFile == NULL)
    {
        printf("Not Found!");
        return 0;
    }

    int n;
    fscanf(inputFile, "%d",&n);
    fprintf(outputFile, "%d\n", n);
// file close
    fclose(inputFile);
    fclose(outputFile);
    return 0;

}
