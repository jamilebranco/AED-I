/*
 *  524. Longest Word in Dictionary through Deleting
 */

char* findLongestWord(char* s, char** dictionary, int dictionarySize) {
    
    /* Melhor palavra (inicializa vazia)*/
    char *string1 = "";
    int i;

    /* Percorre o dicionário */
    for (i = 0; i < dictionarySize; i++) {
        /* Palavra i */
        char *string2 = dictionary[i];

        /* Percorrem as strings */
        int p1 = 0;
        int p2 = 0;

        /* Verifica se  string2 aparece em s */
        while (s[p1] != '\0' && string2[p2] != '\0') {
            if (s[p1] == string2[p2]) {
                p2++;
            }
            p1++;
        }

        /* Se chegar até o final, válida */
        if (string2[p2] == '\0') {
            int tamAtual = strlen(string2);
            int tam1 = strlen(string1);

            /* Troca se maior ou lexicograficamente menor */
            if (tamAtual > tam1 || (tamAtual == tam1 && strcmp(string2, string1) < 0)) {
                string1 = string2;
            }
        }
    }

    /* Retorna a melhor string */
    return string1;
}
