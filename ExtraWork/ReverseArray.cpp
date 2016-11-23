#include <iostream>

char Reverse(char Word[])
{
	int i = 0;
	for (; Word[i] != '/0'; i++)
	{

	}
	for (int k = 0; k != i / 2; i++)
	{
		char temp = Word[k];
		Word[k] = Word[i - 1 - k];
		Word[i - 1 - k] = temp;
	}
}

int main()
{
	char Word[12] = "Christopher";
	char Reverse(Word[12]);
}