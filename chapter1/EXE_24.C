#include<stdio.h>

void check(int c);
void commentedText(void);
int bCount = 0, brCount=0, pCount=0;

void main()
{
    int c;
    while((c=getchar()) != EOF){
	if(c == '/'){
		if((c=getchar()) == '*'){
			commentedText();
		}else{
			check(c);
		}
	}else{
		 check(c);
	}
    }

    printf("Braces missing: %d\n",bCount);
    printf("Bracket missing: %d\n",brCount);
    printf("Parentheses missing: %d\n",pCount);

    getch();
    clrscr();
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

void check(int c){

	if( c == '{' ){
		++bCount;
	}else if(c == '}' ){
		--bCount;
	}else if(c == '('){
		++brCount;
	}else if(c == ')'){
		--brCount;
	}else if(c == '['){
		++pCount;
	}else if(c == ']'){
		--pCount;
	}
}