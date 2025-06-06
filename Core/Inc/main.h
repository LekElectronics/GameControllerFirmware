/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);
void MX_WWDG_Init(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define IN11_Pin GPIO_PIN_14
#define IN11_GPIO_Port GPIOC
#define IN12_Pin GPIO_PIN_15
#define IN12_GPIO_Port GPIOC
#define PWM1_Pin GPIO_PIN_0
#define PWM1_GPIO_Port GPIOA
#define PWM2_Pin GPIO_PIN_1
#define PWM2_GPIO_Port GPIOA
#define PWM3_Pin GPIO_PIN_2
#define PWM3_GPIO_Port GPIOA
#define OUT3_Pin GPIO_PIN_3
#define OUT3_GPIO_Port GPIOA
#define OUT2_Pin GPIO_PIN_4
#define OUT2_GPIO_Port GPIOA
#define OUT1_Pin GPIO_PIN_5
#define OUT1_GPIO_Port GPIOA
#define OUT4_Pin GPIO_PIN_6
#define OUT4_GPIO_Port GPIOA
#define OUT5_Pin GPIO_PIN_7
#define OUT5_GPIO_Port GPIOA
#define OUT6_Pin GPIO_PIN_0
#define OUT6_GPIO_Port GPIOB
#define OUT7_Pin GPIO_PIN_1
#define OUT7_GPIO_Port GPIOB
#define OUT8_Pin GPIO_PIN_2
#define OUT8_GPIO_Port GPIOB
#define OUT9_Pin GPIO_PIN_10
#define OUT9_GPIO_Port GPIOB
#define OUT10_Pin GPIO_PIN_11
#define OUT10_GPIO_Port GPIOB
#define OUT11_Pin GPIO_PIN_12
#define OUT11_GPIO_Port GPIOB
#define OUT12_Pin GPIO_PIN_13
#define OUT12_GPIO_Port GPIOB
#define ONESHOT_Pin GPIO_PIN_14
#define ONESHOT_GPIO_Port GPIOB
#define IN1_Pin GPIO_PIN_15
#define IN1_GPIO_Port GPIOB
#define IN2_Pin GPIO_PIN_8
#define IN2_GPIO_Port GPIOA
#define IN3_Pin GPIO_PIN_9
#define IN3_GPIO_Port GPIOA
#define IN4_Pin GPIO_PIN_10
#define IN4_GPIO_Port GPIOA
#define IN6_Pin GPIO_PIN_15
#define IN6_GPIO_Port GPIOA
#define IN5_Pin GPIO_PIN_3
#define IN5_GPIO_Port GPIOB
#define IN7_Pin GPIO_PIN_4
#define IN7_GPIO_Port GPIOB
#define IN8_Pin GPIO_PIN_5
#define IN8_GPIO_Port GPIOB
#define IN9_Pin GPIO_PIN_6
#define IN9_GPIO_Port GPIOB
#define IN10_Pin GPIO_PIN_7
#define IN10_GPIO_Port GPIOB
#define CAN_RX_Pin GPIO_PIN_8
#define CAN_RX_GPIO_Port GPIOB
#define CAN_TX_Pin GPIO_PIN_9
#define CAN_TX_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
