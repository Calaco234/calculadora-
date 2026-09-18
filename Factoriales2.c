#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	
	int i; double f;
	double fact=1,a;
	if(argc<2)
	{
		//verfica que si el usuario ay introducido terminos delante de ./pr ograma 
		printf("el numero es negativo\n");
		return EXIT_FAILURE;
	}
	else
	{
		for(i=1;i<argc;i++)
		{
			//convercion de texto a numer
			f=atof(argv[i]);
			//calcular factorial
			printf("f=%.0f\n",f);
			
			//verifica si el int es positivo o no es positivo 
			if (f<0)
			{
				printf("nfactorial no existe\n");
				
			}
			//calcula la factorizacion de los umero ingresados 
			else
			{
				if (f==0)
				{
					printf("%.0lf=%.0f\n",f,fact);
				}
				else
				{
					for (a=f;a>=1;a--)
					{
					fact=fact*a;
					}
					//imprime los resultados de las factoriales con el formato %.0f y las variables f,fact
					printf("%.0lf=%.0f\n",f,fact);
					fact=1;
				}
			}

	      }	
	      
	  }
	
	
	return EXIT_SUCCESS;
}

