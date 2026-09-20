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
    printf("\t\t\t  ███████╗██╗   ██╗███╗   ███╗ █████╗ \n");
    printf("\t\t\t  ██╔════╝██║   ██║████╗ ████║██╔══██╗\n");
    printf("\t\t\t  ███████╗██║   ██║██╔████╔██║███████║\n");
    printf("\t\t\t  ╚════██║██║   ██║██║╚██╔╝██║██╔══██║\n");
    printf("\t\t\t  ███████║╚██████╔╝██║ ╚═╝ ██║██║  ██║\n");
    printf("\t\t\t  ╚══════╝ ╚═════╝ ╚═╝     ╚═╝╚═╝  ╚═╝\n");
    printf("\t\t\t          primer numero 1: ");
    scanf("%lf", &a);
    printf("\t\t\t          sugundo numero 2: ");
    scanf("%lf", &b);
    j = a + b;
    printf("\n\t\t\t%lf + %lf = %lf\n", a, b, j);

    break;
            case '2':
                printf("\033[H\033[2J");
                printf("\t\t\t  ██████╗ ███████╗███████╗████████╗ █████╗ \n");
                printf("\t\t\t  ██╔══██╗██╔════╝██╔════╝╚══██╔══╝██╔══██╗\n");
                printf("\t\t\t  ██████╔╝█████╗  ███████╗   ██║   ███████║\n");
                printf("\t\t\t  ██╔══██╗██╔══╝  ╚════██║   ██║   ██╔══██║\n");
                printf("\t\t\t  ██║  ██║███████╗███████║   ██║   ██║  ██║\n");
                printf("\t\t\t  ╚═╝  ╚═╝╚══════╝╚══════╝   ╚═╝   ╚═╝  ╚═╝\n");
                printf("\t\t\t            PRIMER NUMERO: ");
                scanf("%lf", &a);
                printf("\t\t\t            SEGUNDO NUMERO: ");
                scanf("%lf", &b);
                j = a - b;
                printf("\n\t%lf - %lf = %lf\n", a, b, j);
                break;
            case '3':

                printf("\033[H\033[2J");
                printf("\t\t\t  ███╗   ███╗██╗   ██╗██╗  ████████╗██╗\n");
                printf("\t\t\t  ████╗ ████║██║   ██║██║  ╚══██╔══╝██║\n");
                printf("\t\t\t  ██╔████╔██║██║   ██║██║     ██║   ██║\n");
                printf("\t\t\t  ██║╚██╔╝██║██║   ██║██║     ██║   ██║\n");
                printf("\t\t\t  ██║ ╚═╝ ██║╚██████╔╝███████╗██║   ██║\n");
                printf("\t\t\t  ╚═╝     ╚═╝ ╚═════╝ ╚══════╝╚═╝   ╚═╝\n");


                printf("\t\t\t          PRIMER NUMERO: ");
                scanf("%lf", &a);

                printf("\t\t\t        SEGUNDO NUMERO: ");
                scanf("%lf", &b);

                j = a * b;

                printf("\n\t%lf x %lf = %lf\n", a, b, j);
                break;


            case '4':

                printf("\033[H\033[2J");
                printf("\t\t\t  ██████╗  ██╗ ██╗   ██╗ ██╗  ███████╗ ██╗  ██████╗  ███╗   ██╗\n");
                printf("\t\t\t  ██╔═══██╗ ██║ ██║   ██║ ██║  ██╔════╝ ██║ ██╔═══██╗ ████╗  ██║\n");
                printf("\t\t\t  ██║   ██║ ██║ ██║   ██║ ██║  ███████╗ ██║ ██║   ██║ ██╔██╗ ██║\n");
                printf("\t\t\t  ██║   ██║ ██║ ╚██╗ ██╔╝ ██║  ╚════██║ ██║ ██║   ██║ ██║╚██╗██║\n");
                printf("\t\t\t  ██████╔╝  ██║  ╚████╔╝  ██║  ███████║ ██║ ╚██████╔╝ ██║ ╚████║\n");
                printf("\t\t't  ╚═════╝   ╚═╝   ╚═══╝   ╚═╝  ╚══════╝ ╚═╝  ╚═════╝  ╚═╝  ╚═══╝\n");



                printf("\t\t\tPRIMER NUMERO: ");
                scanf("%lf", &a);

                printf("\t\t\tSEGUNDO NUMERO: ");
                scanf("%lf", &b);

                if (b == 0)
                {
                    printf("\n\tError: no se puede dividir entre cero.\n");
                }
                else
                {
                    j = a / b;
                    printf("\n\t%lf / %lf = %lf\n", a, b, j);
                }
                break;


            case '5':

                printf("\033[H\033[2J");
                printf("\t\t\t  ██████╗  ██████╗ ████████╗███████╗███╗   ██╗ ██████╗██╗ █████╗ \n");
                printf("\t\t\t  ██╔══██╗██╔═══██╗╚══██╔══╝██╔════╝████╗  ██║██╔════╝██║██╔══██╗\n");
                printf("\t\t\t  ██████╔╝██║   ██║   ██║   █████╗  ██╔██╗ ██║██║     ██║███████║\n");
                printf("\t\t\t  ██╔═══╝ ██║   ██║   ██║   ██╔══╝  ██║╚██╗██║██║     ██║██╔══██║\n");
                printf("\t\t\t  ██║     ╚██████╔╝   ██║   ███████╗██║ ╚████║╚██████╗██║██║  ██║\n");
                printf("\t\t\t  ╚═╝      ╚═════╝    ╚═╝   ╚══════╝╚═╝  ╚═══╝ ╚═════╝╚═╝╚═╝  ╚═╝\n");


                printf("\t\t\tPRIMER NUMERO: ");
                scanf("%lf", &a);

                printf("\t\t\tnumero elevado 2: ");
                scanf("%lf", &b);

                j = pow(a, b);

                printf("\n\t%lf ^ %lf = %lf\n", a, b, j);
                break;


            case '6':

                printf("\033[H\033[2J");
                printf("\t\t\t  ██████╗  █████╗ ██╗███████╗\n");
                printf("\t\t\t  ██╔══██╗██╔══██╗██║╚══███╔╝\n");
                printf("\t\t\t  ██████╔╝███████║██║  ███╔╝ \n");
                printf("\t\t\t  ██╔══██╗██╔══██║██║ ███╔╝  \n");
                printf("\t\t\t  ██║  ██║██║  ██║██║███████╗\n");
                printf("\t\t\t  ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚══════╝\n");


                printf("\t\t\tIntroduce el numero (radicando 'a'): ");
                scanf("%lf", &a);

                printf("\t\t\tIntroduce el indice de la raiz ('b', ej: 2 para cuadrada): ");
                scanf("%lf", &b);

                if (b == 0)
                {
                    printf("\n\tError: El indice 'b' no puede ser cero.\n");
                }
                else if (a < 0 && (int)b % 2 == 0)
                {
                    printf("\n\tError: No existen raices reales pares de numeros negativos.\n");
                }
                else
                {
                    j = pow(a, 1.0 / b);

                    printf("\n\tLa raiz %.2lf de %.2lf es: %.4lf\n",
                           b, a, j);
                }

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
    char *negro  = "\033[30m";
    char *morado = "\033[35m";
    char *reset  = "\033[0m";

    // Limpia la pantalla
    printf("\033[H\033[2J");

    // Bordes en morado, texto interior en negro
    printf("%s", morado);
    printf("               +========================================+\n");
    printf("               |                                        |\n");
    printf("               |              %sCALCULADORA%s               |\n", negro, morado);
    printf("               |                %sBASICA%s                  |\n", negro, morado);
    printf("               |                                        |\n");
    printf("               +----------------------------------------+\n");
    printf("               |                                        |\n");
    printf("               |       %ssuma:================1%s           |\n", negro, morado);
    printf("               |       %sresta:===============2%s           |\n", negro, morado);
    printf("               |       %smulti:===============3%s           |\n", negro, morado);
    printf("               |       %sdivi:================4%s           |\n", negro, morado);
    printf("               |       %spotencia:============5%s           |\n", negro, morado);
    printf("               |       %sraiz:================6%s           |\n", negro, morado);
    printf("               |                                        |\n");
    printf("               |       %smenu principal:========op%s        |\n", negro, morado);
    printf("               |       %ssalir:===============0%s           |\n", negro, morado);
    printf("               |                                        |\n");
    printf("               +========================================+\n");

    printf("%s", reset);
    
}
