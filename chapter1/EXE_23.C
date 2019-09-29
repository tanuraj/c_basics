#include<stdio.h>

void checkComment(int c);
void commentedText(void);

void main()
{
    int c;
    while((c=getchar())!=EOF){
	checkComment(c);
    }
    getch();
    clrscr();
}

void checkComment(int c)
{
	int d;
	if( c == '/')
	{
		if((d=getchar())=='*'){
			commentedText();
		}else if( d == '/'){
			putchar(c);
			checkComment(d);
		}else{
			putchar(c);
			putchar(d);
		}
	}else{
		putchar(c);
	}
}


void commentedText()
{
    int c,d;
    c = getchar();
    d = getchar();

    while(c!='*' || d !='/')
    {
        c =d;
        d = getchar();
    }
}
