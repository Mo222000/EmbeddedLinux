#ifndef DIO_H
#define DIO_H

#include "std_types.h"
#include "Bit_Math.h"

/**
*@brief : the ports types of AVR ATMEGA32
*/
typedef enum
{
    DIO_enumPortA,
    DIO_enumPortB,
    DIO_enumPortC,
    DIO_enumPortD
}DIO_enumPorts_t;


/**
*@brief : the Error List Types
*/
typedef enum
{
    DIO_enumOk,             /*every thing is OK*/
    DIO_enumNUllPointer,    /*Error: NULL pointer is passed to function*/
    DIO_enumWrongPort,      /*Error: Port number does not exist*/
    DIO_enumWrongPin,       /*Error: Pin number does not exist*/
    DIO_enumWrongConfig,     /*Error: Configuration type does not found*/
	DIO_enumWrongLogic
}DIO_enumError_t;


/**
*@brief : the configuration types of pins input or output
*/
typedef enum
{
    DIO_enumOutput,             /*Pin will be output*/
    DIO_enumInputInternalPU,    /*pin will be input With internal pull up*/
    DIO_enumInputExternalPD     /*pin will be input with external pull down*/
}DIO_enumConfig_t;


/**
*@brief : the logic state : HIGH or LOW
*/
typedef enum
{
    DIO_enumLogicLow,           /* logic will be low*/
    DIO_enumLogicHigh           /* logic will be high*/
}DIO_enumLogicState_t;


/**
*@brief : the pins type
*/
typedef enum
{
    DIO_enumPin0,
    DIO_enumPin1,
    DIO_enumPin2,
    DIO_enumPin3,
    DIO_enumPin4,
    DIO_enumPin5,
    DIO_enumPin6,
    DIO_enumPin7
}DIO_enumPins_t;



/**
*@brief  : function to set the bin logic to HIGH or LOW
*@param  : Port number, pin number, logic state
*@return : Error status
*/
DIO_enumError_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumLogicState_t Copy_enumLogicState);

/**
*@brief  : function to set whole port as HIGH or LOW
*@param  : port number, logic state
*@return : Error state
*/
DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum, U8 PortValue);

/**
*@brief  : function to read the status of bin is it high or low
*@param  : port number, pin number, pointer to return the value of bin
*@return : Error state
*/
DIO_enumError_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumLogicState_t* Add_Pu8PinValue);


/*
 * Description :
 * This Function Provide a delay in millieseconds
 * You shall define the F_CPU before using it or it will be a default value of 1Mhz
 */
void DIO_DelayMs(U32 Copy_u32TimeMs);
#endif // DIO_H
