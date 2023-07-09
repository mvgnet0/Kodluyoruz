#include <stdio.h>
#include <string.h>

void ReverseText(char *text) {
    int length = strlen(text);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = text[i];
        text[i] = text[j];
        text[j] = temp;
    }
}

int main() {
    char text[100];

    printf("Metni girin: ");
fgets(text, sizeof(text), stdin);

    ReverseText(text);

    printf("Ters cevrilmis metin: %s\n", text);

    return 0;
}
