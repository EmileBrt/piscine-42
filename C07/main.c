#include <stdio.h>
#include "ft.h"

int main() {
    char *strs[] = {
        "yes",
        "no"
    };
    char *res = ft_strjoin(2, strs, "!");
    printf("res : %s\n", res);
    free(res);
    return 0;
}