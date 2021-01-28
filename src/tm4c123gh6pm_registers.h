#ifndef TM4C123GH6PM_REGISTERS
#define TM4C123GH6PM_REGISTERS

#include "Std_Types.h"

/*****************************************************************************
GPIO registers (PORTA)
*****************************************************************************/
#define GPIO_PORTA_DATA_REG       (*((volatile uint32 *)0x400043FC))
#define GPIO_PORTA_DIR_REG        (*((volatile uint32 *)0x40004400))
#define GPIO_PORTA_AFSEL_REG      (*((volatile uint32 *)0x40004420))
#define GPIO_PORTA_PUR_REG        (*((volatile uint32 *)0x40004510))
#define GPIO_PORTA_PDR_REG        (*((volatile uint32 *)0x40004514))
#define GPIO_PORTA_DEN_REG        (*((volatile uint32 *)0x4000451C))
#define GPIO_PORTA_LOCK_REG       (*((volatile uint32 *)0x40004520))
#define GPIO_PORTA_CR_REG         (*((volatile uint32 *)0x40004524))
#define GPIO_PORTA_AMSEL_REG      (*((volatile uint32 *)0x40004528))
#define GPIO_PORTA_PCTL_REG       (*((volatile uint32 *)0x4000452C))

/* PORTA External Interrupts Registers */
#define GPIO_PORTA_IS_REG         (*((volatile uint32 *)0x40004404))
#define GPIO_PORTA_IBE_REG        (*((volatile uint32 *)0x40004408))
#define GPIO_PORTA_IEV_REG        (*((volatile uint32 *)0x4000440C))
#define GPIO_PORTA_IM_REG         (*((volatile uint32 *)0x40004410))
#define GPIO_PORTA_RIS_REG        (*((volatile uint32 *)0x40004414))
#define GPIO_PORTA_ICR_REG        (*((volatile uint32 *)0x4000441C))

/*****************************************************************************
GPIO registers (PORTB)
*****************************************************************************/
#define GPIO_PORTB_DATA_REG       (*((volatile uint32 *)0x400053FC))
#define GPIO_PORTB_DIR_REG        (*((volatile uint32 *)0x40005400))
#define GPIO_PORTB_AFSEL_REG      (*((volatile uint32 *)0x40005420))
#define GPIO_PORTB_PUR_REG        (*((volatile uint32 *)0x40005510))
#define GPIO_PORTB_PDR_REG        (*((volatile uint32 *)0x40005514))
#define GPIO_PORTB_DEN_REG        (*((volatile uint32 *)0x4000551C))
#define GPIO_PORTB_LOCK_REG       (*((volatile uint32 *)0x40005520))
#define GPIO_PORTB_CR_REG         (*((volatile uint32 *)0x40005524))
#define GPIO_PORTB_AMSEL_REG      (*((volatile uint32 *)0x40005528))
#define GPIO_PORTB_PCTL_REG       (*((volatile uint32 *)0x4000552C))

/* PORTB External Interrupts Registers */
#define GPIO_PORTB_IS_REG         (*((volatile uint32 *)0x40005404))
#define GPIO_PORTB_IBE_REG        (*((volatile uint32 *)0x40005408))
#define GPIO_PORTB_IEV_REG        (*((volatile uint32 *)0x4000540C))
#define GPIO_PORTB_IM_REG         (*((volatile uint32 *)0x40005410))
#define GPIO_PORTB_RIS_REG        (*((volatile uint32 *)0x40005414))
#define GPIO_PORTB_ICR_REG        (*((volatile uint32 *)0x4000541C))

/*****************************************************************************
GPIO registers (PORTC)
*****************************************************************************/
#define GPIO_PORTC_DATA_REG       (*((volatile uint32 *)0x400063FC))
#define GPIO_PORTC_DIR_REG        (*((volatile uint32 *)0x40006400))
#define GPIO_PORTC_AFSEL_REG      (*((volatile uint32 *)0x40006420))
#define GPIO_PORTC_PUR_REG        (*((volatile uint32 *)0x40006510))
#define GPIO_PORTC_PDR_REG        (*((volatile uint32 *)0x40006514))
#define GPIO_PORTC_DEN_REG        (*((volatile uint32 *)0x4000651C))
#define GPIO_PORTC_LOCK_REG       (*((volatile uint32 *)0x40006520))
#define GPIO_PORTC_CR_REG         (*((volatile uint32 *)0x40006524))
#define GPIO_PORTC_AMSEL_REG      (*((volatile uint32 *)0x40006528))
#define GPIO_PORTC_PCTL_REG       (*((volatile uint32 *)0x4000652C))

/* PORTC External Interrupts Registers */
#define GPIO_PORTC_IS_REG         (*((volatile uint32 *)0x40006404))
#define GPIO_PORTC_IBE_REG        (*((volatile uint32 *)0x40006408))
#define GPIO_PORTC_IEV_REG        (*((volatile uint32 *)0x4000640C))
#define GPIO_PORTC_IM_REG         (*((volatile uint32 *)0x40006410))
#define GPIO_PORTC_RIS_REG        (*((volatile uint32 *)0x40006414))
#define GPIO_PORTC_ICR_REG        (*((volatile uint32 *)0x4000641C))

/*****************************************************************************
GPIO registers (PORTD)
*****************************************************************************/
#define GPIO_PORTD_DATA_REG       (*((volatile uint32 *)0x400073FC))
#define GPIO_PORTD_DIR_REG        (*((volatile uint32 *)0x40007400))
#define GPIO_PORTD_AFSEL_REG      (*((volatile uint32 *)0x40007420))
#define GPIO_PORTD_PUR_REG        (*((volatile uint32 *)0x40007510))
#define GPIO_PORTD_PDR_REG        (*((volatile uint32 *)0x40007514))
#define GPIO_PORTD_DEN_REG        (*((volatile uint32 *)0x4000751C))
#define GPIO_PORTD_LOCK_REG       (*((volatile uint32 *)0x40007520))
#define GPIO_PORTD_CR_REG         (*((volatile uint32 *)0x40007524))
#define GPIO_PORTD_AMSEL_REG      (*((volatile uint32 *)0x40007528))
#define GPIO_PORTD_PCTL_REG       (*((volatile uint32 *)0x4000752C))

/* PORTD External Interrupts Registers */
#define GPIO_PORTD_IS_REG         (*((volatile uint32 *)0x40007404))
#define GPIO_PORTD_IBE_REG        (*((volatile uint32 *)0x40007408))
#define GPIO_PORTD_IEV_REG        (*((volatile uint32 *)0x4000740C))
#define GPIO_PORTD_IM_REG         (*((volatile uint32 *)0x40007410))
#define GPIO_PORTD_RIS_REG        (*((volatile uint32 *)0x40007414))
#define GPIO_PORTD_ICR_REG        (*((volatile uint32 *)0x4000741C))

/*****************************************************************************
GPIO registers (PORTE)
*****************************************************************************/
#define GPIO_PORTE_DATA_REG       (*((volatile uint32 *)0x400243FC))
#define GPIO_PORTE_DIR_REG        (*((volatile uint32 *)0x40024400))
#define GPIO_PORTE_AFSEL_REG      (*((volatile uint32 *)0x40024420))
#define GPIO_PORTE_PUR_REG        (*((volatile uint32 *)0x40024510))
#define GPIO_PORTE_PDR_REG        (*((volatile uint32 *)0x40024514))
#define GPIO_PORTE_DEN_REG        (*((volatile uint32 *)0x4002451C))
#define GPIO_PORTE_LOCK_REG       (*((volatile uint32 *)0x40024520))
#define GPIO_PORTE_CR_REG         (*((volatile uint32 *)0x40024524))
#define GPIO_PORTE_AMSEL_REG      (*((volatile uint32 *)0x40024528))
#define GPIO_PORTE_PCTL_REG       (*((volatile uint32 *)0x4002452C))

/* PORTE External Interrupts Registers */
#define GPIO_PORTE_IS_REG         (*((volatile uint32 *)0x40024404))
#define GPIO_PORTE_IBE_REG        (*((volatile uint32 *)0x40024408))
#define GPIO_PORTE_IEV_REG        (*((volatile uint32 *)0x4002440C))
#define GPIO_PORTE_IM_REG         (*((volatile uint32 *)0x40024410))
#define GPIO_PORTE_RIS_REG        (*((volatile uint32 *)0x40024414))
#define GPIO_PORTE_ICR_REG        (*((volatile uint32 *)0x4002441C))

/*****************************************************************************
GPIO registers (PORTF)
*****************************************************************************/
#define GPIO_PORTF_DATA_REG       (*((volatile uint32 *)0x400253FC))
#define GPIO_PORTF_DIR_REG        (*((volatile uint32 *)0x40025400))
#define GPIO_PORTF_AFSEL_REG      (*((volatile uint32 *)0x40025420))
#define GPIO_PORTF_PUR_REG        (*((volatile uint32 *)0x40025510))
#define GPIO_PORTF_PDR_REG        (*((volatile uint32 *)0x40025514))
#define GPIO_PORTF_DEN_REG        (*((volatile uint32 *)0x4002551C))
#define GPIO_PORTF_LOCK_REG       (*((volatile uint32 *)0x40025520))
#define GPIO_PORTF_CR_REG         (*((volatile uint32 *)0x40025524))
#define GPIO_PORTF_AMSEL_REG      (*((volatile uint32 *)0x40025528))
#define GPIO_PORTF_PCTL_REG       (*((volatile uint32 *)0x4002552C))

/* PORTF External Interrupts Registers */
#define GPIO_PORTF_IS_REG         (*((volatile uint32 *)0x40025404))
#define GPIO_PORTF_IBE_REG        (*((volatile uint32 *)0x40025408))
#define GPIO_PORTF_IEV_REG        (*((volatile uint32 *)0x4002540C))
#define GPIO_PORTF_IM_REG         (*((volatile uint32 *)0x40025410))
#define GPIO_PORTF_RIS_REG        (*((volatile uint32 *)0x40025414))
#define GPIO_PORTF_ICR_REG        (*((volatile uint32 *)0x4002541C))

#define SYSCTL_REGCGC2_REG        (*((volatile uint32 *)0x400FE108))


/*****************************************************************************
Systick Timer Registers
*****************************************************************************/
#define SYSTICK_CTRL_REG          (*((volatile uint32 *)0xE000E010))
#define SYSTICK_RELOAD_REG        (*((volatile uint32 *)0xE000E014))
#define SYSTICK_CURRENT_REG       (*((volatile uint32 *)0xE000E018))

/*****************************************************************************
PLL Registers
*****************************************************************************/
#define SYSCTL_RIS_REG            (*((volatile uint32 *)0x400FE050))
#define SYSCTL_RCC_REG            (*((volatile uint32 *)0x400FE060))
#define SYSCTL_RCC2_REG           (*((volatile uint32 *)0x400FE070))

/*****************************************************************************
NVIC Registers
*****************************************************************************/
#define NVIC_PRI0_REG             (*((volatile uint32 *)0xE000E400))
#define NVIC_PRI1_REG             (*((volatile uint32 *)0xE000E404))
#define NVIC_PRI2_REG             (*((volatile uint32 *)0xE000E408))
#define NVIC_PRI3_REG             (*((volatile uint32 *)0xE000E40C))
#define NVIC_PRI4_REG             (*((volatile uint32 *)0xE000E410))
#define NVIC_PRI5_REG             (*((volatile uint32 *)0xE000E414))
#define NVIC_PRI6_REG             (*((volatile uint32 *)0xE000E418))
#define NVIC_PRI7_REG             (*((volatile uint32 *)0xE000E41C))
#define NVIC_PRI8_REG             (*((volatile uint32 *)0xE000E420))
#define NVIC_PRI9_REG             (*((volatile uint32 *)0xE000E424))
#define NVIC_PRI10_REG            (*((volatile uint32 *)0xE000E428))
#define NVIC_PRI11_REG            (*((volatile uint32 *)0xE000E42C))
#define NVIC_PRI12_REG            (*((volatile uint32 *)0xE000E430))
#define NVIC_PRI13_REG            (*((volatile uint32 *)0xE000E434))
#define NVIC_PRI14_REG            (*((volatile uint32 *)0xE000E438))
#define NVIC_PRI15_REG            (*((volatile uint32 *)0xE000E43C))
#define NVIC_PRI16_REG            (*((volatile uint32 *)0xE000E440))
#define NVIC_PRI17_REG            (*((volatile uint32 *)0xE000E444))
#define NVIC_PRI18_REG            (*((volatile uint32 *)0xE000E448))
#define NVIC_PRI19_REG            (*((volatile uint32 *)0xE000E44C))
#define NVIC_PRI20_REG            (*((volatile uint32 *)0xE000E450))
#define NVIC_PRI21_REG            (*((volatile uint32 *)0xE000E454))
#define NVIC_PRI22_REG            (*((volatile uint32 *)0xE000E458))
#define NVIC_PRI23_REG            (*((volatile uint32 *)0xE000E45C))
#define NVIC_PRI24_REG            (*((volatile uint32 *)0xE000E460))
#define NVIC_PRI25_REG            (*((volatile uint32 *)0xE000E464))
#define NVIC_PRI26_REG            (*((volatile uint32 *)0xE000E468))
#define NVIC_PRI27_REG            (*((volatile uint32 *)0xE000E46C))
#define NVIC_PRI28_REG            (*((volatile uint32 *)0xE000E470))
#define NVIC_PRI29_REG            (*((volatile uint32 *)0xE000E474))
#define NVIC_PRI30_REG            (*((volatile uint32 *)0xE000E478))
#define NVIC_PRI31_REG            (*((volatile uint32 *)0xE000E47C))
#define NVIC_PRI32_REG            (*((volatile uint32 *)0xE000E480))
#define NVIC_PRI33_REG            (*((volatile uint32 *)0xE000E484))
#define NVIC_PRI34_REG            (*((volatile uint32 *)0xE000E488))

#define NVIC_EN0_REG              (*((volatile uint32 *)0xE000E100))
#define NVIC_EN1_REG              (*((volatile uint32 *)0xE000E104))
#define NVIC_EN2_REG              (*((volatile uint32 *)0xE000E108))
#define NVIC_EN3_REG              (*((volatile uint32 *)0xE000E10C))
#define NVIC_EN4_REG              (*((volatile uint32 *)0xE000E110))
#define NVIC_DIS0_REG             (*((volatile uint32 *)0xE000E180))
#define NVIC_DIS1_REG             (*((volatile uint32 *)0xE000E184))
#define NVIC_DIS2_REG             (*((volatile uint32 *)0xE000E188))
#define NVIC_DIS3_REG             (*((volatile uint32 *)0xE000E18C))
#define NVIC_DIS4_REG             (*((volatile uint32 *)0xE000E190))

#define NVIC_SYSTEM_PRI1_REG      (*((volatile uint32 *)0xE000ED18))
#define NVIC_SYSTEM_PRI2_REG      (*((volatile uint32 *)0xE000ED1C))
#define NVIC_SYSTEM_PRI3_REG      (*((volatile uint32 *)0xE000ED20))
#define NVIC_SYSTEM_SYSHNDCTRL    (*((volatile uint32 *)0xE000ED24))
  #define SYSTEM_CTL_BASE        (0x400FE000U)
  #define GPIO_CLOCKGATE_OFFSET  (0x608U)

  /* This macro is used whenever we want to write data to the microcontroller*/
  #define GPIO_DATA_WRITE_OP_CODE   (0x3FCU)


  /*THE LOCK*/
   #define GPIO_PORTC_LOCK_R  0x4C4F434B



#define GPIO_A_APB_BASE	0x40004000
#define GPIO_A_AHB_BASE	0x40058000

#define GPIO_B_APB_BASE	0x40005000
#define GPIO_B_AHB_BASE	0x40059000

#define GPIO_C_APB_BASE	0x40006000
#define GPIO_C_AHB_BASE	0x4005A000

#define GPIO_D_APB_BASE	0x40007000
#define GPIO_D_AHB_BASE	0x4005B000

#define GPIO_E_APB_BASE	0x40024000
#define GPIO_E_AHB_BASE	0x4005C000

#define GPIO_F_APB_BASE	0x40025000
#define GPIO_F_AHB_BASE	0x4005D000


#define BASE_A		0x40004000
#define BASE_B		0x40005000
#define BASE_C		0x40006000
#define BASE_D		0x40007000
#define BASE_E		0x40024000
#define BASE_F		0x40025000


//OFFSETES

//////////////////////////////////////////////
#define GPIODATA_offset	0x000

//Register 2: GPIO Direction (GPIODIR), offset 0x400
#define GPIODIR_offset		0x400
//////////////////////////////////////////////


//Register 3: GPIO Interrupt Sense (GPIOIS), offset 0x404
#define GPIOIS_offset		0x404

//Register 4: GPIO Interrupt Both Edges (GPIOIBE), offset 0x408
#define GPIOIBE_offset		0x408

//Register 5: GPIO Interrupt Event (GPIOIEV), offset 0x40C
#define GPIOIEV_offset		0x40C

//Register 6: GPIO Interrupt Mask (GPIOIM), offset 0x410
#define GPIOIM_offset		0x410

//Register 7: GPIO Raw Interrupt Status (GPIORIS), offset 0x414
#define GPIORIS_offset		0x414

//Register 8: GPIO Masked Interrupt Status (GPIOMIS), offset 0x418
#define GPIOMIS_offset		0x418

//Register 9: GPIO Interrupt Clear (GPIOICR), offset 0x41C
#define GPIOICR_offset		0x41C


//////////////////////////////////////////////
//Register 10: GPIO Alternate Function Select (GPIOAFSEL), offset 0x420
#define GPIOAFSEL_offset	0x420
//////////////////////////////////////////////


//Register 11: GPIO 2-mA Drive Select (GPIODR2R), offset 0x500
#define GPIODR2R_offset	0x500

//Register 12: GPIO 4-mA Drive Select (GPIODR4R), offset 0x504
#define GPIODR4R_offset	0x504

//Register 13: GPIO 8-mA Drive Select (GPIODR8R), offset 0x508
#define GPIODR8R_offset	0x508

//Register 14: GPIO Open Drain Select (GPIOODR), offset 0x50C
#define GPIOODR_offset	0x50C



//////////////////////////////////////////////
//Register 15: GPIO Pull-Up Select (GPIOPUR), offset 0x510
#define GPIOPUR_offset	0x510

//Register 16: GPIO Pull-Down Select (GPIOPDR), offset 0x514
#define GPIOPDR_offset	0x514

//Register 17: GPIO Slew Rate Control Select (GPIOSLR), offset 0x518
#define GPIOSLR_offset	0x518

//Register 18: GPIO Digital Enable (GPIODEN), offset 0x51C
#define GPIODEN_offset	0x51C

//Register 19: GPIO Lock (GPIOLOCK), offset 0x520
#define GPIOLOCK_offset	0x520

//Register 20: GPIO Commit (GPIOCR), offset 0x524
#define GPIOCR_offset	0x524

//Register 21: GPIO Analog Mode Select (GPIOAMSEL), offset 0x528
#define GPIOAMSEL_offset        0x528

//Register 22: GPIO Port Control (GPIOPCTL), offset 0x52C
#define GPIOPCTL_offset	0x52C



//////////////////////////////////////////////
//Register 23: GPIO ADC Control (GPIOADCCTL), offset 0x530
#define GPIOADCCTL_offset	0x530

//Register 24: GPIO DMA Control (GPIODMACTL), offset 0x534
#define GPIODMACTL_offset	0x534

//Register 25: GPIO Peripheral Identification 4 (GPIOPeriphID4), offset 0xFD0
#define GPIOPeriphID4_offset	0xFD0

//Register 26: GPIO Peripheral Identification 5 (GPIOPeriphID5), offset 0xFD4
#define GPIOPeriphID5_offset	0xFD4

//Register 27: GPIO Peripheral Identification 6 (GPIOPeriphID6), offset 0xFD8
#define GPIOPeriphID6_offset	0xFD8

//Register 28: GPIO Peripheral Identification 7 (GPIOPeriphID7), offset 0xFDC
#define GPIOPeriphID7_offset	0xFDC

//Register 29: GPIO Peripheral Identification 0 (GPIOPeriphID0), offset 0xFE0
#define GPIOPeriphID0_offset	0xFE0

//Register 30: GPIO Peripheral Identification 1 (GPIOPeriphID1), offset 0xFE4
#define GPIOPeriphID1_offset	0xFE4

//Register 31: GPIO Peripheral Identification 2 (GPIOPeriphID2), offset 0xFE8
#define GPIOPeriphID2_offset	0xFE8

//Register 32: GPIO Peripheral Identification 3 (GPIOPeriphID3), offset 0xFEC
#define GPIOPeriphID3_offset	0xFEC

//Register 33: GPIO PrimeCell Identification 0 (GPIOPCellID0), offset 0xFF0
#define GPIOPCellID0_offset	0xFF0

//Register 34: GPIO PrimeCell Identification 1 (GPIOPCellID1), offset 0xFF4
#define GPIOPCellID1_offset	0xFF4

//Register 35: GPIO PrimeCell Identification 2 (GPIOPCellID2), offset 0xFF8
#define GPIOPCellID2_offset	0xFF8

//Register 36: GPIO PrimeCell Identification 3 (GPIOPCellID3), offset 0xFFC
#define GPIOPCellID3_offset	0xFFC
#endif
