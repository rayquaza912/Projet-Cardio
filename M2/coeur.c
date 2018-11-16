/*---------Bibliothèque et fichier d'entête---------*/
#include "param.h"
#include "coeur.h"

/*---------Déclaration des variables---------*/
int led_rouge[]={2,3,4,5,6,7,8,9,10,11};
int temps = 200;

/*---------Void setup---------*/
void setup() {
 int i = 0;
   for(i=0; i<10; i++)
    {
      pinMode(led_rouge[i], OUTPUT);
    }

}
/*---------void loop---------*/ 
void loop()
{

 //conditionnel si... sinon... si... avec appel à fonction dans un fichier d'entête
   if(OPTION==1)
   {
    
    OPTION1();

   }
   else if(OPTION==2)
   {
    
     OPTION2();

   }
   else if(OPTION==3)
   {

    OPTION3();
     
   }else if(OPTION==4)
   {
    
    OPTION4();
    
   }
	else if(OPTION==5)
	{
	OPTION5(LED);
	}
   
}
