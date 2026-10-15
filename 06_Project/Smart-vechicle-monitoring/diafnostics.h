#ifndef DIAGNOSTICS_H
#define DIAGNOSTICS_H

typedef enum
{
    FAULT_NONE,
    FAULT_HIGH_TEMPERATURE,
    FAULT_LOW_BATTERY,
    FAULT_HIGH_RPM,
    FAULT_LOW_FUEL,
    FAULT_INVALID_DATA
} FaultCode;

FaultCode detect_faults(float temperature,
                        float battery_voltage,
                        unsigned int rpm,
                        unsigned int fuel_level);

void display_fault(FaultCode fault);

#endif
