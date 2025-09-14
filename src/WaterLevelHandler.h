#ifndef WATERLEVELHANDLER_H
#define WATERLEVELHANDLER_H

class WaterLevelSensor {
    public:
        WaterLevelSensor(int analogPin);

        int readWaterLevelSensor();
    private:
        const int _pin;
        bool _state = true;
}

#endif // WATERLEVELHANDLER_H