#include <iostream>
//1).
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
//2).
class Cat
{
private:
	char mName;
	int mAge;
public:
	Cat() {};
	Cat(char a, int b) {
		mName = a;
		mAge = b;
	}
	void Rename(char other)
	{
		mName = other;
	}
};



//4).

//5).

//6).

//7).

//8).
int main()
{
	char Word[12] = "Christopher";
	char Reverse(Word[12]);
	//3).
	
}