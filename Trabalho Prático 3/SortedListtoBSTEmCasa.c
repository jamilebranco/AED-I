/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* sortedListToBST(struct ListNode* head) {
    /* Lista vazia */
    if (!head) {
        return NULL;
    }
    /* Ponteiros para o meio */
    struct ListNode *meio = head;
    struct ListNode *rap = head;
    struct ListNode *ant = NULL;

    /* Acha o meio */
    while (rap && rap -> next) {
        ant = meio;
        meio = meio -> next;
        rap = rap -> next -> next;
    }
    /* Cria raíz */
    struct TreeNode* raiz = malloc(sizeof(struct TreeNode));
    raiz -> val = meio -> val;

    /* lado esquerdo */
    if (ant) {
        ant -> next = NULL;
        raiz -> left = sortedListToBST(head);
    } else
        raiz -> left = NULL;

    /* lado direito */
    raiz -> right = sortedListToBST(meio -> next);

    return raiz;
}
