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




int main(void){

int choix = 2;

struct inv minv =  {50,1,3,1,1,1,};

printf("==============================================================================\nLa partie commence\n\nAppuyez sur 1 pour ouvrir votre inventaire\n\n");

scanf("%d",&choix);

while(choix == 1){

printf("Voici ce que vous avez sur vous :\n\n\n%d x Gold coin(s)\n\n %d x Map \n\n %d x Potion(s)\n\n %d x Shield\n\n %d x Sword \n\n %d x Rope\n",minv.gold,minv.map,minv.potion,minv.sword,minv.shield,minv.rope);

choix = choix + 1;

}










return 0;

}
