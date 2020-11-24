/* 
//                    MSP430G2231 (FLASH 2KB)
//                      +-\/-+
//               VCC   1|    |20  GND
//         (A0)  P1.0  2|    |19  XIN   P2.6  
//         (A1)  P1.1  3|    |18  XOUT  P2.7  
//         (A2)  P1.2  4|    |17  TEST
//         (A3)  P1.3  5|    |16  RST#
//         (A4)  P1.4  6|    |15  P1.7  (A7) (SDA) (MOSI) 
//  (SCLK) (A5)  P1.5  7|    |14  P1.6  (A6) (SCL) (MISO) 
//               ----  8|    |13  ----
//               ----  9|    |12  ----
//               ---- 10|    |11  ----
//                      +----+

Con el MSP430G2231 podemos usar cualquiera de dos o tres opciones para cada pin:
P1_0 --> 2  --> RED_LED
P1_1 --> 3
P1_2 --> 4
P1_3 --> 5  --> PUSH2
P1_4 --> 6
P1_5 --> 7
P1_6 --> 14 --> GREEN_LED
P1_7 --> 15
P2_7 --> 18  marcado con XOUT
P2_6 --> 19  marcado con XIN
_______________________________________________________________________________________
//                        MSP430G2452 (FLASH 8KB)
//                          +-\/-+
//                   VCC   1|    |20  GND
//             (A0)  P1.0  2|    |19  XIN   P2.6
//       (TX)  (A1)  P1.1  3|    |18  XOUT  P2.7
// (PWM) (RX)  (A2)  P1.2  4|    |17  TEST
//             (A3)  P1.3  5|    |16  RST#
//             (A4)  P1.4  6|    |15  P1.7  (A7) (SDA) (MISO) 
//      (SCLK) (A5)  P1.5  7|    |14  P1.6  (A6) (SCL) (MOSI) (PWM)
//      (CS)         P2.0  8|    |13  P2.5
//                   P2.1  9|    |12  P2.4
//                   P2.2 10|    |11  P2.3
//                          +----+
// UART por Software (SW UART) ubicar los Jumpers EN REV.1.5
_______________________________________________________________________________________
//                        MSP430G2553 (FLASH 16KB)
//                          +-\/-+
//                   VCC   1|    |20  GND
//             (A0)  P1.0  2|    |19  XIN   P2.6               (PWMx)
//       (RX)  (A1)  P1.1  3|    |18  XOUT  P2.7
//(PWMx) (TX)  (A2)  P1.2  4|    |17  TEST
//             (A3)  P1.3  5|    |16  RST#
//             (A4)  P1.4  6|    |15  P1.7  (A7) (SDA0) (MISO) 
//      (SCLK) (A5)  P1.5  7|    |14  P1.6  (A6) (SCL0) (MOSI) (PWMx)
//      (CS)         P2.0  8|    |13  P2.5                     (PWMz)
//(PWMy)(SCL1)       P2.1  9|    |12  P2.4                     (PWMz)
//(PWMy)(SDA1)       P2.2 10|    |11  P2.3
//                          +----+
// (A10) --> Temperature
// Escoges: PWM4 o PWM14 o PWM19
// Escoges: PWM9 o PWM10
// Escoges: PWM12 o PWM13
// I2C por defecto el 1
// Software I2C maestro unicamente
// Uart por Hardware (HW UART) ubicar los Jumpers EN REV.1.5

Con el MSP430G2452 y el MSP430G2553 podemos usar cualquiera de dos o tres opciones para cada pin:
P1_0 --> 2  --> RED_LED
P1_1 --> 3
P1_2 --> 4
P1_3 --> 5  --> PUSH2
P1_4 --> 6
P1_5 --> 7
_____________________________
P2_0 --> 8
P2_1 --> 9
P2_2 --> 10
P2_3 --> 11
P2_4 --> 12
P2_5 --> 13
_____________________________
P1_6 --> 14 --> GREEN_LED
P1_7 --> 15
P2_7 --> 18  marcado con XOUT
P2_6 --> 19  marcado con XIN
*/
#define LED P2_6 // pin marcado como XIN

  
// El setup se ejecutará siempre al resetear la tarjeta o al energizarla.
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);     
}

// El loop se ejecutará para siempre, siempre y cuando la tarjeta permanezca energizada y no sea oprimido reset.
void loop() {
  digitalWrite(LED, HIGH);   // enciende el LED (HIGH está en el nivel de voltaje del VCC del microcontrolador)
  delay(500);               // espera un segundo
  digitalWrite(LED, LOW);    // apaga el LED (LOW está en el nivel de GND del microcotrolador)
  delay(500); // espera 100 milisegundos
 
}
