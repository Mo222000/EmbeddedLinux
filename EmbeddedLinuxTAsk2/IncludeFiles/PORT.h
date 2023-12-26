#ifndef PORT_H_
#define PORT_H_

typedef enum
{
	PORT_enumPortA,
	PORT_enumPortB,
	PORT_enumPortC,
	PORT_enumPortD
}PORT_enumPorts;

typedef enum
{
	PORT_enumPin0,
	PORT_enumPin1,
	PORT_enumPin2,
	PORT_enumPin3,
	PORT_enumPin4,
	PORT_enumPin5,
	PORT_enumPin6,
	PORT_enumPin7
}PORT_enumPins;


typedef enum
{
	PORT_enumOutput_HIGH,				/*Pin will be output and high*/
	PORT_enumOutput_LOW,				/*Pin will be output and low */
	PORT_enumInputInternalPU,			/*pin will be input With internal pull up*/
	PORT_enumInputExternalPD			/*pin will be input with external pull down*/
}PORT_enumConfig;

/*typedef U8 PORT_Error_Status;*/
#define PORT_OK 1


/**
*@brief  : function to initialization the configuration of all pins
*/
void PORT_Init(void);

#endif