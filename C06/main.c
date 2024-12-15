#include <unistd.h>

int main(int argc, char *argv[]) {
    for(int j = argc - 1; j > 0; j--){
        char *name = argv[j];
        int i = 0;
        while (name[i] != '\0') {
            write(1, &name[i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    return 0;
}
