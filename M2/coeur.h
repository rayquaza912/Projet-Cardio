int counter=0;

int lightAll() {

	//Power on all the LEDs simulteanously
	int led_rouge[]={2,3,4,5,6,7,8,9,10,11};
	int temps = 200;

	for (int i=0; i<10; i++) {
		digitalWrite(led_rouge[i], HIGH);
		delay(temps);
	}

	for(int i=0; i<10; i++) {
		digitalWrite(led_rouge[i], LOW);
	}
}

int chenille() {

	//Power on one LED at a time then the next
	int led_rouge[]={2,3,4,5,6,7,8,9,10,11};
	int temps = 20;

	for(int i=0; i<10; i++) {
		digitalWrite(led_rouge[i], HIGH);
		delay(temps);
		digitalWrite(led_rouge[i], LOW);
		delay(temps);
	}

}


int semiLED() {

	//Power on 1/2 LED
	int led_rouge[]={2,3,4,5,6,7,8,9,10,11};
	int temps = 200;

	if (counter%2==0) {
		for (int i=0; i<10; i+2) {
		digitalWrite(led_rouge[i], HIGH);
		}
	}

	else {
		for (int i=0; i<10; i+2) {
		digitalWrite(led_rouge[i], HIGH);
		}
	}

	delay(temps);
	digitalWrite(led_rouge[i], LOW);
	counter++;
}

int triLED() {

	//Power on 1/3 LED
	int led_rouge[]={2,3,4,5,6,7,8,9,10,11};
	int temps = 50;

	switch(counter%3) {
		case 0 :
			for (int i=0; i<10; i+3) {
				digitalWrite(led_rouge[i], HIGH);
			}
		break;

		case 1 :
			for (int i=3; i<10; i+3) {
				digitalWrite(led_rouge[i], HIGH);
			}
		break;

		case 2 :
			for (int i=6; i<10; i+3) {
				digitalWrite(led_rouge[i], HIGH);
			}
		break;

		default:
		lightAll();
	}

	delay(temps);
	digitalWrite(led_rouge[i], LOW);
	counter++;

}

int usrLED(int n) {

	//Power on the LED specified in param.h
	int led_rouge=n-1;
	int temps=200;

	digitalWrite(led_rouge, HIGH);
	delay(temps);
	digitalWrite(led_rouge, LOW);
	delay(temps);

}
