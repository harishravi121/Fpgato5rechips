//adds
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(1, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
   int a=random(1000);
  delay(a);                       // wait for a second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
    digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
   int b=random(1000);
  delay(b);                          // wait for a second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
delay(3050);  
      digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(b+a);                   // wait for a second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
 delay(3300);
}
