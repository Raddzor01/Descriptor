#pragma once

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_values {
    char *operand;
    int size;
    int num;
    bool is_negative;
} t_values;

int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char *s, int case_err);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
void mx_check_err(char *argv[], t_values *values,char *operation, int oper_size);
void mx_processing(t_values *values, char *operation);
double mx_pow(double n, unsigned int pow);
char *mx_itoa(long long number);
int mx_operand_check (char *operand, int size_o, int i);
void mx_print(char *sign, int i, int j, int k);
t_values *mx_init(t_values *values, char *argv[]);
void mx_print_formula(int i, char *operation, int j, int k);
t_values *mx_isnegative(t_values *values);
