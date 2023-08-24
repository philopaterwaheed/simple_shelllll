#ifndef str 
#define str 
#include <string.h>
/* string functions */
int _strlen(const char *s);
/*
 * yet to be tested
 */
char *_strncat(char *dest, const char *src, size_t n);
/*
 * may break becuse of not nulling
 * test with with env
 */
char *_strcpy(char *dest,const char *src);
/*
 * may break the program
 * used in set alias
 * didn't till now
 **/
int _strcmp(char *s1, char *s2);
/*
 * yet to be tested
 * used in env
 */
int _strncmp(const char *s1, const char *s2, size_t n);
/*
 * edtited
 * safe i guess
 */

/*
 * safe
 */
char *_strcat(char *dest, const char *src);
char *str_duplicate(char *string);
#endif
