/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO.h
 *       Module:  GPIO
 *
 *  Description:  header file for GPIO Module    
 *  
 *********************************************************************************************************************/
#ifndef GPIO_H
#define GPIO_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
//#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/*


PF4 GPIO SW1
PF0 GPIO SW2
PF1 GPIO RGB LED (Red)
PF2 GPIO RGB LED (Blue)
PF3 GPIO RGD LED (Green)



#define PORTA_DATA_REG 0x40004000
#define PORTB_DATA_REG 0x40005000
#define PORTC_DATA_REG 0x40006000
#define PORTD_DATA_REG 0x40007000
#define PORTE_DATA_REG 0x40024000
#define PORTF_DATA_REG 0x40025000
*/
/********  GPIO Port F (APB): 0x4002.5000  ********/

#define GPIO_PORTF_DATA_R       (*((volatile unsigned long *)0x400253FC))
#define GPIO_PORTF_DIR_R        (*((volatile unsigned long *)0x40025400))		// GPIO Direction
#define GPIO_PORTF_AFSEL_R      (*((volatile unsigned long *)0x40025420))		// GPIO Alternate Function Select
#define GPIO_PORTF_PUR_R        (*((volatile unsigned long *)0x40025510))		// GPIO Pull-Up Select
#define GPIO_PORTF_DEN_R        (*((volatile unsigned long *)0x4002551C))		// GPIO Digital Enable
#define GPIO_PORTF_LOCK_R       (*((volatile unsigned long *)0x40025520))		// GPIO Lock
#define GPIO_PORTF_CR_R         (*((volatile unsigned long *)0x40025524))		// GPIO Commit
#define GPIO_PORTF_AMSEL_R      (*((volatile unsigned long *)0x40025528))		// GPIO Analog Mode Select
#define GPIO_PORTF_PCTL_R       (*((volatile unsigned long *)0x4002552C))		// GPIO Port Control
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))		/*Run Mode Clock Gating Control Register 2(0x108)*/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void PortF_Init(void);
void Delay(void);
void EnableInterrupts(void);


 
#endif  /* GPIO_H */

/**********************************************************************************************************************
 *  END OF FILE: GPIO.h
 *********************************************************************************************************************/
