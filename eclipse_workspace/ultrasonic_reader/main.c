#include "lcd.h"
#include "ultrasonic.h"
#include "avr/delay.h"
int main (){

	Ultrasonic_init();
	LCD_init();
	LCD_displayString("distance = ");
	while(1){
		LCD_moveCursor(0,10);
		LCD_intgerToString(Ultrasonic_readDistance());
		LCD_displayString(" CM ");

	}
}
