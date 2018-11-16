#include "options.h"

void setup(){

	declareLED();
	Serial.begin(9600);

}

void loop () {

	//Check if signal is at the edge of a block (a pulse)
	int val=analogRead(A0);
	if (val>=15, val<=20) {
		delay(100);
		//Is the signal entering or outgoing ?
    	if (analogRead(A0)>val) {
			getSpike();
		}
	}
}

void getSpike() {

	int val=analogRead(A0);
	int currentBPM=0, maxBPM=0;

	//Log everything in the block
	while (analogRead(A0)>=15) {
		currentBPM = analogRead(A0);

		//Keep the higher signal (spike)
		if (currentBPM > maxBPM) {
			maxBPM = currentBPM;
		}
	}

	//Remove the noise
	if (maxBPM != 0 && maxBPM < 200) {
		int cTime = millis();
		Serial.print(cTime);
		Serial.print(" ; ");
		Serial.println(maxBPM);
		pullLED();
	}
	
	//Reset block variables
	maxBPM=0;
	currentBPM=0;

}
