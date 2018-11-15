int OPTION1()
{
  int led_rouge[]={2,3,4,5,6,7,8,9,10,11};
int temps = 200;
     digitalWrite(led_rouge[0], HIGH);
     digitalWrite(led_rouge[1], HIGH);
     digitalWrite(led_rouge[2], HIGH);
     digitalWrite(led_rouge[3], HIGH);
     digitalWrite(led_rouge[4], HIGH);
     digitalWrite(led_rouge[5], HIGH);
     digitalWrite(led_rouge[6], HIGH);
     digitalWrite(led_rouge[7], HIGH);
     digitalWrite(led_rouge[8], HIGH);
     digitalWrite(led_rouge[9], HIGH);
     delay(temps);
  
     digitalWrite(led_rouge[0], LOW);
     digitalWrite(led_rouge[1], LOW);
     digitalWrite(led_rouge[2], LOW);
     digitalWrite(led_rouge[3], LOW);
     digitalWrite(led_rouge[4], LOW);
     digitalWrite(led_rouge[5], LOW);
     digitalWrite(led_rouge[6], LOW);
     digitalWrite(led_rouge[7], LOW);
     digitalWrite(led_rouge[8], LOW);
     digitalWrite(led_rouge[9], LOW);
     delay(temps);
  
}

int OPTION2()
{
  int led_rouge[]={2,3,4,5,6,7,8,9,10,11};
int temps = 200;
    int i = 0;

     for(i = 0; i < 10; i++)
     {
       digitalWrite(led_rouge[i], HIGH);
       delay(temps);
       digitalWrite(led_rouge[i], LOW);
       delay(temps);
     }
  
}


int OPTION3()
{
  int led_rouge[]={2,3,4,5,6,7,8,9,10,11};
int temps = 200;
     digitalWrite(led_rouge[0], HIGH);
     digitalWrite(led_rouge[2], HIGH);
     digitalWrite(led_rouge[4], HIGH);
     digitalWrite(led_rouge[6], HIGH);
     digitalWrite(led_rouge[8], HIGH);
     delay(temps);

     digitalWrite(led_rouge[0], LOW);
     digitalWrite(led_rouge[2], LOW);
     digitalWrite(led_rouge[4], LOW);
     digitalWrite(led_rouge[6], LOW);
     digitalWrite(led_rouge[8], LOW);
     delay(temps);

     digitalWrite(led_rouge[1], HIGH);
     digitalWrite(led_rouge[3], HIGH);
     digitalWrite(led_rouge[5], HIGH);
     digitalWrite(led_rouge[7], HIGH);
     digitalWrite(led_rouge[9], HIGH);
     delay(temps);

     digitalWrite(led_rouge[1], LOW);
     digitalWrite(led_rouge[3], LOW);
     digitalWrite(led_rouge[5], LOW);
     digitalWrite(led_rouge[7], LOW);
     digitalWrite(led_rouge[9], LOW);
     delay(temps); 

}  

int OPTION4()
{
  int led_rouge[]={2,3,4,5,6,7,8,9,10,11};
int temps = 200;
    digitalWrite(led_rouge[2], HIGH);
    digitalWrite(led_rouge[3], HIGH);
    digitalWrite(led_rouge[7], HIGH);
    digitalWrite(led_rouge[8], HIGH);
    delay(temps);

    digitalWrite(led_rouge[2], LOW);
    digitalWrite(led_rouge[3], LOW);
    digitalWrite(led_rouge[7], LOW);
    digitalWrite(led_rouge[8], LOW);
    delay(temps);


    digitalWrite(led_rouge[0], HIGH);
    digitalWrite(led_rouge[1], HIGH);
    digitalWrite(led_rouge[9], HIGH);
    delay(temps);

    digitalWrite(led_rouge[0], LOW);
    digitalWrite(led_rouge[1], LOW);
    digitalWrite(led_rouge[9], LOW);
    delay(temps);


    digitalWrite(led_rouge[4], HIGH);
    digitalWrite(led_rouge[5], HIGH);
    digitalWrite(led_rouge[6], HIGH);
    delay(temps);

    digitalWrite(led_rouge[4], LOW);
    digitalWrite(led_rouge[5], LOW);
    digitalWrite(led_rouge[6], LOW);
    delay(temps);

}
