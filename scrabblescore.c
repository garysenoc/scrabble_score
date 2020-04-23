#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int con(char al);
int main()
{
	
	int i=0,score=0;
	char ch[100];
	
	
	scanf("%s",ch);
	
	while(ch[i] !='\0')
		score += con(ch[i++]);
	
	printf("%d",score);
	return 0;
}

int con(char al){
	
	int score=0;
	
	if(tolower(al)== 'a' || tolower(al) == 'e' || tolower(al) == 'i'|| tolower(al) == 'l' || tolower(al) == 'n'|| tolower(al) == 'o' || tolower(al) == 'r'|| tolower(al) == 's' || tolower(al) == 't'|| tolower(al) == 'u' ){
		score=1;
	}
	else if(tolower(al) == 'd' || tolower(al) == 'g'){
		score=2;
	}
	else if(tolower(al) == 'b' || tolower(al) == 'c' || tolower(al) == 'm'|| tolower(al) == 'p'){
		score=3;
	}
	else if(tolower(al) == 'f' || tolower(al) == 'h' || tolower(al) == 'v' || tolower(al) == 'w' || tolower(al) == 'y'){
	score=4;
	}
	else if(tolower(al) == 'k' ){
		score=5;
	}
	else if(tolower(al) == 'j' || tolower(al) == 'x' ){
		score=8;
	}
	else if(tolower(al) == 'q' || tolower(al) == 'z'){
		score=10;
	}
	
	return score;
}







