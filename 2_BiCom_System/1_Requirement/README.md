# About the BiCom System

## Description

- This Project is an BiCom System,and is designed to remotely know the statues of your automobiles, BiCom System operates by broadcasting radio waves on a particular frequency Bidirectionally.

# Identifying features
- It shall print window status of the car when Button is pressed ONCE
- It shall print alarm status the car when Button is pressed TWICE
- It shall print car battery info when the Button is pressed THREE times
- It shall print door status of the car when the Button is pressed FOUR times

# 5W's & 1H

## **WHAT** 
BiCom System for Car is a system that uses a 40-bit rolling code that creats an encryption in between the key and car (transmitter and recever).

## **WHO**
 Any person who is having car that is able to use this type of tecnology.

## **WHERE**
* Inside and Outside car
* At particular range for instance 50 to 60 feet far from the vehicle.

## **WHEN**
* When we need to lock, unlock doors and identify car
* when we need to check the status of the door , alarm , car battery and window.

## **WHY**
* Better Security - Traditional keys are easy to lose, can be copied easily, and are simply outdated when it comes to modern security locks. 
* BiCom System systems require every authorized user to have a unique credential that provides them access to the building.

## **HOW**
* The controller chip in any modern controller uses something called a hopping code or a rolling code to provide security. 
* For example, it describes a system that uses a 40-bit rolling code. Forty bits provide 240 (about 1 trillion) possible codes.



# Requirements
## High Level Requirements
|ID|	High Level Requirements|
|---------|-------------------------|
|HLR 1|	It shall print THE STATUS OF WINDOW IN CAR|
|HLR 2|	It shall print  THE STATUS OF ALARM IN CAR|
|HLR 3|	It shall print  THE STATUS OF BATTERY IN CAR|
|HLR 4|	It shall print  THE STATUS OF DOOR IN CAR|


## Low Level Requirements
|ID|Description|
|------|------|
| LLR_01 | If the User presses the Blue Button ONE TIME, All Led should be turned ON |
| LLR_02 | System shall print message "Window Status" |
| LLR_03 | If the User presses the Blue Button TWO TIMES, All Led should be turned OFF |       
| LLR_04 | System shall print message "Alarm Status" |
| LLR_05 | If the User presses the Blue Button THREE TIMES, All Led should rotate in clockwise direction |              
| LLR_06 | System shall print message "Car Battery Status" |
| LLR_07 | If the User presses the Blue Button FOUR TIMES, All Led should rotate in anti-clockwise direction |              
| LLR_08 | System shall print message "Door Status" |
