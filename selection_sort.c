#include <stdio.h>
#include <stdlib.h>

int main() {
    int sequencia[] = {43, 56, 99, 23, 1, 22, 10, 24};

    int size = sizeof(sequencia);

    printf("Tamanho do array: %d\n", size);
    printf("Primeiro elemento do array: %d\n", sequencia[0]);

    int pos = 0;

    while (pos < 8) {

        int min_value = sequencia[pos];
        int index_min_value;

        for (int i = pos+1; i < 8; i++) {
        
            if (min_value > sequencia[i]) {
                min_value = sequencia[i];
                index_min_value = i;
            };
        }
    // Depois que achei o menor valor eu preciso incluri em na pos, mas eu não posso perder o valor inicial que estava aqui
    // Preciso guardar ele em uma variável temporária e colocar ele na posição que eu tirei o min_value
    int replace_value = sequencia[pos];

    sequencia[pos] = min_value;

    sequencia[index_min_value] = replace_value;

    pos++;
    };

    for (int j = 0; j < 8; j++) {
        printf("Elemento ordenado: %d\n", sequencia[j]);
    }
}