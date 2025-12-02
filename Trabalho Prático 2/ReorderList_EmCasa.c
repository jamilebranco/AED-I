/*
====================
143. Reorder List
Verifica se é possível plantar n flores no flowerbed sem quebrar a regra de adjacentes
====================
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void reorderList(struct ListNode* head) {
    // Se a lista é vazia ou só tem um nó, nada para fazer
    if (!head || !head->next) 
        return;

    // Vetor para guardar os ponteiros dos nós
    struct ListNode* vet[100000]; 
    int tam = 0;

    // Percorre e armazena
    struct ListNode* p = head;
    while (p) {
        vet[tam++] = p;
        p = p->next;
    }

    int i = 0;  // inicio
    int j = tam - 1;    // fim

    // Reordena ligando primeiro com último, etc
    while (i < j) {
        vet[i]->next = vet[j];
        i++;
        if (i == j) break;
        vet[j]->next = vet[i];
        j--;
    }
    // Garante que o ultimo nó aponta para null
    vet[i]->next = NULL;
}