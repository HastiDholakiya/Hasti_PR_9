#include <stdio.h>

void main() {

    FILE *evenFile = fopen("even_file.txt", "w");
    FILE *oddFile = fopen("odd_file.txt", "w");
    
    int i;

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files for writing.\n");
    }

    for ( i = 50; i <= 70; i++) {
        if (i % 2 == 0) {

            fprintf(evenFile, "%d, ", i);
        } else {
            fprintf(oddFile, "%d, ", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

        printf("File created and even-odd numbers written successfully in saparate file.\n");

}
