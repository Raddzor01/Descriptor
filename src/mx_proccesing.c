#include "../inc/minilibmx.h"

void mx_processing(t_values *values, char *operation) {
    if (*operation == '?') {
        mx_processing(values, "+");
        mx_processing(values, "-");
        mx_processing(values, "*");
        mx_processing(values, "/");
        return;
    }
    values = mx_isnegative(values);
    for (int i = 0; i < mx_pow(10, values[0].size); i++) {
        if (values[0].num > 0)
            i = values[0].num;
        if(!mx_operand_check(values[0].operand, values[0].size, i))
            continue;
        for (int j = 0; j < mx_pow(10, values[1].size); j++) {
            if (values[1].num > 0)
                j = values[1].num;
            if(!mx_operand_check(values[1].operand, values[1].size, j))
                continue;
            for (int k = 0; k < mx_pow(10, values[2].size); k++) {
                if(values[2].num > 0)
                    k = values[2].num;
                if(!mx_operand_check(values[2].operand, values[2].size, k))
                    continue;
                if (values[0].is_negative)  
                    i *= -1;
                if (values[1].is_negative)  
                    j *= -1;
                if (values[2].is_negative)  
                    k *= -1;
                mx_print(operation, i, j, k);
                if (values[0].is_negative)  
                    i *= -1;
                if (values[1].is_negative)  
                    j *= -1;
                if (values[2].is_negative)  
                    k *= -1;
                if (values[2].num > 0)
                    break;
            }
            if (values[1].num > 0)
                break;   
        } 
        if (values[0].num > 0)
            break;
    }
}
