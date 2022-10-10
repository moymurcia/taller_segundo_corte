#include <stdio.h>
void exit();
int Menu_profe();
int validacion(int usuar,int clav);
int validar(int id_estudiante);
void ingreso();
int usuar;
int Menu_estudiante();
int clav;
int i,x,n;
int id_estudiante;
int Registrar();
int arr[10];
int notas();
int Consultar();
int promedio();
int suma = 0,prom = 0;  

struct docentes
{
    int Usuario;
    int Clave;
};    
struct docentes d[2]={{39740,123456},{2984467,456789}};

struct estudiantes
{
    int Usuario;
    int Clave;
};    
struct estudiantes e[4]={{1015427,123456},{2984467,456789},{1015427,123},{1020755,456}};


int main()
{
    while(1)
    {
        int Menu;
        printf("Bienvenido al colegio CASITA AZUL \n");
        printf("1.Docente \n 2.Estudiante \n ,3.Salir \n");
        scanf ("%d",&Menu);
        switch (Menu)
        
        {
            {
                case 1:
                ingreso( );
                Menu_profe( );
                break;
            }
            {
                case 2:
                ingreso( );
                Menu_estudiante( );
            }
            
            {
                case 3:
                exit(1);
                break;
            }
            default: 
            printf("Opcion invalida \n");
        }
    void ingreso()
    {
        printf("\n digite su usuario \t");
        scanf("%d",&usuar);
        printf("\n digite su clave\t");
        scanf("%d",&clav);
        x = validacion(usuar,clav);
    }    

    int validacion(int Usuario, int Clave);
    {
        for (i=0;i<2;i++) 
        {
            if(d[i].Usuario==usuar)
            {
                if(d[i].Clave==clav)
                {
                    return i; 
                    break;
                }
                else
                {
                    printf("\n clave invalida");
                    exit(1);
                    
                }
            }
        }
    }    
    int Menu_profe;
    {
        printf("1.Registrar \n 2. Consultar  \n ,3.Salir \n");
        scanf ("%d",&Menu_profe);
        switch (Menu_profe)
        {
            case 1:
            {
                Registrar( );
                notas( );
                break;
            }
            case 2:
            {
                Consultar( );
            }
            {
                case 3:
                exit(1);
                break;
            }
            default: 
            printf("Opcion invalida \n");
        }
    }
    int Registrar();
    printf("\n digite el codigo del estudiante \t");
    scanf("%d",&id_estudiante);
    x = validar(id_estudiante);
    {
        for (i=0;i<1;i++) 
        {
            if(e[i].Usuario==id_estudiante)
            {
                return i; 
                break;
            }    
            else
            {
                printf("\n usuario no existe");
                exit(1);
            }
        }
    }
    
    int notas();
    for(n=0;n<10;n++)
    {
        printf("ingrese la nota para la %d posicion\n",n+1);
        scanf("%d",&arr[n]);
    }
    
    int Menu_estudiante();
    {
        printf("1.Consultar \n 2. Ver promedio \n 3. Ver Nota mas alta \n ,4.Salir \n");
        scanf ("%i",&Menu_estudiante);
        switch (Menu_estudiante)
        {
            case 1:
            {
                Consultar( );
                break;
            }
            case 2:
            {
                promedio();
                break;
            }
            case 3:
            {
                Consultar();
                break;
            }
            case 4:
            {
                exit(1);
                break;
            }
            
            default: 
            printf("Opcion invalida \n");
        }
        
    }
    int Consultar();
    {
        printf("sus notas son:\n"); 
        for(n=0;n<10;n++)
    }    
    {
        printf("%d\n",arr[n]);
    }   
    
    int promedio();
    { 
        for (n=0;n<10;n++)
        (suma=suma+n);
        prom=suma/n;
        printf("su promedio es:%.1d\n",prom);
    }
}    