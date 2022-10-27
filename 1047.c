#include <stdio.h>

int main(){
    int h_i, m_i, h_f, m_f, i, j, duration = 0, m = 0;

    scanf("%d%d%d%d", &h_i, &m_i, &h_f, &m_f);
    
    i = h_i;
    if(m_i < m_f){
        m = m_f - m_i;
        if(h_i < h_f){
            do{
                if(i == 24){
                    i = 0;
                }else{
                    i++;
                    duration++;
                }
            }while (i != h_f);
        }else if(h_i == h_f){
            duration = 0;
        }else{
            do{
                if(i == 24){
                    i = 0;
                }else{
                    i++;
                    duration++;
                }
            }while (i != h_f);
        }
    }else{
        if(m_i == m_f){
            do{
                if(i == 24){
                    i = 0;
                }else{
                    i++;
                    duration++;
                }
            }while (i != h_f);
        }else{
            m = (60 - m_i) + m_f;
            if(h_i < h_f){
                do{
                    if(i == 23){
                        i = 0;
                    }else{
                        i++;
                        duration++;
                    }
                }while (i != h_f);
                duration -= 1;
            }else{
                do{
                    if(i == 23){
                        i = 0;
                    }else{
                        i++;
                        duration++;
                    }
                }while (i != h_f);
            }
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration, m);
    return 0;
}