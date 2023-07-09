#include <stdio.h>
#include <string.h>

int IsPolindrom(char *word) {
    int length = strlen(word);
    int i, j;

    // Son karakter yeni satır karakteri ise, onu sil
    if (word[length - 1] == '\n') {
        word[length - 1] = '\0';
        length--;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return 0; // Polindrom değil
        }
    }

    return 1; // Polindrom
}

int main() {
    char word[100];

    printf("Kelimeyi girin: ");
    fgets(word, sizeof(word), stdin);

    if (IsPolindrom(word)) {
        printf("%s kelimesi polindromdur.\n", word);
    } else {
        printf("%s kelimesi polindrom değildir.\n", word);
    }

    return 0;
}
