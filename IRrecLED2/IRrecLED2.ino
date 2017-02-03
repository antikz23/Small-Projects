#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

/*
   IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
   An IR detector/demodulator must be connected to the input RECV_PIN.
   Version 0.1 July, 2009
   Copyright 2009 Ken Shirriff
   http://arcfn.com
*/

#include <IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

int x = 1;

void setup()
{
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop()
{

  if (irrecv.decode(&results))
  {
    if (results.value == 0xFD10EF) {
      analogWrite(9, x);
      x = x - 5;
    }
    //digitalWrite (9, HIGH);
    else if (results.value == 0xFD50AF)
    {
      analogWrite (9, x);
      x = x + 5;
    }

    //digitalWrite (9, HIGH);

    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }

  }
