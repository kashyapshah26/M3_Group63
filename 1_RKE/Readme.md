
# M3_Group63_Remote Keyless Entry
 ## Batches

[![CI](https://github.com/kashyapshah26/M3_Group63/actions/workflows/main.yml/badge.svg)](https://github.com/kashyapshah26/M3_Group63/actions/workflows/main.yml)

[![Build](https://github.com/kashyapshah26/M3_Group63/actions/workflows/Build.yml/badge.svg)](https://github.com/kashyapshah26/M3_Group63/actions/workflows/Build.yml) 

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/dc14bf247af043e09e64c67b0bf43673)](https://www.codacy.com/gh/RIYA45088/M3_Group63-1/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=RIYA45088/M3_Group63-1&amp;utm_campaign=Badge_Grade)

# Code Quality
![Code Quality](https://api.codiga.io/project/31908/score/svg)

# Code Grade
![quality grade](https://api.codiga.io/project/31908/status/svg)



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



# Requirements



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

