#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int  id;
    char name[16];
    int  score;
} Student;

/* ① 分数降序；同分按 id 升序；只返回符号，不写 a - b */
static int cmp_student(const void *pa, const void *pb) {
    /* 在这里写函数体 */
    const Student *a = (const void *)pa;
    const Student *b = (const void *)pb;
    if (a->score != b->score){
        return ((a->score < b->score) - (a->score > b->score));
    }
    return ((a->id > b->id) - (a->id < b->id));
}

/* ② 平均分；n == 0 返回 0.0 */
static double average(const Student *v, size_t n) {
    /* 在这里写函数体 */
    long long sum = 0;
    if (n == 0){
        return 0.0;
    }else{
        for (size_t i = 0; i < n; i++){
            sum += v[i].score;
        }
        return ((double)sum / (double)n);
    }
}

int main(void) {
    size_t n;
    if (scanf("%zu", &n) != 1) return 0;

    Student *v = n ? malloc(n * sizeof *v) : NULL;
    if (n > 0 && !v) return 1;
    for (size_t i = 0; i < n; i++)
        scanf("%d %15s %d", &v[i].id, v[i].name, &v[i].score);

    qsort(v, n, sizeof v[0], cmp_student);
    for (size_t i = 0; i < n; i++)
        printf("%d %s %d\n", v[i].id, v[i].name, v[i].score);
    printf("avg=%.1f\n", average(v, n));

    free(v);
    return 0;
}
