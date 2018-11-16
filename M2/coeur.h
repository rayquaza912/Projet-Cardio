int OPTION1()//première forme d'éclairage 
{
  int led_rouge[]={2,3,4,5,6,7,8,9,10,11}; //variable led assignées aux ports digitaux de l'arduino
int temps = 200; // variable temps 
     digitalWrite(led_rouge[0], HIGH);//led 0 état haut...
     digitalWrite(led_rouge[1], HIGH);
     digitalWrite(led_rouge[2], HIGH);
     digitalWrite(led_rouge[3], HIGH);
     digitalWrite(led_rouge[4], HIGH);
     digitalWrite(led_rouge[5], HIGH);
     digitalWrite(led_rouge[6], HIGH);
     digitalWrite(led_rouge[7], HIGH);
     digitalWrite(led_rouge[8], HIGH);
     digitalWrite(led_rouge[9], HIGH);
     delay(temps);//durée des leds allumées 
  
     digitalWrite(led_rouge[0], LOW);//led 0 état bas...
     digitalWrite(led_rouge[1], LOW);
     digitalWrite(led_rouge[2], LOW);
     digitalWrite(led_rouge[3], LOW);
     digitalWrite(led_rouge[4], LOW);
     digitalWrite(led_rouge[5], LOW);
     digitalWrite(led_rouge[6], LOW);
     digitalWrite(led_rouge[7], LOW);
     digitalWrite(led_rouge[8], LOW);
     digitalWrite(led_rouge[9], LOW);
     delay(temps);//durée des leds éteintes 
  
}

int OPTION2()// deuxième forme d'éclairage 
{
  int led_rouge[]={2,3,4,5,6,7,8,9,10,11};//variable led assignées aux ports digitaux de l'arduino
int temps = 200;// variable temps 
    int i = 0; //déclaration de i-->compteur à 0

     for(i = 0; i < 10; i++)//pour i de 0 à 10 incrémentation de +1
     {
       digitalWrite(led_rouge[i], HIGH);//led i allumée
       delay(temps);//attente à l'état haut 
       digitalWrite(led_rouge[i], LOW);//led éteinte 
       delay(temps);//attente à l'état bas 
       /*cette fonction fait un affichage en mode "chenille" c'est-à-dire que dès qu'une led a fini la fonction la suivante le fait et ainsi de suite*/
     }
  
}


int OPTION3()//troisième forme d'éclairage 
{
  int led_rouge[]={2,3,4,5,6,7,8,9,10,11};//variable led assignées aux ports digitaux de l'arduino
int temps = 200;// variable temps 
     digitalWrite(led_rouge[0], HIGH);//led 0,2,4,6,8 état haut
     digitalWrite(led_rouge[2], HIGH);
     digitalWrite(led_rouge[4], HIGH);
     digitalWrite(led_rouge[6], HIGH);
     digitalWrite(led_rouge[8], HIGH);
     delay(temps);//attente à l'état haut 

     digitalWrite(led_rouge[0], LOW);//led 0,2,4,6,8 état bas
     digitalWrite(led_rouge[2], LOW);
     digitalWrite(led_rouge[4], LOW);
     digitalWrite(led_rouge[6], LOW);
     digitalWrite(led_rouge[8], LOW);
     delay(temps);//attente à l'état bas

     digitalWrite(led_rouge[1], HIGH);//led 1,3,5,7,9 état haut
     digitalWrite(led_rouge[3], HIGH);
     digitalWrite(led_rouge[5], HIGH);
     digitalWrite(led_rouge[7], HIGH);
     digitalWrite(led_rouge[9], HIGH);
     delay(temps);//attente à l'état haut 

     digitalWrite(led_rouge[1], LOW);//led 1,3,5,7,9 état bas
     digitalWrite(led_rouge[3], LOW);
     digitalWrite(led_rouge[5], LOW);
     digitalWrite(led_rouge[7], LOW);
     digitalWrite(led_rouge[9], LOW);
     delay(temps);//attente à l'état bas 
     /*cette fonction allume une LED sur deux donc toutes les LED paires cligotent puis celles impaires*/

}  

int OPTION4()//quatrième forme d'éclairage 
{
  int led_rouge[]={2,3,4,5,6,7,8,9,10,11};//variable led assignées aux ports digitaux de l'arduino
int temps = 200;// variable temps 
    digitalWrite(led_rouge[2], HIGH);//led 2,3,7,8 état haut 
    digitalWrite(led_rouge[3], HIGH);
    digitalWrite(led_rouge[7], HIGH);
    digitalWrite(led_rouge[8], HIGH);
    delay(temps);//attente à l'état haut 

    digitalWrite(led_rouge[2], LOW);//led 2,3,7,8 état bas 
    digitalWrite(led_rouge[3], LOW);
    digitalWrite(led_rouge[7], LOW);
    digitalWrite(led_rouge[8], LOW);
    delay(temps);//attente à l'état bas 


    digitalWrite(led_rouge[0], HIGH);//led 0,1,9 état haut 
    digitalWrite(led_rouge[1], HIGH);
    digitalWrite(led_rouge[9], HIGH);
    delay(temps);//attente à l'état haut 

    digitalWrite(led_rouge[0], LOW);//led 0,1,9 état bas
    digitalWrite(led_rouge[1], LOW);
    digitalWrite(led_rouge[9], LOW);
    delay(temps);//attente à l'état bas 


    digitalWrite(led_rouge[4], HIGH);//led 4,5,6 état haut 
    digitalWrite(led_rouge[5], HIGH);
    digitalWrite(led_rouge[6], HIGH);
    delay(temps);//attente à l'état haut 

    digitalWrite(led_rouge[4], LOW);//led 4,5,6 état haut 
    digitalWrite(led_rouge[5], LOW);
    digitalWrite(led_rouge[6], LOW);
    delay(temps);//attente à l'état bas 
    
    /*cette fonction allume une LED sur trois sur le même principe que la précédente*/
}

int OPTION5(n) {
	int temps=200;

	digitalWrite(led_rouge[n+1], HIGH);
	delay(temps);
	digitalWrite(led_rouge[n+1], LOW);
	delay(temps);

}
