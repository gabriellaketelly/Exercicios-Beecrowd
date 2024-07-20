#include<stdio.h>
int main(){
    int d, h, m, s, df, hf, mf, sf, c1, c2, c3, c4;
  scanf("Dia %d", &d);
  scanf("%d : %d : %d", &h, &m, &s);
  scanf("Dia %d", &df);
  scanf("%d : %d : %d", &hf, &mf, &sf);

        if(d==df){
            c1= 0;
        } else{
            c1=df-d-1;
        }
        if(h<hf){
            c2=(24-h)+hf;
        } else{
            c2=hf-h;
        }
        if(m<mf){
            c3= (60-m)+mf;
            c2= c2-1;
        }else {
            c3=mf-m;
        }
        if(s<sf){
            c4= (60-s)+sf;
          c3= c3-1;
        }else {
            c4=sf-s;
        }

        

        printf("%d dia(s)\n", c1);
        printf("%d horas(s)\n", c2); 
        printf("%d minutos(s)\n", c3);
        printf("%d segundos(s)\n", c4); 

        return 0;
}
