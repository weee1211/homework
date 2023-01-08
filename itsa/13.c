#include<stdio.h>
#include<ctype.h>

int main(){
    char text[500],input[500], tmp,i=0,j=0;
    int key=-4;

    gets(text);
    scanf("%d",&key);

    /*for(int k=0;k<strlen(text)-1;k++){
        printf("%c",text[k]);
    }*/

    for (int i = 0;i<strlen(text); i++) {
        tmp = text[i];
        if (isalnum(tmp)) {

            if (islower(tmp)) {
            tmp = (tmp - 'a' + key) % 26 + 'a';

            }

            if (isupper(tmp)) {
            tmp = (tmp - 'A' + key) % 26 + 'A';

            }

            if (isdigit(tmp)) {
            tmp = (tmp - '0' + key) % 10 + '0';

            }
        }

        text[i] = tmp;
        j+=1;
    }

    for(int k=0;k<j;k++){
        printf("%c",text[k]);
    }
    printf("\n");
    return 0;
}
