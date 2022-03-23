# include <iostream>
# include <stdio.h>
# include <string.h>
using namespace std;

int bisiesto(int a) // funcion que determina si un anio es o no bisiesto
{
    if(((a % 4)==0) && (( a % 100)!=0))
        return 1;
    else
        return 0;
}

int validarFecha (int d, int m, int a) // funcion para verificar si la fecha es valida
{
    int b, v=1, dias; // v=0 indicara fecha no valida, si la fecha es valida v retorna la cantidad de dias que tiene el mes
    char ds[10];
    if (a < 1901)
       v=0; // anio no valido
    else
        b=bisiesto(a);  
    if (v !=0)
    {
      switch (m)
      {
          case 2:
               if(b==1)
                      dias = 29; // año bisiesto
               else
                      dias = 28;
          break;
          case 4:
          case 6:
          case 9:
          case 11:
               dias = 30;
          break;
          case 1:
          case 3:
          case 5:
          case 7:
          case 8:
          case 10:
          case 12:
               dias = 31;  
          break;      
          default:
               v = 0; // mes no valido
        };
      }
    if (v != 0)
       if ( (d < 0) || (d > dias))
          v = 0; // dia no valido
       else
          v = dias; // uso v para retornar la cantidad de dias del mes en caso de que la fecha sea valida
    return v;
}

 void diaDeLaSemanaTexto(int s, char dst[]) // dst es parametro de salida
{
     switch (s)
     {
     case 0:
          strcpy(dst, "domingo");
     break;
     case 1:
          strcpy(dst, "lunes");
     break;
     case 2:
          strcpy(dst, "martes");
     break;
     case 3:
          strcpy(dst, "miercoles");
     break;
     case 4:
          strcpy(dst, "jueves");
     break;
     case 5:
          strcpy(dst, "viernes");
     break;
     case 6:
          strcpy(dst, "sabado");
    break;
    }
}

int primeroDelAnio(int a)
{
    int primeroDe1901,  aniosTranscurridos, cantidadDeBisiestos, pa;
    primeroDe1901 = 2; //dato 2 = martes
    aniosTranscurridos = a - 1901;
    cantidadDeBisiestos = (aniosTranscurridos / 4); // bisiestos cada 4 anios
    pa = ( primeroDe1901 + aniosTranscurridos + cantidadDeBisiestos) % 7;     // anio no bisiesto 52 semanas + 1 dia
    return pa;
}

int primeroDelMes(int m, int a)
{
    int i, c, pm; // c cuenta la cantidad de dias 
    if (m>1)
    {
       c = primeroDelAnio(a);
       for (i=1; i < m; i++)
       {
          c = c +  validarFecha(1,i,a); 
       }
       pm= c % 7;     
    }
    else
        pm = primeroDelAnio(a);
        
    return pm;
}

int diaDeLaSemana(int d,int m,int a)
{ 
  int ds;
  ds = (primeroDelMes (m, a) + d - 1) % 7;
  return ds;
}


int main()
{
    int d, m, a, v, pa, pm, ds; // v = 0 indicara no valido
    char dst [10];  // dia de la semana en texto
    cout << "Ingrese el dia: ";
    cin >> d;
    cout << "Ingrese el mes: ";
    cin >> m;
    cout << "Ingrese el anio: ";
    cin >> a;    
    v = validarFecha(d,m,a);
    if (v==0)
       cout << "Fecha invalida" << "\n";
    else
       cout << "Fecha valida" << "\n";

    if (v !=0)   
    {
     pa = primeroDelAnio(a);
     diaDeLaSemanaTexto(pa, dst);
     cout << "El primero de enero del " << a << " fue " << dst << "\n";
     
     pm = primeroDelMes(m,a);
     diaDeLaSemanaTexto(pm, dst);
     cout << "El primero del mes " <<  m << " del " << a << " fue " << dst << "\n";
     ds = diaDeLaSemana(d,m,a);
     diaDeLaSemanaTexto(ds, dst);
     cout << "El dia " << d <<  "/" << m << "/" << a << " fue " << dst << "\n";
     }
    system("PAUSE");
    return 0;
}
