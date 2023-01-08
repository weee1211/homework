#include<stdio.h>
#include <stdlib.h>
#include<string.h>

char input[100];
double text[10];
int main(){
    while(gets(input)!=NULL){

        sscanf(input,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&text[0],&text[1],&text[2],&text[3],&text[4],&text[5],&text[6],&text[7],&text[8],&text[9],&text[10]);

        for(int i=0;i<10;++i){
            for(int j=0;j<i;++j){
                if(text[j]>text[i]){
                    double tmp=text[j];
                    text[j]=text[i];
                    text[i]=tmp;
                }
            }
        }
    printf("maximum:%.2lf\n",text[9]);
    printf("minimum:%.2lf\n",text[0]);
    }
    return 0;
}
