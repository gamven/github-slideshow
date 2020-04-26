#include <stdio.h>
#include <stdbool.h>

struct point {
    int x, y;
};

void print_point(struct point arg) {
    printf("arg: x = %d, y = %d\n", arg.x, arg.y);
}

int main(void) {
    /* // comments */
    // comment

    /* boolean type in stdbool.h */
    bool boolean = true;
    if (!boolean) return 1;

    /* mixed declarations and code */
    int sum = 0;
    for (int i = 1; i < 5; i++) {
        sum += i;
    }
    printf("sum: %d\n", sum);

    /* designated initializers */
    struct point pos = { .x = 1, .y = 2 };
    printf("pos: x = %d, y = %d\n", pos.x, pos.y);

    /* compound literals */
    print_point((struct point){ .x = 3, .y = 4 });

    /* relaxed constraints on aggregate and union initialization (non-constant aggregate initializer) */
    int arr[] = { sum };
    printf("arr: %d\n", arr[0]);

    /* trailing comma allowed in enum declaration */
    enum hello {
        HELLO,
        WORLD,
    };
    printf("hello: %d, world: %d\n", HELLO, WORLD);

    return 0;
}