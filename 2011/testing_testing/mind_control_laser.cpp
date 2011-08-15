#include <stdio.h>

#define LOW_BATTERY_THRESHOLD 8.0

double systemBatteryLevel()
{
    return 7.5;
}

class MindControlLaser
{
public:
    void aimWithMandatoryLogging()
    {
        // ...

        if (systemBatteryLevel() < LOW_BATTERY_THRESHOLD)
        {
            // logging code
            puts("Low battery");
        }

        // ...
    }

    void aimWitOptionalLogging()
    {
        // ...

#ifndef TESTING
//... system battery level stuff from above

        if (systemBatteryLevel() < LOW_BATTERY_THRESHOLD)
        {
            // logging code
            puts("Low battery");
        }
#endif

        // ...
    }
};

int main()
{
    MindControlLaser mcl;
    mcl.aimWithMandatoryLogging();
    mcl.aimWitOptionalLogging();

    return 0;
}
