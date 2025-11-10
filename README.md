🔐 Door Security System with SIM800 and Ultrasonic Sensor

This project is a smart door security system that detects motion near a door using an ultrasonic sensor and automatically makes a phone call alert using the SIM800 GSM module.
It’s designed to help protect your home by notifying you instantly when someone approaches the door.

🧠 Features

📡 Ultrasonic distance detection (measures object distance in cm)

📞 Automatic phone call alert when someone is detected near the door

✅ Real-time status monitoring via Serial Monitor

⚙️ Auto-reset system when the area becomes clear

💬 Friendly and informative Serial Monitor messages

🧰 Components Required
Component	Quantity	Description
Arduino Nano / Uno	1	Main controller board
SIM800 GSM Module	1	To make phone calls
Ultrasonic Sensor (HC-SR04)	1	For distance measurement
Jumper Wires	Several	For connections
Power Supply	1	5V regulated power
🔌 Pin Connections
Component	Pin	Arduino Pin
Ultrasonic Sensor	Trig	D6
Ultrasonic Sensor	Echo	D7
SIM800 Module	TX	D10
SIM800 Module	RX	D9
Power (VCC/GND)	—	5V / GND
🧾 Code Explanation

Distance Measurement
The HC-SR04 sensor sends a pulse to measure the distance between the door and any approaching object.

Intruder Detection
If the measured distance is below 20 cm (configurable), the system assumes an intruder is present.

Automatic Call
The SIM800 module calls the owner’s phone number (+2519523,,,,,) to alert them.

Reset Condition
When no object is detected (distance > 20 cm), the system resets and waits for the next event.

📟 Serial Monitor Output Example
🔐 Door Security System Initialized
📡 Ultrasonic sensor and SIM800 module are active
------------------------------------------------
🚪 Door Distance(safty): 35 cm(Benu)
🚪 Door Distance(safty): 15 cm(Benu)
⚠️  Intruder detected near the door! Placing security call...
📞 Calling owner... Please wait.
📴 Call ended. Resuming monitoring mode...
✅ Door area is secure. System is on standby.

🧩 Customization

Change callThreshold to adjust the detection range (default: 20 cm).

Replace the phone number inside makeCall("+251952306750") with your own.

Add SMS alert functionality if you want both call and text notifications.

👨‍💻 Developed By

Benyas Wondwosen
Smart Systems & Embedded Projects Developer
Project Name: Door Security System (Benu Edition)
Powered by Nafiyas Solution
