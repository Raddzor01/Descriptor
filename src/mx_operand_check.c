#include "../inc/minilibmx.h"
int mx_operand_check (char *operand, int size_o, int i) {
    char *str = mx_itoa(i);
    bool check = true;
    int str_size = mx_strlen(str);
    for (int j = 0; j < size_o - str_size; j++)
        if (mx_isdigit(operand[j]) && operand[j] != '0') {
            check = false;
            break;
        }
    for (int j = size_o - str_size, temp = 0; j < size_o; j++, temp++)
        if (operand[j] != '?' && operand[j] != str[temp]) {
                check = false;
                break;
            }
    free(str);
    str = NULL;
    if (check) 
        return 1;
    return 0;
}
