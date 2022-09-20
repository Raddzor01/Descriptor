#include <stdbool.h>
bool mx_isspace(char c);

char *mx_strncpy(char *dst, const char *src, int len) {
    for (int i = 0; i < len; i++) {
		while (mx_isspace(src[i]) == 1 && mx_isspace(src[i + 1]) == 1) {
			i++;
		}
        *dst = src[i];
		dst++;
    }
    *dst = '\0';
    return dst;
}
