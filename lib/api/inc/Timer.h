#ifndef __TIMER_H
#define __TIMER_H

/* includes ---------------------------------------------------------------- */
#include "Common.h"

/* defines ----------------------------------------------------------------- */
/* class ------------------------------------------------------------------- */
class Timer
{
	protected:
		
		TIM_TypeDef* m_timer;
	
	public:
		
		Timer(TIM_TypeDef* timer);
		void start(void);
		void stop(void);
		void reset(void);
		uint32_t read(void);
		uint32_t read_ms(void);
		uint32_t read_us(void);
	
		void attach(void(*f)(void));
		void detach(void);
};

class Ticker : public Timer
{
	private:
		
	public:
		
		Ticker(TIM_TypeDef* timer);
		void attach_ms(void(*f)(void), uint32_t ms);
		void attach_us(void(*f)(void), uint32_t us);
};

class Timeout : public Timer
{
	private:
	
	public:
		
		Timeout(TIM_TypeDef* timer);
		void attach_ms(void(*f)(void), uint32_t ms);
		void attach_us(void(*f)(void), uint32_t us);
		void detach(void);
		void start(void);
};

#endif /* __TIMER_H */
