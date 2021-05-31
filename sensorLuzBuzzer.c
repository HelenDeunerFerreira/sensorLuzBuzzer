const int ldr = A5;
const int piezo = 3;
const int led = 2;
int potenciometro = A0;

void setup()
{pinMode(ldr, INPUT);
 pinMode(potenciometro, INPUT);
 
 pinMode(piezo, OUTPUT);
 pinMode(led, OUTPUT);
 
 Serial.begin(9600);
}

void loop()
{Serial.println(analogRead(ldr));
 Serial.println(analogRead(potenciometro));
 
 if(analogRead(ldr) < 200){
   tone(piezo, 1000);
 } else if(analogRead(potenciometro)>= 0 && analogRead(potenciometro) <= 255){
   digitalWrite(led, HIGH);
 } else{
   noTone(piezo);
 }
}