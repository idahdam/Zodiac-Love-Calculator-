#include "loveheader.h"

int zodiacAssign(int x){				
					if(tanggalLahir[x][1]==12 && tanggalLahir[x][0] >= 22 || tanggalLahir[x][1] == 1 && tanggalLahir[x][0] <= 19){  
						z[x]=1;
						return 0;
						//printf("Your Zodiac Sign based on your Birth date is Capricorn\n"); 
					}
					else if(tanggalLahir[x][1] ==1 && tanggalLahir[x][0] >= 20 || tanggalLahir[x][1] == 2 && tanggalLahir[x][0] <= 17)
					{  
						z[x]=2;
						//printf("Your Zodiac Sign based on your Birth date is Aquarius\n");
						return 1; 
					}
					else if(tanggalLahir[x][1] == 2 && tanggalLahir[x][0] >= 18 || tanggalLahir[x][1] == 3 && tanggalLahir[x][0] <= 19)
					{  
						z[x]=3;
						//printf("Your Zodiac Sign based on your Birth date is Pisces\n");  
						return 2;
					}
					else if(tanggalLahir[x][1] == 3 && tanggalLahir[x][0] >= 20 || tanggalLahir[x][1] == 4 && tanggalLahir[x][0] <= 19)
					{  
						z[x]=4;
						//printf("Your Zodiac Sign based on your Birth date is Aries\n");  
						return 3;
					}
					else if(tanggalLahir[x][1] == 4 && tanggalLahir[x][0] >= 20 || tanggalLahir[x][1] == 5 && tanggalLahir[x][0] <= 20)
					{  
						z[x]=5;
						//printf("Your Zodiac Sign based on your Birth date is Taurus\n");  
						return 4;
					}
					else if(tanggalLahir[x][1] == 5 && tanggalLahir[x][0] >= 21 || tanggalLahir[x][1] == 6 && tanggalLahir[x][0] <= 20)
					{  
						z[x]=6;
						//printf("Your Zodiac Sign based on your Birth date is Gemini\n");  
						return 5;
					}
					else if(tanggalLahir[x][1] == 6 && tanggalLahir[x][0] >= 21 || tanggalLahir[x][1] == 7 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=7;
						//printf("Your Zodiac Sign based on your Birth date is Cancer\n"); 
						return 6; 
					}
					else if(tanggalLahir[x][1] == 7 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 8 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=8;
						return 7;
						//printf("Your Zodiac Sign based on your Birth date is Leo\n");  
					}
					else if(tanggalLahir[x][1] == 8 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 9 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=9;
						return 8;
						//printf("Your Zodiac Sign based on your Birth date is Virgo\n");  
					}
					else if(tanggalLahir[x][1] == 9 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 10 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=10;
						return 9;
						//printf("Your Zodiac Sign based on your Birth date is Libra\n");  
					}
					else if(tanggalLahir[x][1] == 10 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 11 && tanggalLahir[x][0] <= 21)
					{  
						z[x]=11;
						return 10;
						//printf("Your Zodiac Sign based on your Birth date is Scorpio\n");  
					}
					else if(tanggalLahir[x][1] == 11 && tanggalLahir[x][0] >= 22 || tanggalLahir[x][1] == 12 && tanggalLahir[x][0] <= 21)
					{  
						z[x]=12;
						return 11;
						//printf("Your Zodiac Sign based on your Birth date is Sagittarius\n");  
					}
				}
