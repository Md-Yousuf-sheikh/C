#include<stdio.h>
int main(){
    int is_space_found = 0;
    int i = 1, lengthe = 0;
    char stringe[1000];
    gets(stringe);
    scanf("%s", stringe);
    if(stringe[0]>='a' && stringe[0]<='z') stringe[0] = stringe[0]-'a'+'A';
        while(i<lengthe){
            if(stringe[i]==' '){
                is_space_found=1;
            }
            else if(stringe[i]>='a' && stringe[i]<='z' && is_space_found){
                stringe[i] = stringe[i]-'a' + 'A';
                is_space_found = 0;
            }
            i++;
        }
        printf("%s\n", stringe);
        return 0;
}
