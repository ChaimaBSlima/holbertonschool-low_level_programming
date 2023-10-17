#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void){
    int i;
	char j;

	for (i = 97; i < 123; i++)
	{
		j = i;
		_putchar(j);
	}
}