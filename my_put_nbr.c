#include<unistd.h>

void	my_putchar(int number)
{
  if  (number > '9')
    write (1, &number ,1);
    
    }
int	main(void)

{  

  my_putchar(48);

return 0;
}
