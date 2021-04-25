## LED on due to the actions of 2 switches

## Code 
```
	while(1)
    	{
        if(!(PIND&(1<<PD0)) && !(PIND&(1<<PD1))){
            PORTB |= (1<<PB0);
            _delay_ms(2000);
         }
        else{
            PORTB &= ~(1<<PB0);
            _delay_ms(2000);
         }
   	}

```
