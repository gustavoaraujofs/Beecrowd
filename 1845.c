#include <stdio.h>

char verifica(int i, char letra){
    if(letra >= 65 && letra <= 90){
        if(i == 0){
            return 'F';
        }else{
            return 'a';
        }
    }else{
        if(i == 0){
            return 'f';
        }else{
            return 'a';
        }
    }
}

int main() {
    int i = 0;
    char texto;

    while(scanf("%c", &texto) != EOF){
        switch (texto){
            case 'P':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'S':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'V':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'X':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'J':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'B':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'Z':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'p':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 's':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'v':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'x':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'j':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'b':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'z':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'F':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            case 'f':
                texto = verifica(i, texto);
                if(texto == 'a'){
                    i = 2;
                }else{
                    i = 1;
                }
            break;
            default:
                i = 0;
            break;
        }
        if(i == 0 || i == 1){
            printf("%c", texto);
        }
    }

    return 0;
}