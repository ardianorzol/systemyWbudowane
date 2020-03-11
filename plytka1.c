#include <p24fj128ga010.h>

//Konfiguracja dla Explorer 16 z progr. icd2
_CONFIG1(JTAGEN_OFF & GCP_OFF & GWRP_OFF & BKBUG_OFF & COE_OFF & FWDTEN_OFF)
_CONFIG2(FCKSM_CSDCMD & OSCIOFNC_ON & POSCMOD_HS & FNOSC_PRI)

#define SCALE 308L

int main(void){
unsigned long i;
unsigned char display=0;
//inicjalizacja
 PORTA=0x0000;
 TRISA=0xFF00;
 TRISD=0xFFFF;
 
//niekoĹ?czÄ?ca siÄ? pÄ?tla
unsigned int gray = display;
again:
	Nop();
	PORTA=(unsigned int) gray;
	for(i=200L*SCALE;i>0;i--) Nop();

	gray = display ^ display>>1;

	display = display+1;
	goto again;
	
	goto again;

}

/*
// cw2
again:
	Nop();
	PORTA=(unsigned int) display;
	for(i=500L*SCALE;i>0;i--) Nop();
	if (PORTDbits.RD13 == 0)
	   display=display-1;
	else if(PORTDbits.RD6 == 0)
	   display=0;
	else 
	   display=display+1;
	goto again;
	
	goto again;

//1.1
again:
	Nop();
	PORTA=(unsigned int) display;
	for(i=100L*SCALE;i>0;i--) Nop();
	   display=display+1;
	goto again;
	
	goto again;

//1.2
display = 255;
again:
	Nop();
	PORTA=(unsigned int) display;
	for(i=100L*SCALE;i>0;i--) Nop();
	   display=display-1;
	goto again;
	
	goto again;

//1.3
unsigned int gray = display;
again:
	Nop();
	PORTA=(unsigned int) gray;
	for(i=200L*SCALE;i>0;i--) Nop();

	gray = display ^ display>>1;

	display = display+1;
	goto again;
	
	goto again;

}
*/
