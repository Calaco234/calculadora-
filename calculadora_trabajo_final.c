#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototipo de función
void MENU(void);

int main()
{
    char op[3];
    double a, b, j;

    do
    {
        printf("\033[H\033[2J"); // Limpiar pantalla
        MENU();

        printf("\n\tSelecciona una opcion: ");
        scanf("%2s", op);

        // Opción para regresar al menú
        if (op[0] == 'o' && op[1] == 'p' && op[2] == '\0')
        {
            printf("\n\tRegresando al menu...\n");
            continue;
        }

        // Salir
        if (op[0] == '0' && op[1] == '\0')
        {
            printf("\n\tSaliendo de la calculadora...\n");
            break;
        }

        switch (op[0])
        {
    case '1':

    printf("\033[H\033[2J");

    printf("\n\n");
//Ctrl + Shift + U → 2588 → Enter█
//═ → Ctrl + Shift + U, escribe 2550, Enter.═
//╝ → Ctrl + Shift + U, escribe 255D, Enter.╝
    printf("\033[1;36m"); // Color cian para el arte ASCII
    printf("\t\t\t  ███████╗██╗   ██╗███╗   ███╗ █████╗ \n");
    printf("\t\t\t  ██╔════╝██║   ██║████╗ ████║██╔══██╗\n");
    printf("\t\t\t  ███████╗██║   ██║██╔████╔██║███████║\n");
    printf("\t\t\t  ╚════██║██║   ██║██║╚██╔╝██║██╔══██║\n");
    printf("\t\t\t  ███████║╚██████╔╝██║ ╚═╝ ██║██║  ██║\n");
    printf("\t\t\t  ╚══════╝ ╚═════╝ ╚═╝     ╚═╝╚═╝  ╚═╝\n");
    printf("\033[1;33m"); // Color amarillo para los mensajes de entrada
    printf("\t\t\t          primer numero 1: ");
    scanf("%lf", &a);
    printf("\t\t\t          sugundo numero 2: ");
    scanf("%lf", &b);
    j = a + b;
    printf("\033[1;32m"); // Color verde para el resultado
    printf("\n\t\t\t%lf + %lf = %lf\n", a, b, j);
    printf("\033[0m"); // Restablecer color predeterminado
    break;
           case '2':
                printf("\033[H\033[2J");
                printf("\033[1;36m"); // Color cian para el arte ASCII
                printf("\t\t\t  ██████╗ ███████╗███████╗████████╗ █████╗ \n");
                printf("\t\t\t  ██╔══██╗██╔════╝██╔════╝╚══██╔══╝██╔══██╗\n");
                printf("\t\t\t  ██████╔╝█████╗  ███████╗   ██║   ███████║\n");
                printf("\t\t\t  ██╔══██╗██╔══╝  ╚════██║   ██║   ██╔══██║\n");
                printf("\t\t\t  ██║  ██║███████╗███████║   ██║   ██║  ██║\n");
                printf("\t\t\t  ╚═╝  ╚═╝╚══════╝╚══════╝   ╚═╝   ╚═╝  ╚═╝\n");
                printf("\033[1;33m"); // Color amarillo para los mensajes de entrada
                printf("\t\t\t            PRIMER NUMERO: ");
                scanf("%lf", &a);
                printf("\t\t\t            SEGUNDO NUMERO: ");
                scanf("%lf", &b);
                j = a - b;
                printf("\033[1;32m"); // Color verde para el resultado
                printf("\n\t%lf - %lf = %lf\n", a, b, j);
                printf("\033[0m"); // Restablecer color predeterminado
                break;
            case '3':

                printf("\033[H\033[2J");
                printf("\033[1;36m"); // Color cian para el arte ASCII
                printf("\t\t\t  ███╗   ███╗██╗   ██╗██╗  ████████╗██╗\n");
                printf("\t\t\t  ████╗ ████║██║   ██║██║  ╚══██╔══╝██║\n");
                printf("\t\t\t  ██╔████╔██║██║   ██║██║     ██║   ██║\n");
                printf("\t\t\t  ██║╚██╔╝██║██║   ██║██║     ██║   ██║\n");
                printf("\t\t\t  ██║ ╚═╝ ██║╚██████╔╝███████╗██║   ██║\n");
                printf("\t\t\t  ╚═╝     ╚═╝ ╚═════╝ ╚══════╝╚═╝   ╚═╝\n");


                printf("\033[1;33m"); // Color amarillo para los mensajes de entrada
                printf("\t\t\t          PRIMER NUMERO: ");
                scanf("%lf", &a);

                printf("\t\t\t        SEGUNDO NUMERO: ");
                scanf("%lf", &b);

                j = a * b;

                printf("\033[1;32m"); // Color verde para el resultado
                printf("\n\t%lf x %lf = %lf\n", a, b, j);
                printf("\033[0m"); // Restablecer color predeterminado
                break;


            case '4':

                printf("\033[H\033[2J");
                printf("\033[1;36m"); // Color cian para el arte ASCII
                printf("\t\t\t  ██████╗  ██╗ ██╗   ██╗ ██╗  ███████╗ ██╗  ██████╗  ███╗   ██╗\n");
                printf("\t\t\t  ██╔═══██╗ ██║ ██║   ██║ ██║  ██╔════╝ ██║ ██╔═══██╗ ████╗  ██║\n");
                printf("\t\t\t  ██║   ██║ ██║ ██║   ██║ ██║  ███████╗ ██║ ██║   ██║ ██╔██╗ ██║\n");
                printf("\t\t\t  ██║   ██║ ██║ ╚██╗ ██╔╝ ██║  ╚════██║ ██║ ██║   ██║ ██║╚██╗██║\n");
                printf("\t\t\t  ██████╔╝  ██║  ╚████╔╝  ██║  ███████║ ██║ ╚██████╔╝ ██║ ╚████║\n");
                printf("\t\t't  ╚═════╝   ╚═╝   ╚═══╝   ╚═╝  ╚══════╝ ╚═╝  ╚═════╝  ╚═╝  ╚═══╝\n");
                printf("\033[1;33m"); // Color amarillo para los mensajes de entrada
                printf("\t\t\tPRIMER NUMERO: ");
                scanf("%lf", &a);
                printf("\t\t\tSEGUNDO NUMERO: ");
                scanf("%lf", &b);
                if (b == 0)
                {
                    printf("\033[1;31m"); // Color rojo para el error
                    printf("\n\tError: no se puede dividir entre cero.\n");
                }
                else
                {
                    j = a / b;
                    printf("\033[1;32m"); // Color verde para el resultado
                    printf("\n\t%lf / %lf = %lf\n", a, b, j);
                }
                printf("\033[0m"); // Restablecer color predeterminado
                break;


            case '5':

printf("\033[H\033[2J");
                printf("\033[1;35m"); // Color magenta para el arte ASCII (POTENCIA)
                printf("\t\t\t  ██████╗  ██████╗ ████████╗███████╗███╗   ██╗ ██████╗██╗ █████╗ \n");
                printf("\t\t\t  ██╔══██╗██╔═══██╗╚══██╔══╝██╔════╝████╗  ██║██╔════╝██║██╔══██╗\n");
                printf("\t\t\t  ██████╔╝██║   ██║   ██║   █████╗  ██╔██╗ ██║██║     ██║███████║\n");
                printf("\t\t\t  ██╔═══╝ ██║   ██║   ██║   ██╔══╝  ██║╚██╗██║██║     ██║██╔══██║\n");
                printf("\t\t\t  ██║     ╚██████╔╝   ██║   ███████╗██║ ╚████║╚██████╗██║██║  ██║\n");
                printf("\t\t\t  ╚═╝      ╚═════╝    ╚═╝   ╚══════╝╚═╝  ╚═══╝ ╚═════╝╚═╝╚═╝  ╚═╝\n");


                printf("\033[1;33m"); // Color amarillo para las lecturas de entrada
                printf("\t\t\tPRIMER NUMERO: ");
                scanf("%lf", &a);

                printf("\t\t\tnumero elevado 2: ");
                scanf("%lf", &b);

                j = pow(a, b);

                printf("\033[1;36m"); // Color cian brillante para el resultado
                printf("\n\t%lf ^ %lf = %lf\n", a, b, j);
                printf("\033[0m"); // Restablecer color predeterminado
                break;


            case '6':

printf("\033[H\033[2J");
                printf("\033[1;34m"); // Color azul brillante para el arte ASCII (RAÍZ)
                printf("\t\t\t  ██████╗  █████╗ ██╗███████╗\n");
                printf("\t\t\t  ██╔══██╗██╔══██╗██║╚══███╔╝\n");
                printf("\t\t\t  ██████╔╝███████║██║  ███╔╝ \n");
                printf("\t\t\t  ██╔══██╗██╔══██║██║ ███╔╝  \n");
                printf("\t\t\t  ██║  ██║██║  ██║██║███████╗\n");
                printf("\t\t\t  ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚══════╝\n");
                printf("\033[1;33m"); // Color amarillo para las entradas de texto
                printf("\t\t\tIntroduce el numero (radicando 'a'): ");
                scanf("%lf", &a);
                printf("\t\t\tIntroduce el indice de la raiz ('b', ej: 2 para cuadrada): ");
                scanf("%lf", &b);
                if (b == 0)
                {
                    printf("\033[1;31m"); // Color rojo para error
                    printf("\n\tError: El indice 'b' no puede ser cero.\n");
                }
                else if (a < 0 && (int)b % 2 == 0)
                {
                    printf("\033[1;31m"); // Color rojo para error
                    printf("\n\tError: No existen raices reales pares de numeros negativos.\n");
                }
                else
                {
                    j = pow(a, 1.0 / b);

                    printf("\033[1;32m"); // Color verde brillante para el resultado
                    printf("\n\tLa raiz %.2lf de %.2lf es: %.4lf\n",
                           b, a, j);
                }

                printf("\033[0m"); // Restablecer color predeterminado
                break;


            default:

                printf("\033[H\033[2J");
                printf("\n\tNO EXISTE NIGUNA OPCCION EN EL MENU CON ESE NUMERO\n");
                break;
        }

        printf("\n\tEscribe 'op' para regresar al menu.");
        printf("\n\tEscribe '0' para salir.");
        printf("\n\tPresiona ENTER para continuar...");

        getchar();
        getchar();

    } while (1);

    return EXIT_SUCCESS;
}


// Funcion del menu
void MENU(void)
{
    char *cian   = "\033[1;36m"; // Cian brillante para los bordes
    char *texto  = "\033[1;37m"; // Blanco brillante para el texto
    char *opcion = "\033[1;33m"; // Amarillo brillante para las opciones/números
    char *reset  = "\033[0m";

    // Limpia la pantalla
    printf("\033[H\033[2J");

    // Bordes en cian, texto interior resaltado
    printf("%s", cian);
    printf("               +========================================+\n");
    printf("               |                                        |\n");
    printf("               |              %sCALCULADORA%s               |\n", texto, cian);
    printf("               |                %sBASICA%s                  |\n", texto, cian);
    printf("               |                                        |\n");
    printf("               +----------------------------------------+\n");
    printf("               |                                        |\n");
    printf("               |       %ssuma:================%s1%s           |\n", texto, opcion, cian);
    printf("               |       %sresta:===============%s2%s           |\n", texto, opcion, cian);
    printf("               |       %smulti:===============%s3%s           |\n", texto, opcion, cian);
    printf("               |       %sdivi:================%s4%s           |\n", texto, opcion, cian);
    printf("               |       %spotencia:============%s5%s           |\n", texto, opcion, cian);
    printf("               |       %sraiz:================%s6%s           |\n", texto, opcion, cian);
    printf("               |                                        |\n");
    printf("               |       %smenu principal:========%sop%s        |\n", texto, opcion, cian);
    printf("               |       %ssalir:===============%s0%s           |\n", texto, opcion, cian);
    printf("               |                                        |\n");
    printf("               +========================================+\n");

    printf("%s", reset);
    
}
