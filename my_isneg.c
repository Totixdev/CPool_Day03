#include<unistd.h>

void	my_putchar(int number)
{
  

  char toto = 78;
  char lolo = 110;
  char lili = 80;
  char lilou = 112;
  
  if (number < 0)
    {   
      write(1, &toto ,1);
      write(1, &lolo ,1);
     }
  
  
    if(number >=0)
      {   
	write(1, &lili ,1);
	write(1, &lilou ,1);
      }
    
}


int	main(void)
{
  my_putchar(-1582);
  
  return 0;
  
}
// OK
