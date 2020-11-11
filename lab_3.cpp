// lab_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <Windows.h>


using namespace std;

#define ваня_напиши cout 
#define ваня_запиши cin 



int gmas[10];

int& getEL(int i) {
	return gmas[i];
}

void dec(int &v) {
	v--;
}

enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

void SetColor(ConsoleColor text, ConsoleColor background)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((background << 4) | text));
}
void SetColor(ConsoleColor text)
{
	SetColor(text, Black);
}

void ColorDefault()
{
	SetColor(White, Black);
}

int main()
{
	

	setlocale(LC_ALL, "ru");
	/*int a = 5;
	dec(a);
	ваня_напиши << a;*/
	
	int a;
	ваня_запиши >> a;
	dec(a);
	ваня_напиши << "элемент декремента: " << a << endl;

	

	int bc;
	
	ваня_напиши << "Введите номер массива: ";
	ваня_запиши >> bc;
	if (bc >= 10 || bc <0 )  {
		ваня_напиши << "Вы перешли границы массива!";
		return 0;
	}
	int& c = getEL(bc);
	ваня_напиши << endl;
	for (int i = 1; i < 10; i++) {
		gmas[i] = 1000 + i;
		if (i == bc) {
			SetColor(Red);
			
		}
		ваня_напиши << gmas[i] << " ";
		
		ColorDefault();
	}
	ваня_напиши << endl;
	ваня_напиши << c << endl;
	ваня_напиши << "Введите число для изменения: ";
	ваня_запиши >> c;
	ваня_напиши << endl;
	ваня_напиши << gmas[bc] << endl;
	for (int i = 1; i < 10; i++) {
		ваня_напиши << gmas[i] << " ";
	}

}


