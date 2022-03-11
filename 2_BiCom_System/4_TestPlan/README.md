# Test Plan And Output

# 1.1 HIGH LEVEL

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| HL_TP01 | Print The Status Of Window | When User press the Button once | Should Print The Status Of Window |  The Status Of Window is  | 
| HL_TP02 | Print The Status Of Alaram |  When User press the Button Twice | Should Print The Status Of Alaram   |  The Status Of Alaram is  | 
| HL_TP03 | Print The Status Of Car Battery | When User  press the button Thrice | Should Print The Status Of Car Battery | The Status Of Car Battery is | 
| HL_TP04 | Print The Status Of Door | When User press the button Four Times | Should Print The Status Of Door | The Status Of Door is | 

---

# 1.2 LOW LEVEL



| Test ID (for LED)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| LL_TP01 | Verify the Window Status | User should press the Button once |  LED's Should be ON | LED's are ON |  |
| LL_TP02 | Verify the Alaram Status | User should press the Button Twice |  LED's Should be OFF |  LED's are OFF |  |
| LL_TP03 | Verify the Car Battery Status | User should press the Button Thrice | LED ON Should be in Clockwise Rotation | LED's ON are in Clockwise Rotation | | 
| LL_TP04 | Verify the approach Door Status | User should press the Four Times |LED ON Should be in Anticlockwise Rotation | LED's ON are in Anticlockwise Rotation |  |
