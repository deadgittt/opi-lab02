#include "vector.h"
#include <inttypes.h>
#include <stdio.h>

int main() {
    struct vector* vec = vector_create();
    for (size_t i = 0; i < 100; ++i) {
        vector_push_back(vec, i * i);
    }
    vector_print(vec, stdout);
    printf("hihihiha");
    return 0;
}
