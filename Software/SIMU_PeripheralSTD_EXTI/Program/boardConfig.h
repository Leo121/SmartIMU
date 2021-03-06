/**
  *      __            ____
  *     / /__ _  __   / __/                      __  
  *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
  *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
  *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
  *                    /_/   github.com/KitSprout    
  * 
  * @file    boardConfig.h
  * @author  KitSprout
  * @date    18-Jan-2017
  * @brief   
  * 
  */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __BOARDCONFIG_H
#define __BOARDCONFIG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
/* Exported types --------------------------------------------------------------------------*/
/* Exported constants ----------------------------------------------------------------------*/

#define KS_HW_BOARD_NAME              "SmartIMU"
#define KS_HW_MCU_NAME                "STM32F412Rx"

#define NVIC_IRQn_GROUP               NVIC_PriorityGroup_4
#define SYSCFG_CLK_ENABLE()           RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);

/* -------- LED and KEY */
#define LED_R_PIN                     GPIO_Pin_15
#define LED_R_GPIO_PORT               GPIOC
#define LED_R_Set()                   __GPIO_SET(LED_R_GPIO_PORT, LED_R_PIN)
#define LED_R_Reset()                 __GPIO_RST(LED_R_GPIO_PORT, LED_R_PIN)
#define LED_R_Toggle()                __GPIO_TOG(LED_R_GPIO_PORT, LED_R_PIN)

#define LED_G_PIN                     GPIO_Pin_14
#define LED_G_GPIO_PORT               GPIOC
#define LED_G_Set()                   __GPIO_SET(LED_G_GPIO_PORT, LED_G_PIN)
#define LED_G_Reset()                 __GPIO_RST(LED_G_GPIO_PORT, LED_G_PIN)
#define LED_G_Toggle()                __GPIO_TOG(LED_G_GPIO_PORT, LED_G_PIN)

#define LED_B_PIN                     GPIO_Pin_13
#define LED_B_GPIO_PORT               GPIOC
#define LED_B_Set()                   __GPIO_SET(LED_B_GPIO_PORT, LED_B_PIN)
#define LED_B_Reset()                 __GPIO_RST(LED_B_GPIO_PORT, LED_B_PIN)
#define LED_B_Toggle()                __GPIO_TOG(LED_B_GPIO_PORT, LED_B_PIN)

#define KEY_PIN                       GPIO_Pin_0
#define KEY_GPIO_PORT                 GPIOB
#define KEY_Read()                    (__GPIO_READ(KEY_GPIO_PORT, KEY_PIN) == KEY_PIN)

#define KEY_IRQn                      EXTI0_IRQn
#define KEY_EXTI_LINE                 EXTI_Line0
#define KEY_PIN_SOURCE                EXTI_PinSource0
#define KEY_PORT_SOURCE               EXTI_PortSourceGPIOB
#define KEY_IRQn_PREEMPT              0x000F
#define KEY_IRQn_SUB                  0x0000

/* Exported functions ----------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif

/*************************************** END OF FILE ****************************************/
