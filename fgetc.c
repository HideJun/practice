#include <stdio.h>

int main(void){
  FILE *fp = fopen("test.txt", "r");
  if(fp != NULL) {
    char c[16];
    char *test = fgets(c,16, fp);
    do{
      printf(c);
      test = fgets(c,16, fp);
    }while(test!=NULL);


    fclose(fp);
    fp = NULL;
  } else {
    printf("실패!");
  }
  return 0;

}
