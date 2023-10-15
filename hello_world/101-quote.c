#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *                
 *
 * Return: Always 0.
 */
int main(void)
{
	const char msg[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	//const char msg1[]="\n";
        syscall(SYS_write,1,msg,sizeof(msg));
	//syscall(SYS_write,1,msg1,sizeof(msg1));
        return (0);	
}
