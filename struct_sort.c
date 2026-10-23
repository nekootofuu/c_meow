#include <stdio.h>
#include <stdlib.h>

typedef struct { int x, y ;} Point;
static int cmp_point(const void *pa, const void *pb){
    const Point *a = (const void *)pa;
    const Point *b = (const void *)pb;
    if (a->x != b->x)
    return ((a->x > b->x) - (a->x < b->x)); //(a->x > b->x)条件成立时执行
    return ((a->y > b->y) - (a->y < b->y));
}

int main(){
    Point v[] = { { 2, 1 }, { 1, 5 }, { 2, 0 }, { 1, 2 } };
    size_t n = sizeof v / sizeof v[0];
    qsort(v, n, sizeof v[0], cmp_point);
    for (size_t i = 0; i < n; i++){
        printf("(%d,%d)\n", v[i].x, v[i].y);
    }
}