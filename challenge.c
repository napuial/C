#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    if (argc != 3 ) {
        printf("Następnym razem podaj dwa ciągi znaków, a program się wykona :)\n");
        return 0;
    } else {

        char *word_one = argv[1];
        char *word_two = argv[2];
        int word_one_length = strlen(word_one);
        int word_two_length = strlen(word_two);

        bool lengh_check = (word_one_length == word_two_length);

        if(lengh_check) {
            printf("Ciągi znaków są takie same.");
        } else {
            printf("Ciągi znaków są różne.");
        }

        return 0;
    }
}
