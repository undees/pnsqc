#include <stdio.h>
#include <assert.h>

#define LOW_BATTERY_THRESHOLD 8.0

double systemBatteryLevel()
{
    return 9.5;
}

class MindControlLaser
{
public:
    MindControlLaser()
        : isWarningLightOn(false),
          batteryLevelFunc(&systemBatteryLevel)
    {
    }

    void Aim()
    {
        // ...

        if (batteryLevelFunc &&
            (*batteryLevelFunc)() < LOW_BATTERY_THRESHOLD)
        {
            // logging code
            puts("Low battery");

            // do something required by our contract
            TurnWarningLightOn();
        }

        // ...
    }

    bool WarningLightOn() { return isWarningLightOn; }

private:
    void TurnWarningLightOn() { isWarningLightOn = true; }

    bool isWarningLightOn;
    double (*batteryLevelFunc)();

    friend void testAimWithLowBattery();
};

double fakeLowBatteryLevel()
{
    return LOW_BATTERY_THRESHOLD / 2.0;
}

void testAimWithLowBattery()
{
    MindControlLaser l;
    l.batteryLevelFunc = &fakeLowBatteryLevel;
    l.Aim();
    assert(l.WarningLightOn());
}

int main()
{
    testAimWithLowBattery();

    return 0;
}
