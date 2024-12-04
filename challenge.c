#include <stdio.h>

int main(void) {

    FILE *file = fopen("plik.txt", "a");

    if (file == NULL) {
        printf("Błąd przy tworzeniu pliku!\n");
        return 1;
    }

    fprintf(file, ":).\n");

    fclose(file);

    printf("Plik został utworzony i zapisano w nim tekst:\n");

    file = fopen("plik.txt", "r");

    if (file == NULL) {
        printf("Błąd przy tworzeniu pliku!\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    file = fopen("plik.txt", "w");

    if (file == NULL) {
        printf("Błąd przy tworzeniu pliku!\n");
        return 1;
    }

    fclose(file);

    printf("Zastąpiono istniejący plik.\n");

    return 0;
}
