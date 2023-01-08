#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int mySqrt(int dec) {                              //找到輸入值的平方根
  if  (dec <=  1 )  return  dec;
  unsigned int  left = 0 ,right = dec;

  while  ( left  <  right ) {
    unsigned int mid = left + ( right - left )/ 2 ;
    if(dec/mid >= mid){
      left = mid + 1 ;
    }
    else{
      right = mid;
    }
  }
  return right - 1;
}


int main(void) {
  int flor, dec;

  while (scanf("%d", &dec) != EOF) {
    bool flag = true;
    if (dec == 0|| dec == 1) {
      printf("NO\n");
      continue;
    }

    flor = mySqrt(dec);
    for (int count = 2; count <= flor; count++) {
      if (dec % count == 0) {
        flag = false;
        printf("NO\n");
        break;
      }
    }
    if (flag == true) {
      printf("YES\n");
    }
  }
  return 0;
}
