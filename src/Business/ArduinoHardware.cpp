#include <Arduino.h>
#include "IHardware.h"
class ArduinoHardware : public IHardware {
public:
    bool digitalRead(int pin)  {
        return ::digitalRead(pin);
    }
};