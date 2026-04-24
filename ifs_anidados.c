int a = 0;
int c,x;

// ESTO ES UN TEST QUE COMPRUEBA EJECUCIÓN DE UN FOR DENTRO DE IFS ANIDADOS
main(){
    if(a == 1){
        for(x = 3; x > 0; DEC(x)){
            puts("Soy el for del if");
        }
    }else{
        for(c = 3; c > 0; DEC(c)){
            puts("Soy el else");
        }
    }

    if(a <= 1){
        if(a >= 1){
            for(x = 5; x > 0; DEC(x)){
                puts("Hola");
            }
        }else{
            puts("Soy el else2");
            while(a >= 1){
                a = a - 1;
                puts("Disminuyendo valor de a");
            }
        }
    }
}
//@ (main)
