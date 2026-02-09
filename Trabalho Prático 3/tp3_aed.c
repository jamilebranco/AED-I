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
    if (!head) {
        return NULL;
    }

    struct ListNode *meio = head;
    struct ListNode *rap = head;
    struct ListNode *ant = NULL;

    while (rap && rap -> next){
        ant = meio;
        meio = meio -> next;
        rap = rap -> next -> next;
    }

    struct TreeNode* raiz = malloc(sizeof(struct TreeNode));
    raiz -> val = meio -> val;

    if (ant) {
        ant -> next = NULL;
        raiz -> left = sortedListToBST(head);
    } else
        raiz -> left = NULL;

    raiz -> right = sortedListToBST(meio -> next);

    return raiz;
}
