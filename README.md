# 🔑 Remote Keylogger with DigiSpark (ATTiny85) and Python (Discord Webhook)

> **⚠️ Disclaimer:** This project is for **educational and ethical research purposes only** (e.g., red teaming, penetration testing with permission). Misuse can be illegal and is strictly discouraged.

<p align="center">
<img src="https://i.ibb.co/jZ2wvX0/NEWEV-AT.png" width="172" height="123">
</p>

---

## 🧠 Overview

This project showcases a USB HID-based **remote keylogger** using the **DigiSpark ATTiny85** microcontroller and **Python**. It captures keystrokes and exfiltrates them via a **Discord Webhook**, simulating real-world attack techniques for educational training and red team labs.

---

## 🧰 Components Used

* 🧩 DigiSpark USB Board (ATTiny85)
* ⚙️ Arduino IDE for flashing
* 🐍 Python 3.x
* 📡 Discord Webhook for data exfiltration
* 🖥️ Target OS: Windows (default setup; can be adapted)

---

## 📦 Features

* Plug-and-play USB key injection
* Executes hidden Python payload via PowerShell
* Captures keystrokes
* Sends data to a private Discord channel using Webhooks
* Lightweight and silent

---

## ⚙️ How It Works

1. DigiSpark injects a PowerShell command to download and run the keylogger.
2. The Python script starts logging keystrokes in the background.
3. Logged keystrokes are sent to a Discord channel via a webhook.
4. Attacker monitors keystrokes in real-time or asynchronously via Discord.

---

## 📦 Requires:

- 📝 Replace `WEBHOOK_URL` with your actual Discord webhook URL.

---

## 🧪 Test Environment

* 🖥️ Target OS: Windows 10
* DigiSpark ATTiny85 board
* Python 3.9+
* Python HTTP server for payload delivery
* Discord channel with webhook set up

---

## 🛡️ Mitigation Tips

* Disable USB HID devices where not needed.
* Use endpoint protection that detects USB-based HID attacks.
* Monitor outbound traffic for Discord webhook activity.
* Implement physical port lockdowns (BIOS/UEFI + Group Policy)

---


## 🧠 For Researchers

For advanced scenarios, consider:

* Obfuscating Python payload
* Auto-starting on reboot (e.g., registry persistence)
* Adding clipboard logging or screenshots

