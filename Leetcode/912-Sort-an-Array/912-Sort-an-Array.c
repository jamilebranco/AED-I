/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void qsortSimples(int* v, int l, int r) {
    int i = l, p = v[r];

    if (l >= r) 
        return;

    for (int j = l; j < r; j++) 
        if (v[j] < p) {
            int t = v[i]; 
            v[i] = v[j]; 
            v[j] = t;
            i++;
        }

    int t = v[i];
    v[i] = v[r];
    v[r] = t;

    qsortSimples(v, l, i - 1);
    qsortSimples(v, i + 1, r);
}

int* sortArray(int* nums, int numsSize, int* returnSize) {
    int* res = malloc(sizeof(int) * numsSize);
    
    for (int i = 0; i < numsSize; i++) 
        res[i] = nums[i];

    qsortSimples(res, 0, numsSize - 1);
    *returnSize = numsSize;

    return res;
}