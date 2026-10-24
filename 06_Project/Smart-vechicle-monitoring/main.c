#include <stdio.h>
#include "vehicle_monitor.h"
#include "diagnostics.h"

int main(void)
{
    VehicleData vehicle = {
        90.0f,
        12.5f,
        2500,
        60
    };

    printf("=================================\n");
    printf(" SMART VEHICLE MONITORING SYSTEM\n");
    printf("=================================\n\n");

    printf("Checking vehicle parameters...\n\n");

    VehicleStatus status = validate_vehicle_data(&vehicle);

    if (status == VEHICLE_STATUS_INVALID)
    {
        printf("Error: Invalid vehicle data!\n");
        display_fault(FAULT_INVALID_DATA);
        return 1;
    }

    monitor_temperature(&vehicle);
    printf("\n");

    monitor_battery(&vehicle);
    printf("\n");

    monitor_rpm(&vehicle);
    printf("\n");

    monitor_fuel(&vehicle);
    printf("\n");

    FaultCode fault = detect_faults(
        vehicle.engine_temperature,
        vehicle.battery_voltage,
        vehicle.engine_rpm,
        vehicle.fuel_level
    );

    display_fault(fault);

    printf("\nMonitoring completed.\n");

    return 0;
}
