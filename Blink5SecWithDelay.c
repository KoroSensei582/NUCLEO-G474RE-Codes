// Check if button on PA0 is pressed
    if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET)
    {
        // Blink PA4 for 5 seconds (10 x 500ms = 5s)
        for (int i = 0; i < 10; i++)
        {
            HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_4);
            HAL_Delay(500);
        }
        // Make sure LED is off after blinking
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
    }

      // Check if button on PA1 is pressed
    if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1) == GPIO_PIN_SET)
    {
        // Blink PA4 for 5 seconds (10 x 500ms = 5s)
        for (int i = 0; i < 10; i++)
        {
            HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0);
            HAL_Delay(500);
        }
        // Make sure LED is off after blinking
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
    }

   /* 
   White right turn sig
 
   Green left turn sig
 
   A0 pa0 GPIO EXIT
   A1 pa1 GPIO EXIT
   
   ensure GPIO mode is set to External Interrupt Mode with Rising edge trigger detection and no pull-up or pull-down

   Go to NVIC config and enable 
   EXTI line0 interrupt	true	
   EXTI line1 interrupt	true
   set premption priority and subpriority to 0
A2 pa4 white wire GPIO OUTPUT
A3 pb0 green wire GPIO OUTPUT
    */
// WORKS WITH LED TESTBOARD 1