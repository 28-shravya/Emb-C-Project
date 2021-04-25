## LED on due to the actions of 2 switches

|ON|OFF|
|:--:|:--:|
|simulation/LED on.png|simulation/LED off.png|

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
