#ifndef philo
#define philo
/*
 * str implemented str functions to help me
 */
int _strcmp(char *s1, char *s2);
/*
 * edtited
 * safe i guess
 */
char *_strchr(char *s, char c);
/*
 * safe
 */
int _strlen(const char *s);

int _strncmp(const char *s1, const char *s2, size_t n);

/*
 * yet to be tested
 * used in env
 */
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strcat(char *dest, const char *src);
#endif
