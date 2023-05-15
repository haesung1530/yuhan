#include <stdio.h>

int main()
{
	char input[10]; /*길이가 10인 문자형 배열*/
	char sc[465];
	int a = 0;
	while(a < 465)
	{
		if(a % 31 == 30){
			sc[a] = '\n';
		}
		else{
			sc[a] = ' ';
			if(a % 31 == 0)
			{
				sc[a] = '+';
			}
			else if(a % 31 == 29)
			{
				sc[a] = '+';
			}
			else if(a <= 28)
			{
				sc[a] = '+';
			}
			else if(a >= 434)
			{
				sc[a] = '+';
			}
		}
		a = a+1;
	}
	
	{	
		char asd[5] = "human";
		int qwer = 0;
		while( qwer <5)
		{
			sc[qwer+10+31*4] = asd[qwer];
			qwer++;
		}
	}
	char ac[465];
	int b = 0;
	while(b < 465)
	{
		if(b % 31 == 30){
			ac[b] = '\n';
		}
		else{
			ac[b] = ' ';
			if(b %31 == 0)
			{
				ac[b] = '!';
			}
			else if(b % 31 == 29)
			{
				ac[b] = '!';
			}
			else if(b <= 28)
			{
				ac[b] = '!';
			}
			else if(b >= 434)
			{
				ac[b] = '!';
			}
		}
		b = b+1;
	}
	{
		char fgh[3] = "eat";
		int asdf = 0;
		while(asdf < 3)
		{
			ac[asdf+11+31*4] = fgh[asdf];
			asdf++;
		}
	}
	char tq[465];
	int c = 0;
	while(c < 465)
	{
		if(c % 31 == 30){
			tq[c] = '\n';
		}
		else{
			tq[c] = ' ';
			if(c % 31 == 0)
			{
				tq[c] = '*';
			}
			else if(c % 31 == 29)
			{
				tq[c] = '*';
			}
			else if(c <= 28)
			{
				tq[c] = '*';
			}
			else if(c >= 434)
			{
				tq[c] = '*';
			}
		}
		c = c + 1;
	}
	{
		char jkl[5] = "sleep";
		int zxcv = 0;
		while(zxcv < 5)
		{
			tq[zxcv+10+31*4] = jkl[zxcv];
			zxcv++;
		}
	}
	

	sc[464] = '\0';
	int ab = 0;
	int dbal =1;
	while(dbal)
	{
			printf("%s", sc);
			printf("\ninput>");
			scanf("%d", &ab);
			if (ab == 1) {
				printf("%s", ac);
				continue;
			}
			else if (ab == 2) {
				printf("%s", tq);
				continue;
			}
		
	}
	
		
	return 0;

}
			
