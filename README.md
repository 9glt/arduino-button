# arduino-button
check if pin state changed 


example usage
```cpp
#include "Button.h"

Button button1(7, LOW); // LOW for input pullup HIGH for INPUT
Button button2(8, LOW, 1000); // 1000 - debaunce delay

void setup() {
    Serial.begin(9600);
}

void loop() {
    if(button1.down()) {
        Serial.println("CLICK!");
    }
    if(button2.debounce()) {
        Serial.println("debounce click");
    }
}
```