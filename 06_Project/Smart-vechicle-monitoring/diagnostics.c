#include <stdio.h>
#include "diagnostics.h"

FaultCode detect_faults(float temperature,
                        float battery_voltage,
                        unsigned int rpm,
                        unsigned int fuel_level)
{
    if (temperature < -40.0f || temperature > 150.0f ||
        battery_voltage < 0.0f || battery_voltage > 16.0f ||
        rpm > 10000 ||
        fuel_level > 100)
    {
        return FAULT_INVALID_DATA;
    }

    if (temperature >= 100.0f)
    {
        return FAULT_HIGH_TEMPERATURE;
    }

    if (battery_voltage < 11.5f)
    {
        return FAULT_LOW_BATTERY;
    }

    if (rpm > 4000)
    {
        return FAULT_HIGH_RPM;
    }

    if (fuel_level <= 15)
    {
        return FAULT_LOW_FUEL;
    }

    return FAULT_NONE;
}

void display_fault(FaultCode fault)
{
    switch (fault)
    {
        case FAULT_NONE:
            printf("Diagnostic Status: No faults detected.\n");
            break;

        case FAULT_HIGH_TEMPERATURE:
            printf("Fault: High engine temperature!\n");
            break;

        case FAULT_LOW_BATTERY:
            printf("Fault: Low battery voltage!\n");
            break;

        case FAULT_HIGH_RPM:
            printf("Fault: High engine RPM!\n");
            break;

        case FAULT_LOW_FUEL:
            printf("Fault: Low fuel level!\n");
            break;

        case FAULT_INVALID_DATA:
            printf("Fault: Invalid vehicle data!\n");
            break;

        default:
            printf("Fault: Unknown diagnostic code!\n");
            break;
    }
}
