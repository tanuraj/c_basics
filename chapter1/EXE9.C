#include<stdio.h>
void main(){
	int blank=0 , c;
	while((c= getchar()) != EOF){
		if(c == ' '){
			if(blank == 0){
				blank = 1;
				putchar(c);
			}
		}else{
			blank = 0;
			putchar(c);
		}

	}
	getch();
	clrscr();
}