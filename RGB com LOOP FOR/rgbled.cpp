// C++ code
//MURILO NUNES NETO	
//2225202058

const byte LEDS[] = {9,10,11};

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(LEDS[i], OUTPUT);
  }
}


void loop() {

for (int i = 0; i < 3; i++) {
  for (int x = 0; x < 255; x++)
  analogWrite(LEDS[i], x);
  }
}
