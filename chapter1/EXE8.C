#include<stdio.h>
void main(){
	int blank, tab, newline, c;
	blank = tab = newline = 0;
	while((c= getchar()) != EOF){
		if(c == ' '){
		       ++blank;
		}
		if(c == '\t'){
			++tab;
		}
		if(c == '\n'){
			 ++newline;
		}
	}
	printf("Blanks : %d\nTabs : %d\nNewlinec : %d",blank,tab,newline);
	getch();
	clrscr();
}