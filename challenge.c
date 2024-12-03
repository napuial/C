#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3 ) {
        printf("Następnym razem podaj dwa ciągi znaków, a program się wykona :)\n");
        return 0;
    } else {
        char *word = argv[1];
        char sign = argv[2][0];
        char *original_word = word;
        while (*word) {
            printf("Porównywanie: %c oraz %c\n", *word, sign);
            if (*word == sign) {
                printf("Ciąg znaków %s zawiera znak %c\n", original_word, sign);
                return 0;
            }
            word++;
        }
        printf("Ciąg %s nie zawiera znaku %c\n", original_word, sign);
        return 0;
    }
}
