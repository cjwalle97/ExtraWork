#include <iostream>
//1).
void Reverse(char Word[])
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
	//4).
	bool operator ==(Cat other) {
		if (mName == other.mName && mAge == other.mAge)
		{
			return  true;
		}
	}
};

//5).
void evenArray(int numbers[], int size)
{
	int num = 0;
	for (int i = 0; i < size; i++)
	{
		num += 2;
		numbers[i] = num;
	}
}

//6).
//int FindLargest(int a)
//{
//
//}

//7).
int PrintFB()
{
	
	for (int i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		if (i % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << '%i' << std::endl;
		}
	}
	return list[101]
}

//8).
int main()
{
	char Word[12] = "Christopher";
	char Reverse(Word[12]);

	//3).

	int Test[10];
	evenArray(Test, 10);
	int PrintFB();
}