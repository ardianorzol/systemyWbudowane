#include <p24fj128ga010.h>

//Konfiguracja dla Explorer 16 z progr. icd2
_CONFIG1(JTAGEN_OFF & GCP_OFF & GWRP_OFF & BKBUG_OFF & COE_OFF & FWDTEN_OFF)
_CONFIG2(FCKSM_CSDCMD & OSCIOFNC_ON & POSCMOD_HS & FNOSC_PRI) //oscylator

#define SCALE 308L

int main(void){
unsigned long i;
unsigned char display=0;
//inicjalizacja
 PORTA=0x0000;	//wyswietlacz
 TRISA=0xFF00;	//?
 TRISD=0xFFFF;	//?
 
//niekoÄąÂ„czĂ„Â…ca siĂ„Â™ pĂ„Â™tla 
again:
	Nop(); //no operation -> pominiecie 1 cyklu
	PORTA=(unsigned int) display;	//	wypisanie display na PORTA (diody)
	for(i=500L*SCALE;i>0;i--) Nop();	//	kolejne omijanie cykli przez iles czasu
	if (PORTDbits.RD13 == 0)
	   display=display-1;	// zmiana display o 1 w dol, gdy klikamy RD13
	else if(PORTDbits.RD6 == 0)
	   display=0;	//zerowanie display, gdy klikamy RD6
	else 
	   display=display+1;	// normalnie: display++
	goto again;
	
	goto again;

}
