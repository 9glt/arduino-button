#include "Arduino.h"
#include "Button.h"

Button::Button(int pin, int state) {
    _pin = pin;
    _state = state;
    if(_state == HIGH) {
        pinMode(_pin, INPUT); // should be INPUT_PULLDOWN in feature
    } else {
        pinMode(_pin, INPUT_PULLUP);
    }
}

bool Button::down() {
    return Button::check();
}

bool Button::check() {
    raw = digitalRead(_pin);
    if(raw != lastState) {
        lastState = raw;
        if(raw == _state) {
            return true;
        } 
    }
    return false;
}