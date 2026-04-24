// Primero comprobamos todas las formas de declarar variables globales
int a, b = 10, d;
int k = 10;
int w;
int mi_array[3];


// Definimos una función para comprobar su correcta traducción

funcion_sin_return(){
    int c = 10;
    c = c * 8;

    if( c > 80 && c <= 100){
        int d = 10;

    }else{
        int d = 50;
    }
    puts("Me he ejecutado, funcion sin return");
    
}
funcion_con_return(){
    int c = 10;
    c = c * 8;

    if( c >= 80 && c <= 100){
        int d = 10;

    }else{
        int d = 50;
    }
    return d;
}

funcion_con_param(int a){
    a = a * 8;

    if( a > 80 && a <= 100){
        int d = 10;

    }else{
        int d = 50;
    }
    // Comprobamos return cuando no es la última sentencia
    return d;
    puts("No me voy a imprimir");
}

funcion_con_mas_params(int a, int b, int c){
    return a + b + c;
}



// Comprobamos correcto desarrollo del main
main(){

    // Impresión de cadenas
    puts("Hola, soy el puts!");

    // Impresión de expresiones y cadenas
    printf("No me imprimo", "Soy una string del printf!",123, 123+1, 4 && 5);

    // Traducción de variables locales
    int b = 1;
    int c, d = 7, e;

    // Traducción de operadores
    a = 1 && 2;
    printf("",a);

    a = 1 || 2;
    printf("",a);

    a = !1;
    printf("",a);
   
    a = 1 != 2;
    printf("",a);


    a = 1 == 1;
    printf("",a);
 

    a = 1 < 2;
    printf("",a);

    a = 1 <= 2;
    printf("",a);
  

    a = 1 > 2;
    printf("",a);
 

    a = 1 >= 2;
    printf("",a);
 

    a = 10 % 2;
    printf("",a);
  


    a = a + 1;
    printf("",a);

    a = a * 1;
    printf("",a);

    a = a / b;
    printf("",a);

    int resultado;
    funcion_sin_return();
    resultado = funcion_con_return();
    printf("",resultado);
    resultado = funcion_con_param(10);
    printf("",resultado);
    resultado = funcion_con_mas_params(1, 2, 3);
    printf("",resultado);

    // Comprobamos asignacion array
    mi_array[0] = 1;
    mi_array[1] = mi_array[0] + 1;
    mi_array[2] = mi_array[0] * mi_array[1];

    int array_local[10];

    printf("Me saltan %d",mi_array[1]);

    return 0;
}



//@ (main)
