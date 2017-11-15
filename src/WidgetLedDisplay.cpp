
#include "WidgetLedDisplay.h"


WidgetLedDisplay::WidgetLedDisplay(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataTopic,0,sizeof(pDataTopic));
    sprintf(pDataTopic,"channel/ledDisplay_%d/data/text",_Item);
}

WidgetLedDisplay::~WidgetLedDisplay()
{
}

void WidgetLedDisplay::begin(void (*UserCallBack)(void))
{
}


void WidgetLedDisplay::displayText(char text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(uint8_t text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(short text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(unsigned short text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(int text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(unsigned int text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(long text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(unsigned long text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(float text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(double text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(String text)
{
	IntoRobot.publish(pDataTopic,text);
}

void WidgetLedDisplay::displayText(char *text)
{
	IntoRobot.publish(pDataTopic,text);
}