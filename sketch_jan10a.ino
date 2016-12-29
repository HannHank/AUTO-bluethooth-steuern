/*
simple LED test
*/
int maximumRange = 20; // Maximum range needed
int minimumRange = 0; // Minimum range needed
char val;         // variable to receive data from the serial port
int ledpin = 2;  // LED connected to pin 2 (on-board LED)
int Abstand = 0;
void setup()
{
  pinMode(9, OUTPUT);
 digitalWrite(9,HIGH);// Use LED indicator (if required)
 pinMode(8, OUTPUT);
 digitalWrite(8,HIGH);// Use LED indicator (if required)
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);// pin 13 (on-board LED) as OUTPUT
 
  Serial.begin(115200);       // start serial communication at 115200bps
 
}
 
void loop() {
 
  
    Serial.println(Abstand);
  int messdaten = analogRead(0);
  
  

  if( Serial.available() )       // if data is available to read
  {;}
    val = Serial.read();         // read it and store it in 'val'
     Serial.print(val);          // if '0' was received led 13 is 
 
if (messdaten >= 1000 )
{

  Abstand = 0;
}
    if ((messdaten <= 1000) && (Abstand == 0))
 {

  
  
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    Abstand = 1;

 } 


  
if( val == 'F' )               // if '1' was received led 13 on
 {
    digitalWrite( 11, HIGH);
    Serial.println("F");
    val = Serial.read();  
    
    // turn ON pin 13 on
   //delay(1000);                  // waits for a second
    //Serial.println("13 on");
  }
  if( val == 'L' )               // if '1' was received led 13 on
 {
  val = Serial.read();
    digitalWrite( 13, HIGH);
    Serial.println("L");
    // turn ON pin 13 on
   //delay(1000);                  // waits for a second
    //Serial.println("13 on");
  }
  if( val == 'R' )               // if '1' was received led 13 on
 {
  val = Serial.read();
    digitalWrite(12, HIGH);
    Serial.println("R");  // turn ON pin 13 on
    //delay(1000);                  // waits for a second
    //Serial.println("13 on");
  }
  if( val == 'B' )               // if '1' was received led 13 on
 {
  val = Serial.read();
    digitalWrite(10, HIGH);
    Serial.println("B");  // turn ON pin 13 on
    //delay(1000);                  // waits for a second
    //Serial.println("13 on");
  }
  if ( val == 'S')
  {
    val = Serial.read();
Serial.println("S");

    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
  }
  if ( val == 'G' )
  {
    val = Serial.read();
     Serial.println("G");
    digitalWrite(11,HIGH);
    digitalWrite(13,HIGH);
  }
  if ( val == 'I' )
  {
    val = Serial.read();
     Serial.println("I");
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
  }
  if (val == 'H')
  {
    val = Serial.read();
     Serial.println("H");
    digitalWrite(13,HIGH);
    digitalWrite(10,HIGH);
    
  }
  if ( val == 'J' )
  {
    val = Serial.read();
     Serial.println("J");
    digitalWrite(12,HIGH);
    digitalWrite(10,HIGH);
  }
  }  




 
