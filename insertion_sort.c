#include <stdio.h>
#include <stdlib.h>

int main() {
    int sequencia[] = {31, 41, 21, 26, 41, 58};

    int size = sizeof(sequencia);

    printf("Tamanho do array: %d\n", size);
    printf("Primeiro elemento do array: %d\n", sequencia[0]);

    for (int j=1; j<6; j++) {
        int chave = sequencia[j];
        int i = j-1;
        while (i >= 0 && chave > sequencia[i]) {
            sequencia[i+1] = sequencia[i];
            i = i-1;
        }
        sequencia[i+1] = chave;
    }

    for (int x=0; x<6; x++) {
        printf("%d\n", sequencia[x]);
    }
}