# REMOTE KEYLESS ENTRY ( RKE )
## Introduction
Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles.

RKE transmission requires two components - a transmitter and a receiver. 

•	Transmitter - RKE key fob, other ID device with RKE integrated 

•	Receiver - Body Control ECU, other ECU with integrated RKE 

RKE operates by broadcasting radio waves on a particular frequency unidirectionally. 

RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams. 

## High Level Requirements
|ID|Description|
|------|------|
|HLR_01|RKE key fob shall send signal to the car ECU|
|HLR_02|Car shall get locked on pressing blue switch once|
|HLR_03|Car shall get unlocked on pressing blue switch twice|
|HLR_04|Car alarm shall get activated/deactivated on pressing blue switch thrice|
|HLR_05|Car Approach Light shall get activated on pressing blue switch four times|

## Low Level Requirements
|ID|ID|Description|
|------|------|------|
|HLR_01|LLR_01|Key shall be in detectable range of the car|
||LLR_02|Key Battery must be charged|
|HLR_02|LLR_01|System shall print message "Lock"|       
||LLR_02|All LED lights shall get turned on at the same time|
|HLR_03|LLR_01|System shall print message "Unlock"|              
||LLR_02|All LED lights shall get turned off at the same time|
|HLR_04|LLR_01|System shall print message "Alarm Activated/Deactivated"|              
||LLR_02|All led shall get turned on in clockwise manner|
|HLR_04|LLR_01|System shall print message "Approach Light"|              
||LLR_02|All led shall get turned on in anti-clockwise manner|







# SWOT Analysis
## Strength:-
1) Remote key is very useful in  situations where car lock is not opening Physically.
2) Broad amount of sensor data available on vehicle or driver status.
3) Convinient & Time saving.

## Weakness:-
1) Range is limited for example 50 feet from the vehicle
2) it is totally  Dependable on Battery.
3) Still missing data communication and data exchange standards and unsolved tasks regarding driver state sensing.
4) Sensing information is not available or sensing tasks have to be passed to e.g. environment perception or connectivity.
5) Use of Single switch for multiple operations might be confusing.

##  Opportunities:-
1) Broad amount of sensor data can be remotely accessed (e.g. tire pressure, engine diagnostics, fatigue monitoring).
2) Existing sensor types and set-ups could be used for advanced connected and automated features.

##  Threats:-
1) Anyone who has access to key can unlock the car.
2) if anyone develop the application on mobile to control the open and closing sytem then this method will be outdated.


