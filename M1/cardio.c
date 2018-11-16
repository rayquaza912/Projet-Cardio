int BPMs = 0;
int count = 0;

void setup(){
Serial.begin(9600);
}

void loop () {

int val=analogRead(A0);
  if (val>=15, val<=20) {
    delay(100);
    if (analogRead(A0)>val) {
      getSpike();
     }
  }
}

void getSpike() {
  int val=analogRead(A0);
  int currentBPM=0, maxBPM=0;

  while (analogRead(A0)>=15) {
    currentBPM = analogRead(A0);
    
    if (currentBPM > maxBPM) {
      maxBPM = currentBPM;
      }
    }

    if (maxBPM != 0 && maxBPM < 200) {
		int cTime = millis();
      	Serial.print(cTime);
      	Serial.print(" ; ");
		Serial.println(maxBPM);
    }

    maxBPM=0;
    currentBPM=0;
}

int getBPM() {
	
}
