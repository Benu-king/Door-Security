
---

# 🔐 **Door Security System – Benu Edition**

> 🏠 A smart door protection system that detects movement near your door and automatically calls your phone using the **SIM800 GSM module**.
> Stay safe, stay connected — powered by **Nafiyas Solution** ⚙️

---

## 🌟 **Overview**

This project is built to **detect intruders** approaching your door using an **ultrasonic sensor (HC-SR04)**.
When someone comes too close, the system **instantly makes a phone call** to alert you.
All operations and statuses are displayed in real time on the **Serial Monitor**.

---

## ⚡ **Features**

✅ Real-time door monitoring
✅ Automatic intruder call alert (via SIM800)
✅ Friendly Serial Monitor messages
✅ Auto-reset when area becomes clear
✅ Works with Arduino Nano or Uno

---

## 🧩 **Components Required**

| 🔧 Component                | 🔢 Quantity | 📝 Description          |
| --------------------------- | ----------- | ----------------------- |
| Arduino Nano / Uno          | 1           | Main control board      |
| SIM800 GSM Module           | 1           | For making phone calls  |
| Ultrasonic Sensor (HC-SR04) | 1           | Detects object distance |
| Jumper Wires                | Several     | For connections         |
| Power Supply                | 1           | 5V regulated source     |

---

## 🔌 **Circuit Connections**

| Component       | Pin       | Arduino Pin |
| --------------- | --------- | ----------- |
| HC-SR04 Trigger | Trig      | D6          |
| HC-SR04 Echo    | Echo      | D7          |
| SIM800 TX       | TX        | D10         |
| SIM800 RX       | RX        | D9          |
| Power           | VCC / GND | 5V / GND    |
---

## 🧠 **How It Works**

1. The ultrasonic sensor measures distance in front of the door.
2. If an object comes closer than **20 cm**, the system assumes someone is there.
3. The **SIM800 module** makes a call to the saved phone number.
4. When the object moves away, the system resets and continues monitoring.

---

## 📟 **Serial Monitor Output Example**

```
🔐 Door Security System Initialized
📡 Ultrasonic sensor and SIM800 module are active
------------------------------------------------
🚪 Door Distance(safty): 34 cm(Benu)
🚪 Door Distance(safty): 15 cm(Benu)
⚠️  Intruder detected near the door! Placing security call...
📞 Calling owner... Please wait.
📴 Call ended. Resuming monitoring mode...
✅ Door area is secure. System is on standby.
```

---

## 🧰 **Customization**

🛠️ You can easily modify:

* **Detection range:** change the value of `callThreshold`
* **Phone number:** replace `+251952.....` with your own number
* **Delay times:** customize call duration or sensor delay

---

## 👨‍💻 **Developer Info**

👑 Created by:** *Benyas Wondwosen*
🏢 Company:** Nafiyas Solution
📘 Project:** Door Security System (Benu Edition)
💡 Focus:** Smart Home & Embedded Innovation
---
