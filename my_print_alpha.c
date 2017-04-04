#include <unistd.h>

void	my_putchar()
{

  char totix;
  totix = 'a';

  write(1, &totix ,1);
    
  while(totix <= 'z')

    {
      
      totix = totix + 1;

      write (1, &totix ,1);
      
        }
  
}


int	main(void)
{
  
  my_putchar();
  
  return 0;
  
}

// j'ai crée un main à la place du int my_print_alpha
