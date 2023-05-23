#include <stdio.h>

int clearBuffer(char* screenBuf, int width, int height)
{
	int i = 0;
	int j = 0;

	while (j < height)
	{
		while ( i < width +1 )
		{
			if( i == width)
				
				screenBuf[i + (j * (width + 1))] = '\n';
			
			else
			{
				if(i == 0 || i == 1 || i == (width - 1) || i == (width -2) || j == 0 || j == (height -1 ))
			
					screenBuf[i + (j * (width + 1))] = '#';
			
				else
			
					screenBuf[i + (j * (width + 1))] = ' ';
			}
			i = i + 1;
			
		}
		i = 0;
		j = j + 1;
	}

	screenBuf[height * (width + 1) - 1] = '\0';

}
int writeStringToBuffer(const char* string, int x, int y, char* screenBuf, int width, int height)
{
	int pos = x + (y * (width + 1));
	int i = 0;

	while (string[i] != '\0')
	{
		screenBuf[pos + i] = string[i];
		i++;
	}
	return 0;
}
int setTitleToScreenBuffer(char* screenBuf, int width, int height)
{
	clearBuffer(screenBuf, 30, 15);

	const char* title = "Welcome to My Game";
	writeStringToBuffer("Human", 4, 4,screenBuf,width,height);
		
	
	printf("%s\ninput>\n", screenBuf);

	return 0;

}
int setPlayGameToScreenBuffer(char* screenBuf, int width, int height)
{
	clearBuffer(screenBuf, 30, 15);

	const char* playgame = "Play Game";
	writeStringToBuffer("eat" , 5 ,5,screenBuf,width,height);
	
	printf("%s\ninput>\n", screenBuf);

	return  0;
}
int setGameOverToScreenBuffer(char* screenBuf, int width, int height)
{
	clearBuffer(screenBuf, 30, 15);

	const char* gameover = "Game over";
	writeStringToBuffer("sleep" ,5,5,screenBuf,width,height);
	printf("%s\ninput>\n", screenBuf);
}
int main()
{
        char screenBuf[450 + 1];
        int width = 30;
        int height = 15;
	int p = 0;
	int q = 1;

	clearBuffer(screenBuf,30,15);

	while(q)
	{
		setTitleToScreenBuffer(screenBuf,30,15);
		scanf("%d", &q);
		if( q == 1) {
			setPlayGameToScreenBuffer(screenBuf,30,15);
		}
		else if(q == 2) {
			setGameOverToScreenBuffer(screenBuf,30,15);
		}
	}

        return 0;
}

