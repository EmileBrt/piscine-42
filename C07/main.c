#include <stdio.h>
#include "ft.h"

int main() {
    char *str = "Hello, world! This is a test.";
    char *charset = " ,!.";
    char **result = ft_split(str, charset);

    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);

    return 0;
}
