#####################################################################
#####Sevcon CAN Control##########
#####################################################################
#PCAN operation instructions

Do the following to run the recievetest program:


>> ./receivetest -b=0x031C -f=/dev/pcan32	(Starts the recieve test program at the baudrate of 125000 [-b =0x031C] and initializes the CAN location to pcan32)

Do the following to run the transmittest program:

>> ./transmitest sevconmove.txt -f=/dev/pcan32 -b=0x031C -r=5000 (Starts the transmist test program at the baudrate of 125000 [-b =0x031C] and initializes the CAN location to pcan32 and send the CAN messages stored in "sevconmove.txt" with a random delays between 0 and 5000 ms.)



The python program sevcon_mover.py writes to a file which is used by the transmittest program to send a set of desired can messages.



Notes for sevcon_mover_degrees:

Each degree movement roughly equals 270deg/(decimal for 4000h) in decimal, which is approx = 60.68. Do calculations accordingly.


