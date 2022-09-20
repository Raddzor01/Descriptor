#include "../inc/minilibmx.h"

int main(int argc, char *argv[]) {
    if (argc != 5)
        mx_printerr("usage: ./part_of_the_matrix [x] [oper] [y] [z]\n", 0); // case error 0 - usage error
    t_values *values = malloc(sizeof(t_values) * 3);
    values = mx_init(values, argv);
    char *operation = mx_strtrim(argv[2]);
    int oper_size = mx_strlen(operation);
    mx_check_err(argv, values, operation, oper_size);
    mx_processing(values, operation);
    if (values[0].is_negative)  
        values[0].operand--;
    if (values[1].is_negative)  
        values[1].operand--;
    if (values[2].is_negative)  
        values[2].operand--;
    free(values[0].operand);
    values[0].operand = NULL;
    free(values[1].operand);
    values[1].operand = NULL;
    free(values[2].operand);
    values[2].operand = NULL;
    free(operation);
    operation = NULL;
    free(values);
    values = NULL;
    return 0;
}
