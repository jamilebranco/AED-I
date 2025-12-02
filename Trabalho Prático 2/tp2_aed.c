/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void reorderList(struct ListNode* head) {

    if (!head || !head->next) 
        return;

    struct ListNode* vet[100000]; 
    int tam = 0;

    struct ListNode* p = head;
    while (p) {
        vet[tam++] = p;
        p = p->next;
    }

    int i = 0;
    int j = tam - 1;

    while (i < j) {
        vet[i]->next = vet[j];
        i++;
        if (i == j) break;
        vet[j]->next = vet[i];
        j--;
    }

    vet[i]->next = NULL;
}