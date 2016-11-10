#include <stdio.h>


//la siguiente función se encarga de devolver el valor esperado de acuerdo al valor de los argumentos
//variando la  operación de acuerdo al argumento 7 tal como se muestra:
int funcion(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7){
  if (arg7 > 4) {
    return(arg1 + arg2 + arg3 + arg4 - arg5 - arg6);
  }
  else if (arg7 <= 4) {
    return(arg1 + arg2 + arg3 + arg4 + arg5 - arg6);
  }

}
int main(int argc, char const *argv[]) {
  //declaración de las variables
  int arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg78;
  //inicialización de las variables
  arg1 = 3; arg2 = 8; arg3 = 5; arg4 = 1; arg5 = 9; arg6 = 0; arg7 = 5; arg78 = 3;

  //imprime los resultados
  printf("Los argumentos enviados a la función fueron:\n");
  printf("arg1 = %d, arg2 = %d, arg3 = %d, arg4 = %d, arg5 = %d, arg6 = %d, arg7 = %d\n",
    arg1, arg2, arg3, arg4, arg5, arg6, arg7 );
  printf("El resultado es: %d\n", funcion(arg1, arg2, arg3, arg4, arg5, arg6, arg7));
  printf("\nAhora se cambia el valor del sétimo argumento\n");
  printf("Los argumentos enviados a la función fueron:\n");
  printf("arg1 = %d, arg2 = %d, arg3 = %d, arg4 = %d, arg5 = %d, arg6 = %d, arg7 = %d\n",
    arg1, arg2, arg3, arg4, arg5, arg6, arg78 );
  printf("El resultado es: %d\n", funcion(arg1, arg2, arg3, arg4, arg5, arg6, arg78));
  return 0;
}
