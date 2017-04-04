//---
void usartInit (void);
void usartInterruptInit(void);
void usartTx(unsigned char c);
unsigned char usartRx(void);
void usartFlush(void);
void setUp32MHzInternalOsc(void);
