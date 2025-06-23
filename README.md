# 🕒 Digital Clock in C

A simple terminal-based digital clock written in C that displays the current time and updates every second.

---

## ✅ Features

- Displays time in `HH:MM:SS` format
- Updates every second using a delay
- Uses basic C standard libraries (`time.h`, `stdio.h`)
- Works on Windows using `system("cls")` or on Linux with `system("clear")`

---

## 🛠 How It Works

- Uses `time()` and `localtime()` from the C standard library
- Loops continuously to update the time every second
- Clears the screen before each update for a real-time effect

---

## 💻 How to Compile and Run

### ▶️ Compile:

```bash
gcc digital_clock.c -o clock.exe
