#include "mbed.h"
#include "Sht31/Sht31.h"

Sht31 sht31(D14, D15);

int main()
{
    printf("Hello\r\n");
    while (true) {
        float t = sht31.readTemperature();
        float h = sht31.readHumidity();
        printf("Temperature [ %3.2f F ]\r\n", t);
        printf("Humidity    [ %3.2f %% ]\r\n\n", h);
        wait(5);
    }
}
