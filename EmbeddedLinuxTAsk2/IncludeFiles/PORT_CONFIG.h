#ifndef	PORT_CONFIG_H_
#define PORT_CONFIG_H_

/**
*@brief  : Please Enter Number of ports of Your Avr Target
*@options  : 2, 3, 4
*/

#define NUMBER_OF_PORTS 4

/**
*@brief : selected from both pre-compilation and post-compilation initialization.
*@options : Pre_Compilation, Post_Compilation 
*/

#define TYPE_OF_COMPILATION 0

/**
*@brief : If you choose Pre_Compilation Method Please Intialize All Pins Here
*@options : INPUT_PU , INPUT_PD, OUTPUT_HIGH, OUTPUT_LOW
*/
#define INPUT_PD		0
#define INPUT_PU		1
#define OUTPUT_HIGH		2
#define OUTPUT_LOW		3

#define PORT_PIN0  OUTPUT_LOW		
#define PORT_PIN1  OUTPUT_LOW		
#define PORT_PIN2  OUTPUT_LOW		
#define PORT_PIN3  OUTPUT_LOW		
#define PORT_PIN4  INPUT_PD			
#define PORT_PIN5  INPUT_PD			
#define PORT_PIN6  INPUT_PD			
#define PORT_PIN7  INPUT_PD			
#define PORT_PIN8  INPUT_PU			
#define PORT_PIN9  INPUT_PD			
#define PORT_PIN10 INPUT_PD			
#define PORT_PIN11 INPUT_PD			
#define PORT_PIN12 INPUT_PD			
#define PORT_PIN13 INPUT_PD			
#define PORT_PIN14 INPUT_PD			
#define PORT_PIN15 INPUT_PD			
#define PORT_PIN16 INPUT_PD			
#define PORT_PIN17 INPUT_PD			
#define PORT_PIN18 INPUT_PD			
#define PORT_PIN19 INPUT_PD			
#define PORT_PIN20 INPUT_PD			
#define PORT_PIN21 INPUT_PD			
#define PORT_PIN22 INPUT_PD			
#define PORT_PIN23 INPUT_PD			
#define PORT_PIN24 INPUT_PD			
#define PORT_PIN24 INPUT_PD			
#define PORT_PIN24 INPUT_PD			
#define PORT_PIN24 INPUT_PD			
#define PORT_PIN25 INPUT_PD			
#define PORT_PIN26 INPUT_PD			
#define PORT_PIN27 INPUT_PD			
#define PORT_PIN28 INPUT_PD			
#define PORT_PIN29 INPUT_PD
#define PORT_PIN30 INPUT_PD
#define PORT_PIN31 OUTPUT_HIGH

#endif
