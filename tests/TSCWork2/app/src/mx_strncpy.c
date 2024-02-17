char *mx_strncpy(char *dst, const char *src, int len) {
    char *start = dst;
    while (*src != '\0' && len > 0) {
        *dst = *src; 
        dst++;
        src++;
        len--;
    }
    *dst = '\0';
    return start;
}

















































