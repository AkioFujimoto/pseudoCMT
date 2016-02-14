/*
Pseudo digital CMT(data recoder).
(c)2016- Akio Fujimoto , @shiva5300 all rights
                                          reserved.
TODO :: 
--------Save to where??------- FILE? or -------------
*/


/* NOTICE
all the data signal via headphone jack(1vp-p) must will be 
amplifired with OpAmp with a high GB factors.
especially, in audio area.
*/
const int pin = 12;
const int dTime = 10;  // ms.
char data[] = "";  // size? size? size!?

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, INPUT_PULLUP);
  // INPUT or I/PULLUP? which?
  Serial.begin(9600);
}

void loop() {
// otherwise you can read pin status via DDRx/DIRx.
  Serial.print(digitalRead(pin));
  // ^^^^ to make sure pin signal confirmation.
  delay(dTime);  // or you can get more speedup
                 // techniques with 
                 // inline assembler!!!

}
