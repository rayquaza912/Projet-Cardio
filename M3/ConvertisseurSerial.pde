import processing.serial.*;
PrintWriter output;
Serial udSerial;

void setup() {
  udSerial = new Serial(this, Serial.list()[0], 9600);
  //May change the 9600 to 115200
  output = createWriter ("pulses.csv");
}

  void draw() {
    if (udSerial.available() > 0) {
      String SenVal = udSerial.readString();
      if (SenVal != null) {
        output.println(SenVal);
      }
    }
  }

  void keyPressed(){
    output.flush();
    output.close();
    exit(); 
  }
