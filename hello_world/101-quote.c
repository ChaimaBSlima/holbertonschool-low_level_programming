#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *                
 *
 * Return: Always 0.
 */
void putchar(char c) {
  extern long write(int, const char *, unsigned long);
  (void) write(1, &c, 1);
}
int main(void)
{
	const char msg[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
        syscall(SYS_write,1,msg,sizeof(msg));
	putchar('\n');
        return (0);	
}
