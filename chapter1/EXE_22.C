#include <stdio.h>
#define  TABSIZE 8
void main() {
      int space=0, tab=0, c, i;

      for (i=1; (c = getchar()) != EOF; ++i) {
            if (c == ' ') {
                  if((i % TABSIZE) == 0){
                        ++tab;
                        space = 0;
                  }else{
                        ++space;
                  }
            }else{
                  for( ; tab > 0; --tab){
                        putchar('\t');
                  }

                  if(c == '\t'){
                        space = 0;
                        
                        i = i + ( TABSIZE - (i-1) % TABSIZE) - 1;
                  }else{
                        for( ; space > 0; --space){
                  putchar('#');
                        }
                  }

                  putchar(c);

                  if( c == '\n'){
                        i = 0;
                  }
                  
            }
      }
      getch();
      clrscr();
}