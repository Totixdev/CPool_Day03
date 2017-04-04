#include<unistd.h>

void	my_putchar()
{
  
  char toto;
  toto ='z';
  write(1, &toto ,1);

  while(toto >= 'a')

    {

      toto = toto - 1;
      
      write(1, &toto ,1);
      
    }
  
}
	
int	main(void)
{
  my_putchar();

return 0;
}


// Les normes ne sont pas respectées
