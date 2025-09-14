#ifndef PUMPHANDLER_H
#define PUMPHANDLER_H
#include <Arduino.h>

class PumpHandler{
    public:
        PumpHandler(int digitalPin);

        void startPump();
        void stopPump();
        bool isRunning();

    private:
        const int _pin;;
        bool _state = false;

};

#endif // PUMPHANDLER_H