 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Hala Elhadidi & Nada Alaa
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H

#include "Common_Macros.h"
#include "Std_Types.h"
#include "tm4c123gh6pm_registers.h"




/* Port Vendor ID in AUTOSAR */
#define PORT_VENDOR_ID                   (2000U)

 /* Module Version 1.0.0 */

#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)


 /* AUTOSAR Version 1.0.0 */

#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)  
   
   /* port Module Id */
/*******************************************************************************
 *                              Module Definitions                             *
 *******************************************************************************/

/* GPIO Registers base addresses */
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

/* Description: Enum to hold PIN direction */
typedef enum
{
    INPUT,OUTPUT
}Port_PinDirection;

/* Description: Enum to hold internal resistor type for PIN */
typedef enum
{
    OFF,PULL_UP,PULL_DOWN
}Port_InternalResistor;

/* Description: Structure to configure each individual PIN:
 *	1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *	2. the number of the pin in the PORT.
 *      3. the direction of pin --> INPUT or OUTPUT
 *      4. the internal resistor --> Disable, Pull up or Pull down
 */
typedef struct 
{
    uint8 port_num; 
    uint8 pin_num; 
    Port_PinDirection direction;
    Port_InternalResistor resistor;
    uint8 initial_value;
}Port_ConfigType;



/* port Instance Id */
#define PORT_INSTANCE_ID  (0U)

/* TURN_ON/TURN_OFF error detect */
#define PORT_DEV_ERROR_DETECT                     STD_ON

/* TURN_ON/TURN_OFF Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API                STD_ON

/* TURN_ON/TURN_OFF Port_SetPinMode API */
#define PORT_SET_PIN_MODE_API                     STD_ON

/* TURN_ON/TURN_OFF Port_GetVersionInfo API */
#define PORT_VERSION_INFO_API                     STD_ON
      
#define PORTS_PINS_NUMB                                            (43U)
   
#define PORT_PIN_DIRECTION                       (STD_ON)


#define PORT_PIN_DIRECTION_CHANGEABLE            (STD_ON)


#define PORT_PIN_INITIAL_MODE                    (STD_ON)


#define PORT_PIN_LEVEL_VALUE                     (STD_ON)


#define PORT_PIN_MODE                            (STD_ON)


#define PORT_PIN_MODE_CHANGEABLE                  (STD_ON)


#if (PORT_PIN_LEVEL_VALUE == STD_ON)
#define PORT_PIN_LEVEL_HIGH                   (STD_HIGH)
#define PORT_PIN_LEVEL_LOW                   (STD_LOW)
#endif /* (PORT_PIN_LEVEL_VALUE == STD_ON) */


 
#define PORT_PIN_MODE_ADC	       (0U)
#define PORT_PIN_MODE_DIO	       (10U)
#define PORT_PIN_NOT_ACTIVE            (9U)


#define PORT_PIN_MODE_UART             (1U)

#define PORT_PIN_MODE_SSI              (2U)
#define PORT_PIN_MODE_UART1            (2U)

#define PORT_PIN_MODE_I2C              (3U)
#define PORT_PIN_MODE_CAN0             (3U)

#define PORT_PIN_MODE_PWM0             (4U)

#define PORT_PIN_MODE_PWM1             (5U)

#define PORT_PIN_MODE_QEI              (6U)

#define PORT_PIN_MODE_GPT              (7U)

#define PORT_PIN_MODE_CAN              (8U)
#define PORT_PIN_MODE_USB              (8U)

/* Port Pin Handles */
#define PortA_PortPin0    (uint16)0
#define PortA_PortPin1    (uint16)1
#define PortA_PortPin2    (uint16)2
#define PortA_PortPin3    (uint16)3
#define PortA_PortPin4    (uint16)4
#define PortA_PortPin5    (uint16)5
#define PortA_PortPin6    (uint16)6
#define PortA_PortPin7    (uint16)7
#define PortB_PortPin0    (uint16)8
#define PortB_PortPin1    (uint16)9
#define PortB_PortPin2    (uint16)10
#define PortB_PortPin3    (uint16)11
#define PortB_PortPin4    (uint16)12
#define PortB_PortPin5    (uint16)13
#define PortB_PortPin6    (uint16)14
#define PortB_PortPin7    (uint16)15
#define PortC_PortPin0    (uint16)16
#define PortC_PortPin1    (uint16)17
#define PortC_PortPin2    (uint16)18
#define PortC_PortPin3    (uint16)19
#define PortC_PortPin4    (uint16)20
#define PortC_PortPin5    (uint16)21
#define PortC_PortPin6    (uint16)22
#define PortC_PortPin7    (uint16)23
#define PortD_PortPin0    (uint16)24
#define PortD_PortPin1    (uint16)25
#define PortD_PortPin2    (uint16)26
#define PortD_PortPin3    (uint16)27
#define PortD_PortPin4    (uint16)28
#define PortD_PortPin5    (uint16)29
#define PortD_PortPin6    (uint16)30
#define PortD_PortPin7    (uint16)31
#define PortE_PortPin0    (uint16)32
#define PortE_PortPin1    (uint16)33
#define PortE_PortPin2    (uint16)34
#define PortE_PortPin3    (uint16)35
#define PortE_PortPin4    (uint16)36
#define PortE_PortPin5    (uint16)37
#define PortF_PortPin0    (uint16)38
#define PortF_PortPin1    (uint16)39
#define PortF_PortPin2    (uint16)40
#define PortF_PortPin3    (uint16)41
#define PortF_PortPin4    (uint16)42

typedef uint16 Port_PinType;
typedef uint16 Port_PinModeType;

typedef uint16 EcucIntegerParamDef;

typedef uint16 EcucBooleanParamDef;

typedef struct{
  EcucIntegerParamDef PortPinId;
  Port_PinModeType   PortPinInitialMode;
  Port_PinDirection PinDirection_PORT;
  VAR(EcucBooleanParamDef,    AUTOMATIC) Pinlevel_init;
  VAR(EcucBooleanParamDef,    AUTOMATIC) PinDirection_changeable;
  VAR(EcucBooleanParamDef,    AUTOMATIC) PinMode_changeable;
                }ConfigType_PORT;


const ConfigType_PORT Port_Configuration[] = {

	{
		/* Pin ID */
		PortA_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},

	{
		/* Pin ID */
		PortA_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,




	},
	{ 
		/* Pin ID */
		PortA_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin5,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin6,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin7,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin5,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin6,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin7,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin5,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin6,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin7,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin5,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin6,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin7,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin5,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortF_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortF_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_UART,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortF_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_I2C,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_LOW,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortF_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_LOW,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortF_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_GPT,

		/* Pin Direction */
		INPUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},

	//continue
};













/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/************************************************************************************
* Service Name: Port_SetupGpioPin
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the pin configuration:
*              - Setup the pin as Digital GPIO pin
*              - Setup the direction of the GPIO pin
*              - Setup the internal resistor for i/p pin
************************************************************************************/
void Port_SetupGpioPin(const Port_ConfigType *ConfigPtr ); 



#endif /* PORT_H */
