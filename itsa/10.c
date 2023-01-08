#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char abc[26]={0};
    char typein[100];
    int cunt=1;
    scanf("%[^\n]",&typein);

    char tmp[strlen(typein)];

    for(int i=0; i<strlen(typein); i++){
        tmp[i]=tolower(typein[i]);
        if(tmp[i]==' '){
            cunt++;
        }
    }
    //printf("%s\n", tmp);
    //printf("%d\n", strlen(typein));
    char cmp='a';
    for(int j=0;j<26;j++){
        for(int i=0; i<strlen(tmp); i++){
            if(tmp[i]==cmp){
                abc[j]++;
            }

        }
        cmp++;
    }

    cmp='a';
    //printf("%d\n", cunt);
    printf("%d\n", cunt);
    for(int i=0;i<26;i++){
        if(abc[i]!=0){
            printf("%c : %d\n", cmp,abc[i]);
        }
        cmp++;
    }
    return 0;
}
