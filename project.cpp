char data;
void setup() {
  Serial.begin(9600);
  // Motor pinlərini Output olaraq təyin edin
}

void loop() {
  if(Serial.available() > 0) {
    data = Serial.read(); // Telefondan gələn simvolu oxu
    
    if(data == 'F') { // Forward - İrəli
      // Motorları irəli sürən kodlar
    }
    else if(data == 'S') { // Stop - Dayan
      // Motorları dayandıran kodlar
    }
  }
}
