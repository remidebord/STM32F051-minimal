#ifndef __ANALOG_H
#define __ANALOG_H

/* includes ---------------------------------------------------------------- */
#include "GPIO.h"

/* defines ----------------------------------------------------------------- */
#define ADC_CHANNELS_MAX 19
#define ADC_CHANNEL_GPIOA_OFFSET 0 	/* IN[0:7] */
#define ADC_CHANNEL_GPIOB_OFFSET 8 	/* IN[8:9] */
#define ADC_CHANNEL_GPIOC_OFFSET 10 /* IN[10:15] */

/* class ------------------------------------------------------------------- */
class AnalogIn : public GPIO
{
	private:
		
		uint8_t m_channel;
	
	public:
		
		static __IO uint8_t m_channels;
		static __IO uint8_t m_rank[ADC_CHANNELS_MAX];
		static __IO uint16_t m_value[ADC_CHANNELS_MAX];
	
		AnalogIn(PinName pin);
	
		static void adc(void);
		static void dma(void);
		static uint8_t channel(PinName pin);
		static void sort(uint8_t* buffer, uint8_t size);
	
		uint16_t read_b();											// Read (conversion)
		uint16_t read();												// Read (no conversion)
		operator uint16_t();										// Read (no conversion)
};

#endif
