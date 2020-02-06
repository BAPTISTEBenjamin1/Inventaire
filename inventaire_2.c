#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


typedef struct Inventaire inv;

struct inv{

	int gold;
	int map;
	int potion;
	int rope;
	int sword;
	int shield;
	
	
};

typedef struct Inventaire minv;

struct minv{

	int gold;
	int map;
	int potion;
	int rope;
	int sword;
	int shield;
	
	
};


	

int main (void){






int choix = 0;

struct inv minv =  {50,1,3,1,1,1,};


printf("==============================================================================\nLa partie commence\n\nAppuyez sur 1 pour ouvrir votre inventaire\nAppuyez sur 2 pour ouvrir l'inventaire du marchant");

while(choix == 0){

	scanf("%d",&choix);

}



if (choix == 2){

printf("Bonjour cher ami, c'est un plaisir de faire affaires avec vous :\n\n\n%d x Gold coin(s)\n\n %d x Map \n\n %d x Potion(s)\n\n %d x Shield\n\n %d x Sword \n\n %d x Rope\n",minv.gold,minv.map,minv.potion,minv.sword,minv.shield,minv.rope);

choix = choix + 2;

}


if(choix == 1){

printf("Voici ce que vous avez sur vous :\n\n\n%d x Gold coin(s)\n\n %d x Map \n\n %d x Potion(s)\n\n %d x Shield\n\n %d x Sword \n\n %d x Rope\n",minv.gold,minv.map,minv.potion,minv.sword,minv.shield,minv.rope);

choix = choix - 1;

}










return 0;

}
