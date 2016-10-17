# bgm111

A number of firmware examples for trying out onboard peripherals for BGM111-A(V1) SLWSTK6101A (starter kit).

All of the examples are written in BGScript (bgm-1.0.4-1073 sdk) and uploaded to BGM111 using bin/bgtool.exe. 

- <i>all_in_one</i> illustrates how to set LEDs, making them blink (by using timers), receiving temperature data from Si7021 and getting data from BMA280 accelerometer on the expansion board.

- <i>barebone</i> has no functionality and is meant to illustrate minimal power consumption, and be a base for new projects.

- <i>wake_on_int</i> builds on <i>all_in_one</i> and adds an interrupt (orientation int from BMA280 accelerometer) that wakes the module and makes it advertise for 5 seconds. If no connection is established within that time period the modules goes back to sleep and waits for a new interrupt.

- <i>power_management</i> gets VDD voltage level (battery voltage) by comparing it to internal 5V ref voltage in the inbuilt 12bit ADC.


