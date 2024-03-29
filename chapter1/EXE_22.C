#include <stdio.h>
#define LIMIT 20

void printline(int pos);
int newlinepos(int pos);
int checkblank(int pos);
char line[LIMIT];

void main(){
	int pos=0, c;
	while((c = getchar()) != EOF){
		 line[pos] = c;
		 if(c == '\n'){
			printline(pos);
			pos = 0;
		 }else if( ++pos >= LIMIT ){
                  pos = checkblank(pos);
			printline(pos);
			pos = newlinepos(pos);
		 }
	}
	getch();
	clrscr();
}

void printline(int pos){
	int i;
	for(i =0; i<pos; ++i){
		putchar(line[i]);
	}
	if(pos >0){
		putchar('\n');
	}
}
int newlinepos(int pos){
	int i, j;
	if(pos <= 0 ||pos >= LIMIT) {
		return 0;
	}else{
		i =0;
		for( j= pos ; j< LIMIT; ++j){
			++i;
			line[i] = line[j];
		}
		return i;
	}
}

int checkblank(int pos){
       if( pos > 0)
        while( line[pos] != ' ')
            --pos;
       if(pos == 0)
        return LIMIT;
       else
        return pos + 1;
}