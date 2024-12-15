//C06-00
// #include <unistd.h>
// int main(int argc, char *argv[]) {
//     if(argc > 0) {
//         char *name = argv[0];
//         int i = 0;
//         while (name[i] != '\0') {
//             write(1, &name[i], 1);
//             i++;
//         }
//         write(1, "\n", 1);
//     }
//     return 0;
// }

//C06-01
// #include <unistd.h>
// int main(int argc, char *argv[]) {
//     for(int i = 1; i < argc; i++){
//         char *name = argv[i];
//         int i = 0;
//         while (name[i] != '\0') {
//             write(1, &name[i], 1);
//             i++;
//         }
//         write(1, "\n", 1);
//     }
//     return 0;
// }

// C06-02
// #include <unistd.h>
// int main(int argc, char *argv[]) {
//     for(int j = argc - 1; j > 0; j--){
//         char *name = argv[j];
//         int i = 0;
//         while (name[i] != '\0') {
//             write(1, &name[i], 1);
//             i++;
//         }
//         write(1, "\n", 1);
//     }
//     return 0;
// }

// C06-03 i don't understand
