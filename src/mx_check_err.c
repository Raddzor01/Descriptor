#include "../inc/minilibmx.h"

void mx_check_err(char *argv[], t_values *values,char *operation, int oper_size) {

    if (values[0].size < 1)
        mx_printerr (argv[1], 1); // case error 1 - invalid operand
    if (values[1].size < 1)
        mx_printerr(argv[3], 1);
    if (oper_size != 1)
        mx_printerr(argv[2], 2); // case error 2 - invalid operation
    if (values[2].size < 0)
        mx_printerr(argv[4], 3); // case error 3 - invalid result

    for (int i = 0; i < values[0].size; i++)
        if (values[0].operand[i] != '?' && !mx_isdigit(values[0].operand[i])) {
        	if (values[0].operand[0] != '-')
            		mx_printerr(argv[1], 1); }
    for (int i = 0; i < values[1].size; i++)
        if (values[1].operand[i] != '?' && !mx_isdigit(values[1].operand[i])) {
        	if (values[1].operand[0] != '-')
            		mx_printerr(argv[3], 1); }
        
    if (*operation != '?' && *operation != '+' && *operation != '-' &&
        *operation != '*' && *operation != '/')
        mx_printerr(argv[2], 2);
    for (int i = 0; i < values[2].size; i++)
        if (values[2].operand[i] != '?' && !mx_isdigit(values[2].operand[i])) {
        	if (values[2].operand[0] != '-')
                mx_printerr(argv[4], 1); }
}
