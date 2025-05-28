#include"TLE926x.h"
 
unsigned long timeref;
bool irqSBC = false;

void irqSBC_Handler()
{
  irqSBC = true ;
}

void irq_SBC_WK2_WU_Handler(uint8_t Value)
{
  Serial.println ("WK2_WU detected");

}
void irq_SBC_WK1_WU_Handler(uint8_t Value)
{
  Serial.println ("WK1_WU detected");

}

void setup() {
  // put your setup code here, to run once:

  Serial.begin (9600);
  Serial.println("Initializing SBC...");
  if(sbc_init().flippedBitsMask!=0)
  {
     Serial.println("Failed to initialize SBC at register 0b");
  }
  else
  {
    Serial.println("Successfull");
  }
  sbc_register_callback (SBC_ISR_WK2_WU, irq_SBC_WK2_WU_Handler);
  sbc_register_callback (SBC_ISR_WK1_WU, irq_SBC_WK1_WU_Handler);

  /* Initialize interrupts */
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), irqSBC_Handler, RISING);
  
  sbc_configure_watchdog(TIME_OUT_WD, WD_STARTS_AFTER_CAN_LIN_WAKE, WD_200MS);
}

void loop() {

  /* Trigger Watchdog every 100ms */
  if (millis() > timeref + 100) {
    sbc_wd_trigger();
    timeref = millis();
  }

  /* Handle SBC_ISR() if INTN was toggeled */
  if (irqSBC) {
    SBC_ISR();
    irqSBC = false;
  }

}
