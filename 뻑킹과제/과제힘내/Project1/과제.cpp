#include <stdio.h>
#include <windows.h>



int clearBuffer(char* screenBuf, int width, int height)
{
	int i = 0;
	int j = 0;

	while (j < height)
	{
		while (i < width + 1)
		{
			if (i == width)

				screenBuf[i + (j * (width + 1))] = '\n';

			else
			{
				if (i == 0 || i == 1 || i == (width - 1) || i == (width - 2) || j == 0 || j == (height - 1))

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

	return 0;

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
	writeStringToBuffer("+++++++", 11, 4, screenBuf, width, height);
	writeStringToBuffer("++     ++", 10, 5, screenBuf, width, height);
	writeStringToBuffer("++ O O ++", 10, 6, screenBuf, width, height);
	writeStringToBuffer("++  W  ++", 10, 7, screenBuf, width, height);
	writeStringToBuffer("+++++++", 11, 8, screenBuf, width, height);
	writeStringToBuffer("*****", 12, 9, screenBuf, width, height);
	writeStringToBuffer("*******", 11, 10, screenBuf, width, height);
	writeStringToBuffer("*********", 10, 11, screenBuf, width, height);
	writeStringToBuffer("***********", 9, 12, screenBuf, width, height);
	writeStringToBuffer("*************", 8, 13, screenBuf, width, height);



	printf("%s\n", screenBuf);

	return 0;

}
int setPlayGameToScreenBuffer(char* screenBuf, int width, int height)
{
	clearBuffer(screenBuf, 30, 15);

	const char* playgame = "Play Game";
	writeStringToBuffer("--((((---ㅁㅁㅁㅁ", 11, 5, screenBuf, width, height);
	writeStringToBuffer("--))))---ㅁㅁㅁㅁ", 11, 6, screenBuf, width, height);
	writeStringToBuffer("((((", 13, 7, screenBuf, width, height);
	writeStringToBuffer("))))", 13, 8, screenBuf, width, height);
	writeStringToBuffer("((((", 13, 9, screenBuf, width, height);
	writeStringToBuffer("))))", 13, 10, screenBuf, width, height);
	writeStringToBuffer("************", 9, 11, screenBuf, width, height);
	writeStringToBuffer("**********", 10, 12, screenBuf, width, height);
	writeStringToBuffer("********", 11, 13, screenBuf, width, height);

	printf("%s\n", screenBuf);

	return  0;
}
int setGameOverToScreenBuffer(char* screenBuf, int width, int height)
{
	clearBuffer(screenBuf, 30, 15);

	const char* gameover = "Game over";
	writeStringToBuffer("zz", 17, 2, screenBuf, width, height);
	writeStringToBuffer("zz", 16, 3, screenBuf, width, height);
	writeStringToBuffer("zz", 15, 4, screenBuf, width, height);
	writeStringToBuffer("_____", 12, 6, screenBuf, width, height);
	writeStringToBuffer("|_ _|", 12, 7, screenBuf, width, height);
	writeStringToBuffer("| w |", 12, 8, screenBuf, width, height);
	writeStringToBuffer("***********", 9, 9, screenBuf, width, height);
	writeStringToBuffer("***********", 9, 10, screenBuf, width, height);
	writeStringToBuffer("***********", 9, 11, screenBuf, width, height);
	writeStringToBuffer("***********", 9, 12, screenBuf, width, height);
	writeStringToBuffer("***********", 9, 13, screenBuf, width, height);
	

	

	printf("%s\n", screenBuf);
	
	return 0;
}
int setGGToScreenBuffer(char* screenBuf, int width, int height)
{
	clearBuffer(screenBuf, 30, 15);

	const char* GG = "GG";
	writeStringToBuffer("++++++++", 9, 3, screenBuf, width, height);
	writeStringToBuffer("++      ++     `", 8, 4, screenBuf, width, height);
	writeStringToBuffer("++ ㅠㅠ ++ㅁㅁㅁㅁ", 8, 5, screenBuf, width, height);
	writeStringToBuffer("++  ㅜ  ++    ㅁ", 8, 6, screenBuf, width, height);
	writeStringToBuffer("++++++++      |", 9, 7, screenBuf, width, height);
	writeStringToBuffer("******       |", 10, 8, screenBuf, width, height);
	writeStringToBuffer("********     |", 9, 9, screenBuf, width, height);
	writeStringToBuffer("**********---|", 8, 10, screenBuf, width, height);

	printf("%s\n", screenBuf);

	return 0;
}
int setDDToScreenBuffer(char* screenBuf, int width, int height)
{
	clearBuffer(screenBuf, 30, 15);

	const char* DD = "DD";
	writeStringToBuffer("Game Over", 10, 8, screenBuf, width, height);
	
	printf("%s\n", screenBuf);

	return 0;
}
int main()
{
	char screenBuf[450 + 1];
	int width = 30;
	int height = 15;
	int p = 0;
	int q = 1;
	COORD Cur = { 0,0 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007");
	Sleep(1000);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷▶\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷▶▷\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷▶▷▶\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷▶▷▶▷\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷▶▷▶▷▶\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷▶▷▶▷▶▷\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷▶▷▶▷▶▷▶\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷▶▷▶▷▶▷▶▷\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷▶▷▶▷▶▷▶▷▶\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007▷▶▷▶▷▶▷▶▷▶▷▶▷▶▷▶▷\n\n");
	Sleep(500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007                Start\n\n");
	Sleep(1000);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007Welcome 아잉에 생활에\n\n");
	Sleep(1000);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007          1. 밥을 먹는다.\n\n");
	Sleep(1000);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007          2. 잠을 잔다.\n\n");
	Sleep(1000);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007          3. 죽어...볼까?\n\n");
	Sleep(1000);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\007          버튼을 눌러보세요!\n\n");
	Sleep(1000);
	

	clearBuffer(screenBuf, 30, 15);

	while (q)
	{
		scanf("%d", &q);
		if (q == 1) {
			setTitleToScreenBuffer(screenBuf, 30, 15);
			setPlayGameToScreenBuffer(screenBuf, 30, 15);
		}
		else if (q == 2) {
			setTitleToScreenBuffer(screenBuf, 30, 15);
			setGameOverToScreenBuffer(screenBuf, 30, 15);
		}
		else if (q == 3) {
			setGGToScreenBuffer(screenBuf, 30, 15);
			setDDToScreenBuffer(screenBuf, 30, 15);
		}
		
	}
	return 0;
}