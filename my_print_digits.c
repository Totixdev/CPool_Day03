#include<unistd.h>

void	my_putchar()
{
  int toto;
 toto = 48;

 write(1, &toto ,1);
  
  while( toto <= 57)
   {

     toto = toto + 1;
     write (1, &toto ,1);
   }
    
}

int	main(void)

{
  my_putchar();
      
  return 0;
  
}
