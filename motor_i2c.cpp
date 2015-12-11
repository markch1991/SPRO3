 * Main function that demos the use of the i2c8Bit class for use with
 * the MCP23017 chip -- EDITED FOR SPRO3, TO SEND cmd_vel OVER I2C TO MOTORDRIVER
 * *******************************************************************/

#include "i2c8Bit.h"
#include <iostream>
using namespace std;

int main(void)
{
    i2c8Bit motor(0b00011111,string("/dev/i2c-1"));
    //instantiate i2c8Bit object called mcp23017
    //specify a device address 0x19 and i2c device "/dev/i2c-1"
    motor.writeReg(0b10,0b11111110);
        // write data value 0b11111110 into register 2 
return 0;
}
