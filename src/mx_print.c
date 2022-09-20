#include "../inc/minilibmx.h"

void mx_print(char *sign, int i, int j, int k) {
    if (*sign == '+') {
        if (i + j == k)
            mx_print_formula(i, " + ", j, k);
    } else if (*sign == '-') {
        if (i - j == k)
            mx_print_formula(i, " - ", j, k);
    } else if (*sign == '*') {
        if (i * j == k)
            mx_print_formula(i, " * ", j, k);
    } else if (*sign == '/') {
        if (j != 0 && i / j == k)
            mx_print_formula(i, " / ", j, k);
    }
}
