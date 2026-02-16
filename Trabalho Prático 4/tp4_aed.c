/*
    524. Longest Word in Dictionary through Deleting
*/

char* findLongestWord(char* s, char** dictionary, int dictionarySize) {
    char *string1 = "";
    int i;

    for (i = 0; i < dictionarySize; i++) {
        char *string2 = dictionary[i];
        int p1 = 0;
        int p2 = 0;

        while (s[p1] != '\0' && string2[p2] != '\0') {
            if (s[p1] == string2[p2])
                p2++;
            p1++;
        }

        if (string2[p2] == '\0') {
            int tamAtual = strlen(string2);
            int tam1 = strlen(string1);

            if (tamAtual > tam1 || (tamAtual == tam1 && strcmp(string2, string1) < 0))
                string1 = string2;
        }
    }

    return string1;
}
