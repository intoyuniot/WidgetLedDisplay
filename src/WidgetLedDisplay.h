#ifndef WIDGET_LEDDISPLAY_H_
#define WIDGET_LEDDISPLAY_H_

#include "application.h"


class WidgetLedDisplay
{
public:
    WidgetLedDisplay(uint8_t ucItem = 0);
    ~WidgetLedDisplay();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayText(char text);
    void displayText(uint8_t text);
    void displayText(short text);
    void displayText(unsigned short text);
    void displayText(int text);
    void displayText(unsigned int text);
    void displayText(long text);
    void displayText(unsigned long text);
    void displayText(float text);
    void displayText(double text);
    void displayText(String text);
    void displayText(char *text);

private:
    char pDataTopic[64];
    uint8_t _Item=0;         
};

#endif