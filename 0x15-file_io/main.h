ssize_t read_textfile(const char *filename, size_t letters);

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
