
int b = 1,c = 5;
int d = 67;

main(){
    int a = 5;
     // Estructura de control WHILE
    while(a > 0){
        puts("Visitando el while...");
        a = a - 1;
    }

    // Estructura de control IF, vamos a comprobar todos los casos posibles
    if( a > 0){
        puts("If con una sentencia");
    }

    if( a ==  0){
        puts("If con dos sentencias");
        puts("Soy la segunda sentencia");
    }
    a = a + 1;

    if( a > 0){
        puts("If-else con dos sentencias");
        puts("Soy la segunda sentencia del if");
        a = a * 7;

    }else{
        a = a / 5;
    }

    if(a > 0){
        a = 1;
        a = 1 + 1;
        a = 1 * 2;
    }else{
        b = a * b;
        a = a + 1;
        b = b / a;
    }

    // Estructura de control FOR

    // FOR con variable global como iterador
    for(a = 5; a > 0; DEC(a)){

        puts("Estoy dentro del for");

        if(a > 2){

            puts("If anidado del for!");

        }else{

            puts("Else anidado del for");
        }
    }

    // FOR con variable local como iterador

    for(b = 0; b  < 3; INC(b)){
        c = 10;
        c = c + d;

        // Probamos por ejemplo un while anidado dentro del for
        int l = 2;
        while(l > 0){
            puts("While interno");
            l = l - 1;
        }
    }


    // Estructura Switch/Case

    switch(d){
        case 0:
            printf("Me saltan", d);
            break;

        case 1:

            if(d > a){
                puts("d es mayor que a");
            }else{
                puts("d no es mayor que a");
            }
            break;

        case 2:

            int w = 10;
            w = a * b;
            break;
            
        default:
            puts("Ejecutando el default!");
            break;
    }
    return 0;

}

//@ (main)

