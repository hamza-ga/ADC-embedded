/*
 * ADC_interface.h
 *
 *  Created on: Sep 5, 2021
 *      Author: hp
 */

#ifndef ADC_ADC_INTERFACE_H_
#define ADC_ADC_INTERFACE_H_

void ADC_init(void);
void ADC_startConversion(u8 chanel_no);
u16 ADC_readValue(u8 chanel_no);//polling on flag
void ADC_Enable(void);
void ADC_Disble(void);
u16 ADC_getAnalogValue(u8 chanel_no);//used with intrupts

#endif /* ADC_ADC_INTERFACE_H_ */
