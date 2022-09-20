#include "../inc/minilibmx.h"

t_values *mx_init(t_values *values, char *argv[]) {
    values[0].operand = mx_strtrim(argv[1]);
    values[1].operand = mx_strtrim(argv[3]);
    values[2].operand = mx_strtrim(argv[4]);
    values[0].size = mx_strlen(values[0].operand);
    values[1].size = mx_strlen(values[1].operand);
    values[0].num = mx_atoi(values[0].operand);
    values[1].num = mx_atoi(values[1].operand);
    values[2].num = mx_atoi(values[2].operand);
    values[2].size = mx_strlen(values[2].operand);
    return values;
}
