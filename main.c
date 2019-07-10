#include <MKL25Z4.h>

int main(void)
{
	// SystemCoreClockUpdate(); // 
	
	// Enable clocking on the port
	SIM->SCGC5 |= (1<<9);
	
	// Configure the port as GPIO
	PORTA->PCR[1] = (1<<8); // 0x103
	
	// Configure the port as output/input
	
	
	return 0;
}