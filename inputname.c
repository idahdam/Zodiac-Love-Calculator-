#include "loveheader.h"

void nameInput(){
	for (x=0; x<2; x++)
	{
		printf("\t\tMasukkan nama: ");
		scanf("%s", &namaOrang[x]);
		printf("\t\tMasukkan tanggal lahir: ");
		scanf("%d/%d", &tanggalLahir[x][0], &tanggalLahir[x][1]);
	}
	                  
	zodiacAssign();
	printf("\t\t\n");
	
	printf("\t\t\n\n");
	
	
	printf("\t\t\n\n\n\n");
	printf("\t\t=====================      _____$$$$_________$$$$               ======================\n");
	printf("\t\t                           ___$$$$$$$$_____$$$$$$$$\n");
	printf("\t\t                           _$$$$$$$$$$$$_$$$$$$$$$$$$\n");
	printf("\t\t                           _$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t                           $$$$$$$$$$$$$$$$$$$$$$$$$$$\n"); 
	printf("\t\t        %s               $$$$$$$$$$$$$$$$$$$$$$$$$$$                   %s\n", namaOrang[0], namaOrang[1]);
	printf("\t\t        %d/%d               _$$$$$$$$$$$$$$$$$$$$$$$$$                      %d/%d\n", tanggalLahir[0][0], tanggalLahir[0][1], tanggalLahir[1][0], tanggalLahir[1][1]);
	printf("\t\t        %s               __$$$$$$$$$$$$$$$$$$$$$$$                     %s\n", zodiak[zodiacAssign(zodiacUser[0])], zodiak[zodiacAssign(zodiacUser[1])]);
	printf("\t\t                           ____$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t                           _______$$$$$$$$$$$$$\n");
	printf("\t\t                           __________$$$$$$$\n");
	printf("\t\t                           ____________$$$\n");
	printf("\t\t====================       _____________$                      ========================"); 
}
