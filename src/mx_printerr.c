#include <unistd.h>
#include <stdlib.h>

int mx_strlen(const char *s);

void mx_printerr(const char *s, int case_err) {
    if (case_err == 0) {
        write(2, s, mx_strlen(s));
        exit(-1);
    } else if (case_err == 1) {
        write(2, "Invalid operand: ", 17);
        write(2, s, mx_strlen(s));
        write(2, "\n", 1);
        exit(-1);
    } else if (case_err == 2) {
        write(2, "Invalid operation: ", 19);
        write(2, s, mx_strlen(s));
        write(2, "\n", 1);
        exit(-1);
    } else {
        write(2, "Invalid result: ", 16);
        write(2, s, mx_strlen(s));
        write(2, "\n", 1);
        exit(-1);
    }
}
