#ifndef LOVE_HEADER_H	
	#define LOVE_HEADER_H
	
	#include <stdio.h>
	#include <string.h>
	#include <conio.h>
	#include <stdlib.h>
	#include <windows.h>
	#include <time.h>
	
	int  x,i,d,n;
	int  z[2];
	int  tanggalLahir[2][2];
	int  zodiacUser[2] = {0, 1};
	
	char namaOrang[2][100];
	char zodiak[12][100]={"Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius"};
	
	int main();
	void mainMenu();
	void nameInput();
	int zodiacAssign(int x);
	void loveCalculator();
	void exitMessage();

#endif
