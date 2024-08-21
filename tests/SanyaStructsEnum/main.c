#include <stdio.h>
#include <stdbool.h>

typedef enum {
    AC_PRESENT, // 0
    BATTERY_PRESENT, // 1
    POWER_FAIL // 2
} Staus;

typedef struct {
    Staus status[3];
} Device;

void HandleReceivedData(Device * device, bool * received)
{
    for (int i = 0; i < 3; i++)
    {
        device->status[i] = received[i];
    }
}

bool GetStatus(Device * device, Staus status)
{
    return device->status[status];
}

int main()
{
    Device device;
    
    bool received [3] = { 1, 0, 1 }; // from device

    HandleReceivedData(&device, received); // put received statuses
    
    bool isBatteryPresent = GetStatus(&device, BATTERY_PRESENT);

    printf("BATTERY_PRESENT STATUS: %d\n", isBatteryPresent);

    return 0;
}

