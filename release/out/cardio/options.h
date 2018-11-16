#include "param.h"
#include "coeur.h"

int led_rouge[]={2,3,4,5,6,7,8,9,10,11};
int temps = 200;


void declareLED() {

	int i = 0;
	for(i=0; i<10; i++) {
		pinMode(led_rouge[i], OUTPUT);
	}

}

void pushLED() {

	switch(OPTION) {
		case 1 :
		//Power on all LEDs
		lightAll();
		break;

		case 2 :
		//Power on one LED at a time then the next
		chenille();
		break;

		case 3 :
		//Power on 1/2 LED
		semiLED();
		break;

		case 4 :
		//Power on 1/3 LED
		triLED();
		break;

		case 5 :
		//Power on the LED specified in param.h
		usrLED(LED);
		break;
	}

}
