#include "Button.h"

Button button1(7, LOW); // LOW to use INPUT_PULLUP, HIGH - FLoating(for now)

void setup() {
// put your setup code here, to run once:
    Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
    if(button1.down()) {
        Serial.println("CLICK!");
    }
}
