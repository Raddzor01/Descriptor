#include "../inc/minilibmx.h"

t_values *mx_isnegative(t_values *values) {
    if (values[0].operand[0] == '-') {
        values[0].operand++;
        values[0].size--;
        values[0].is_negative = true;
    } if (values[1].operand[0] == '-') {
        values[1].operand++;
        values[1].size--;
        values[1].is_negative = true;
    } if (values[2].operand[0] == '-') {
        values[2].operand++;
        values[2].size--;
        values[2].is_negative = true;
    }
    return values;
}
