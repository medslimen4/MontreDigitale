// TestMontre.cpp

#include "FakeHardware.h"
#include "montre.h"
#include "IHardware.h"
#include <unity.h>

FakeHardware fakeHardware;
Montre montre(&fakeHardware);

void test_IsLightReturnsTrue() {
    FakeHardware fakeHardware(true);
    Montre montre(&fakeHardware);
    TEST_ASSERT_TRUE_MESSAGE(montre.IsLight(), "IsLight did not return true");
}

void test_IsLightReturnsFalse() {
    FakeHardware fakeHardware(false);
    Montre montre(&fakeHardware);
    TEST_ASSERT_FALSE_MESSAGE(montre.IsLight(), "IsLight did not return false");
}

int main(int argc, char** argv) {
    UNITY_BEGIN();

    // Run tests
    RUN_TEST(test_IsLightReturnsTrue);
    RUN_TEST(test_IsLightReturnsFalse);

    UNITY_END();
}
