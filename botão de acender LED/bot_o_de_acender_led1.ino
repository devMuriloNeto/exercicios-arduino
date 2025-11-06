// C++ code
//MURILO NUNES NETO 
//2225202058

int led = 10;
int botao = 11;

int estadoBotao = 0;

void setup() {
	pinMode(led,OUTPUT);
  	pinMode(botao,INPUT);
}

void loop() {
  estadoBotao = digitalRead(botao);
  
  if(estadoBotao == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}