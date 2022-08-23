#include<stdio.h>

int main ()
{

    FILE *inputFile; //input
     inputFile = fopen("index.txt","r"); // input
    if(inputFile ==NULL){
        printf("No File Found!\n");
        return 0;
    }


    FILE *outputFile; // write
    outputFile = fopen("output.txt", "w"); // wirte
    while(1)
    {
        char ch = fgetc(inputFile);

        if(ch == EOF) // if ch is end c provide EOF ( End off File )
        {
            break;
        }
        fputc(ch, outputFile);
        printf("%c",ch);
    }



    return 0;

}
