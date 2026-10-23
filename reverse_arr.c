#include <stdio.h>
#include <stdlib.h>

/* ① 就地反转；n < 2 时什么也不做 */
void reverse(int *a, size_t n) {
    /* 在这里写函数体 */
    for (size_t i = 0, j = n; i < j; ++i){
        j--;
        if (i >= j) break;
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
}

/* ② 返回最大元素的指针；n == 0 时返回 NULL */
const int *find_max(const int *a, size_t n) {
    /* 在这里写函数体 */
    if (n == 0)
        return NULL;
    const int *best = &a[0];
    for (size_t i = 1; i < n; i++){
        if (a[i] > *best)
            best = &a[i];
    }
    return best;
}

int main(void) {
    size_t n;
    if (scanf("%zu", &n) != 1) return 0;

    int *a = n ? malloc(n * sizeof *a) : NULL;
    if (n > 0 && !a) return 1;
    for (size_t i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverse(a, n);
    for (size_t i = 0; i < n; i++)
        printf("%d%c", a[i], i + 1 == n ? '\n' : ' ');

    const int *m = find_max(a, n);
    if (m) printf("max=%d index=%td\n", *m, m - a);
    else   printf("max=none index=-1\n");

    free(a);
    return 0;
}
