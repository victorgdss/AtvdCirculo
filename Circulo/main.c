#include "stdio.h"
#include "circulo.h"

int main()
{
   Circulo *c1;
   Circulo *c2;
   float area,x,y,r;
   int verifica;
   printf("\nDigite o valor do centro em x, do centro em y e do raio r ");
   scanf("%f %f %f", &x,&y,&r);
   c1=circ_cria(x,y,r);
   
   area= circ_area(c1);
   printf("\nArea do circulo 1 = %f", area);
   
   printf("\nDigite o valor do centro em x, do centro em y e do raio r ");
   scanf("%f %f %f", &x,&y,&r);
   c2=circ_cria(x,y,r);
   area= circ_area(c2);
   printf("\nArea do circulo 2 = %f", area);

   verifica = circ_concentricos(c1,c2);
   if (verifica)
   {
    printf("\nOs circulos c1 e c2 sao concentricos");
   }
   else
   {
    printf("\nOs circulos c1 e c2 nao sao concentricos");
   }
  
   r= circ_raio(c1);
   printf("\nO raio do circulo 1 e %f", r);
   r= circ_raio(c2);
   printf("\nO raio do circulo 2 e %f", r);

   circ_libera(c1);
   circ_libera(c2);
 
}