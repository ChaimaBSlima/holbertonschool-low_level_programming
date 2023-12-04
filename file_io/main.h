#ifndef __FILE_O_I__
#define __FILE_O_I__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>





ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);


#endif /*__FILE_O_I__*/
