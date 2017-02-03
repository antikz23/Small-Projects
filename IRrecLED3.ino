#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>
#define BLINK 0
#define NOBLINK 1


#include <IRremote.h>
int x = 1;
int RECV_PIN = 11;
int state = BLINK;
int ircode;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(9, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    ircode = results.value;
    Serial.println(ircode, HEX);
  
    if (results.value == 0xFDA857) {
      state = BLINK;
    }
    if (results.value == 0xFD28D7) {
      state = NOBLINK;

    }


    irrecv.resume(); // Receive the next value
  }
  if (state == BLINK) {
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(9, LOW);
    delay(300);
  }
  if (state == NOBLINK) {
    digitalWrite(9, LOW);
  }
  delay(100);
}

