#include<stdio.h>
void main(){
	int ch[128], c, i, j;
	while((c= getchar()) != EOF){
		printf("%d",ch[c]);
	}
	for(i=0; i<128; i++){
		putchar(i);
		for(j=0; j<ch[i]; j++){
			putchar('*');
		}
		putchar('\n');
	}
	getch();
	clrscr();
}