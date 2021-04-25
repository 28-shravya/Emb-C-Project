## LED on due to the actions of 2 switches

## Code 
```
	while(1)
    	{
        if(!(PIND&(1<<PD2)) && !(PIND&(1<<PD3))){
            PORTB |= (1<<PB0);
            _delay_ms(2000);
         }
        else{
            PORTB &= ~(1<<PB0);
            _delay_ms(2000);
         }
   	}

```
