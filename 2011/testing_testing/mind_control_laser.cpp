#include <stdio.h>

#define LOW_BATTERY_THRESHOLD 8.0

double systemBatteryLevel()
{
    return 7.5;
}

class MindControlLaser
{
public:
    void AimWithMandatoryLogging()
    {
        // ...

        if (systemBatteryLevel() < LOW_BATTERY_THRESHOLD)
        {
            // logging code
            puts("Low battery");
        }

        // ...
    }

    void AimWitOptionalLogging()
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
    mcl.AimWithMandatoryLogging();
    mcl.AimWitOptionalLogging();

    return 0;
}
