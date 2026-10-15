#include <stdio.h>
#include "vehicle_monitor.h"

VehicleStatus validate_vehicle_data(const VehicleData *data)
{
    if (data == NULL)
    {
        return VEHICLE_STATUS_INVALID;
    }

    if (data->engine_temperature < -40.0f ||
        data->engine_temperature > 150.0f ||
        data->battery_voltage < 0.0f ||
        data->battery_voltage > 16.0f ||
        data->engine_rpm > 10000 ||
        data->fuel_level > 100)
    {
        return VEHICLE_STATUS_INVALID;
    }

    return VEHICLE_STATUS_NORMAL;
}

void monitor_temperature(const VehicleData *data)
{
    if (data == NULL)
    {
        printf("Error: Invalid vehicle data.\n");
        return;
    }

    printf("Engine Temperature: %.1f C\n",
           data->engine_temperature);

    if (data->engine_temperature >= 100.0f)
    {
        printf("WARNING: High engine temperature!\n");
    }
    else
    {
        printf("Temperature Status: NORMAL\n");
    }
}

void monitor_battery(const VehicleData *data)
{
    if (data == NULL)
    {
        printf("Error: Invalid vehicle data.\n");
        return;
    }

    printf("Battery Voltage: %.1f V\n",
           data->battery_voltage);

    if (data->battery_voltage < 11.5f)
    {
        printf("WARNING: Low battery voltage!\n");
    }
    else if (data->battery_voltage > 14.8f)
    {
        printf("WARNING: High battery voltage!\n");
    }
    else
    {
        printf("Battery Status: NORMAL\n");
    }
}

void monitor_rpm(const VehicleData *data)
{
    if (data == NULL)
    {
        printf("Error: Invalid vehicle data.\n");
        return;
    }

    printf("Engine RPM: %u\n", data->engine_rpm);

    if (data->engine_rpm > 4000)
    {
        printf("WARNING: High engine RPM!\n");
    }
    else
    {
        printf("RPM Status: NORMAL\n");
    }
}

void monitor_fuel(const VehicleData *data)
{
    if (data == NULL)
    {
        printf("Error: Invalid vehicle data.\n");
        return;
    }

    printf("Fuel Level: %u%%\n", data->fuel_level);

    if (data->fuel_level <= 15)
    {
        printf("WARNING: Low fuel level!\n");
    }
    else
    {
        printf("Fuel Status: NORMAL\n");
    }
}
