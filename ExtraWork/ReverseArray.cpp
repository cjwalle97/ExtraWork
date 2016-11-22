#include <iostream>

class String
{
private:
	char Word[255];
public:
	String() {};
	String(char a) {
		a = Word[255];
	}
	String Reverse()
	{
		int i = 0;
		for (; Word[i] != '\0'; i++)
		{

		}
		for (int k = 0; k != i / 2; i++)
		{
			char temp = Word[k];
			Word[k] = Word[i - 1 - k];
			Word[i - 1 - k] = temp;
		}
	}
};

int main()
{
	String a = "chris";
	String b = a.Reverse;
}