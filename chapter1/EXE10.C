#include<stdio.h>
void main(){
	int c;
	while((c= getchar()) != EOF){
		if(c == ' '){
			putchar('\\');
			putchar('b');
		}else if(c == '\t'){
			putchar('\\');
			putchar('t');
		}else if(c == '\\'){
			putchar('\\');
			putchar('\\');
		}else{
			putchar(c);
		}

	}
	getch();
	clrscr();
}