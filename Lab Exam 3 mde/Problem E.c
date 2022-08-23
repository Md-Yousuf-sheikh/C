#include <stdio.h>
#include <string.h>

int main() {
    // length = lengthgth // frequent = fre
    int length;
    scanf("%d", &length);

    char word[length];
    scanf("%s", word);

    strlwr(word);

    int fre[27] = {0};

    for (int i = 0; i < length; i++) {
        fre[word[i] - 'a' + 1]++;
    }

    for(int j = 1; j < 27; j++) {
        if (fre[j] == 0) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}
