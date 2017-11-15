/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
显示文本内容，比如数字、字符等。

所需器件:

*/

/*该头文件引用由IntoRobot自动添加.*/
#include <WidgetLedDisplay.h>

WidgetLedDisplay  ledScreen;

String tmp  = "welcome to intorobot";



void setup() 
{
    // put your setup code here, to run once.
    ledScreen.begin();
}

void loop() 
{
    // put your main code here, to run repeatedly.
    ledScreen.displayText(tmp);
    delay(2000);
}
