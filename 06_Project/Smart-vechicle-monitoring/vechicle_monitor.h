#ifndef VEHICLE_MONITOR_H
#define VEHICLE_MONITOR_H

typedef struct
{
    float engine_temperature;
    float battery_voltage;
    unsigned int engine_rpm;
    unsigned int fuel_level;
} VehicleData;

typedef enum
{
    VEHICLE_STATUS_NORMAL,
    VEHICLE_STATUS_WARNING,
    VEHICLE_STATUS_INVALID
} VehicleStatus;

VehicleStatus validate_vehicle_data(const VehicleData *data);

void monitor_temperature(const VehicleData *data);
void monitor_battery(const VehicleData *data);
void monitor_rpm(const VehicleData *data);
void monitor_fuel(const VehicleData *data);

#endif
