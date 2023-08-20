/**
 * _strcat - concantenate strings.
 * @destination : destination string.
 * @source : source string.
 * Return: destination string.
 */
char* _strcat(char* destination, const char* source)
{
    char* ptr = destination + _strlen(destination);
 
    while (*source != '\0') {
        *ptr++ = *source++;
    }
 
    *ptr = '\0';
 
    return destination;
}
