#include <stdio.h>
#include <string.h>
int main(){
    char cmp[200], string[600];

    while(scanf("%s",&cmp)!=EOF){

        scanf("%*c%s",&string);

        int count=0;

        for(int i=0; i<strlen(string); i++){
            if(!strncmp(string+i,cmp,strlen(cmp))){
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
