#include <stdio.h>
#include <string.h>

int main(){
   char d[5];
   scanf("%s", d);
   
   if(strlen(d)==4) printf("20");
   else if(strlen(d)==3){
      if(d[1]=='0') printf("1%c", d[2]);
      else printf("1%c", d[0]);
   }
   else{
      printf("%d", d[0]+d[1]-'0'-'0');
   }
   return 0;
}
