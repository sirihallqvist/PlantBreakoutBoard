#ifndef MOISTUREHANDLER_H
#define MOISTUREHANDLER_H

class MoistureHandler {
    public:
        MoistureHandler(int analogPin, int threshold);
        ~MoistureHandler();
        int readMoistureSensor();
        bool isTooDry();

    private:
        int _pin;
        int _threshold;
        int _lastValue;
};

#endif // MOISTUREHANDLER_H