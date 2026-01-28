# KDMapper-Hex

> KDMapper variant with an embedded driver stored as hexadecimal data.

---

## Overview

**KDMapper-Hex** allows loading a kernel driver **without placing a `.sys` file on disk**.  
The driver is embedded directly into the executable as hexadecimal data and mapped at runtime.

---

## Features

- **No `.sys` files** on disk  
- **Single executable** deployment  
- **Standard KDMapper behavior**  
- Driver stored as **embedded hex data**  
- Uses **Intel driver mapping method**

---

## How It Works

1. Driver binary is converted to hexadecimal  
2. Hex data is embedded in `Hex.hpp`  
3. Hex is reconstructed into a binary image at runtime  
4. KDMapper maps the driver into kernel memory  

---

## Notes

- Based on the original **KDMapper** project  
- Driver is **never written to disk**  
- No file I/O related to the driver  

---

## Requirements

- Windows 7 or newer  
- Visual Studio 2015+  
- Administrator privileges  

---

## License

This project is based on the original **KDMapper**  
All original license terms apply
