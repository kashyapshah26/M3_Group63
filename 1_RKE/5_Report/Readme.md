
# REMOTE KEYLESS ENTRY ( RKE )
## Description
- Remote Keyless entry systems allow you to unlock and lock the doors to your vehicle without using a key. It is an electronic access system that can be controlled from a distance. RKEs, which are typically used to remotely lock or unlock doors, require the end user to initiate an action that will cause a physical or software key fob to transmit a radio signal to a receiver that controls an electronic lock.

# Identifying features

- Car should get **LOCK** when the Button is pressed **ONCE**
- Car should get **UNLOCK** when the Button is pressed **TWICE**
- Car should get **ACTIVATION/DEACTIVATION** alarm when the Button is pressed **THREE** times
- Car should get **APPROACH LIGHT** when the Button is pressed **FOUR** times


# S.W.O.T analysis
![swot](https://user-images.githubusercontent.com/98817564/157737145-7f2770da-6dd0-4426-9f03-c9e32d54b407.png)

# 5W's & 1H

## WHO
 A person having car can access the this technology 
## **WHAT** 
Remote Wireless Key for Car and it is a lock that uses an electronic remote control as a key which is activated by a handheld device or automatically by proximity.
## **WHERE**
* Inside and Outside car
* At particular range for instance 50 to 60 feet far from the vehicle.
## **WHEN**
When we need to lock, unlock doors and identify car
## **WHY**
Better Security - Traditional keys are easy to lose, can be copied easily, and are simply outdated when it comes to modern security locks. Keyless entry systems require every authorized user to have a unique credential that provides them access to the building.

## **HOW**
The keyless remote is actually a radio. This data stream contains command and for security, rolling codes. The remote keyless system's receiver in the car captures the RF signal, extracts it and sends the data stream to the CPU.

# Behavioral Diagram
## High Level Flow chart Behavioral Diagram
![low level](https://user-images.githubusercontent.com/98817564/157818878-4d580ea3-fab1-4dad-900c-af83f2dbffa1.png)

## Low Level Flow chart Behavioural Diagram
![HIGH LEVEL  drawio](https://user-images.githubusercontent.com/98817564/157822701-c5716377-4a65-437d-ade6-eb3f290cb3ed.png)


# Structural Diagram
## High Level Diagram
![Structural Diagram](https://user-images.githubusercontent.com/98817564/157860960-26206b4b-ca2a-49bd-8ac6-58830bb490db.png)


# Low Level Structural Diagram
![STR](https://user-images.githubusercontent.com/98817564/157860138-4f9d55b9-2f9e-4f09-925d-b1fdbe01769e.png)
# TeatplanandOutput

## 1.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| HL_TP01 | Car Lock | User press the Button once | Should Lock the Car |  Car locked  | 
| HL_TP02 | Car Unlock |  User press the Button Twice | Should Unlock the Car   |  Car unlocked  | 
| HL_TP03 | Alarm activation/deactivation | User  press the button Thrice | Alarm Should get activated/deactivated | Alarm activated/deactivated | 
| HL_TP04 | Approach Light | User press the button Four Times | Approch to Light On | Approach Light On | 
| HL_TP05 | Data Encryption | No of User Clicks | Random Data Should Gets Generated |  Random Data Gets Generated | 

---



## 1.2 LOW LEVEL TEST PLAN



| Test ID (for LED)| Description | Input | Expected output | Actual Output | Passed/Fail |
| --- | --- | --- | --- | --- | --- |
| LL_TP01 | Verify the Car Lock | User should press the Button once |  LED's Should be ON | LED's ON | Passed |
| LL_TP02 | Verify the Car Unlock | User should press the Button Twice |  LED's Should be OFF |  LED's OFF | Passed |
| LL_TP03 | Verify the Car gets Alarm Activation/Deactivation | User should press the Button Thrice | LED ON Should be in Clockwise Rotation | LED's ON  in Clockwise Rotation | Passed| 
| LL_TP04 | Verify the approach Light | User should press the Four Times |LED ON Should be in Anticlockwise Rotation | LED's ON  in Anticlockwise Rotation | Passed |

---

# ImagesandVideos

<img width="960" alt="image" src="https://user-images.githubusercontent.com/98915922/158002888-83594234-7241-41ab-ae4b-07c67aeaaab8.png">
<img width="949" alt="image" src="https://user-images.githubusercontent.com/98915922/158002917-66f08cbd-8b57-4232-bf7e-441b948610ea.png">










