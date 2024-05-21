#include "IHardware.h"
#include "montre.h"

class FakeHardware : public IHardware {
public:
    bool IsLight();
};