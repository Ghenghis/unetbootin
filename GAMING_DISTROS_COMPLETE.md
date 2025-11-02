# Gaming Distributions - Complete Guide

## All Gaming-Focused Linux Distributions

---

## SteamOS
[Previously documented - see COMPLETE_DISTRO_ENCYCLOPEDIA.md]

---

## ChimeraOS
[Previously documented - see DISTRO_DETAILED_GUIDE.md]

---

## Lakka
[Previously documented - see DISTRO_DETAILED_GUIDE.md]

---

## Batocera
[Previously documented - see DISTRO_DETAILED_GUIDE.md]

---

## LinuxConsole
**Category:** Gaming/Desktop
**Official Site:** https://linuxconsole.org/
**Download:** https://sourceforge.net/projects/linuxconsole/
**Documentation:** https://linuxconsole.org/index.php?title=Documentation

### What's Included
- LXDE desktop environment
- Pre-configured game emulators
- Steam client
- Wine for Windows games
- Lightweight gaming platform

### Pre-installed Emulators
- PCSX (PlayStation 1)
- PCSX2 (PlayStation 2)
- PPSSPP (PlayStation Portable)
- Dolphin (GameCube/Wii)
- DeSmuME (Nintendo DS)
- VBA-M (Game Boy Advance)
- Snes9x (Super Nintendo)

### Pre-installed Gaming Tools
- Steam client
- Wine/PlayOnLinux
- RetroArch
- Game launchers
- Controller configuration tools

### Unique Features
- **Fast boot** - optimized for quick startup
- **Game-focused UI** - minimal distractions
- **Rolling release** - `liveupdate` command updates kernel/modules
- **Lightweight** - LXDE desktop uses minimal resources
- **Pre-configured** - emulators ready to use
- **Live update** - update without reinstalling

### Use Cases
- Quick gaming PC setup
- Dual-boot gaming system
- Retro + modern gaming combo
- Gaming on older hardware
- Living room gaming PC

### Hardware Requirements
- Minimum: 2GB RAM, dual-core CPU, 20GB storage
- Recommended: 4GB RAM, quad-core, 100GB SSD
- For modern games: 8GB+ RAM, dedicated GPU

### Controller Support
- Xbox 360/One controllers
- PlayStation 3/4 controllers
- Generic USB/Bluetooth controllers
- Keyboard + mouse

### Community Resources
- Official Forum: https://linuxconsole.org/phpBB3/
- SourceForge: Project page and downloads

### Quick Start
1. Boot LinuxConsole ISO
2. Login (check documentation for credentials)
3. Run `liveupdate` to get latest kernel
4. Install Steam games or add ROMs
5. Configure controllers
6. Start gaming!

### vs Other Gaming Distros

| Feature | LinuxConsole | SteamOS | Batocera |
|---------|--------------|---------|----------|
| **Desktop** | Yes (LXDE) | Yes (KDE) | No |
| **Steam** | ✅ | ✅ | ❌ |
| **Emulators** | ✅ | Via Flatpak | ✅ |
| **Updates** | liveupdate | Auto | Auto |
| **Weight** | Light | Heavy | Light |

### Best For
- Mixed gaming (emulation + Steam)
- Users wanting a desktop too
- Quick setup needs
- Older hardware

---

# SECURITY & PENETRATION TESTING

## Kali Linux
**Category:** Security/Penetration Testing
**Official Site:** https://www.kali.org/
**Download:** https://www.kali.org/get-kali/
**Documentation:** https://www.kali.org/docs/

### What's Included
- 600+ penetration testing tools
- GNOME/XFCE/KDE desktop options
- Metasploit Framework
- Burp Suite
- Wireshark
- Nmap, John the Ripper, Aircrack-ng
- Exploitation frameworks

### Pre-installed Tool Categories

**Information Gathering:**
- Nmap (network scanner)
- Maltego (OSINT)
- theHarvester (email/domain info)
- Recon-ng (web reconnaissance)
- DNSenum, Fierce (DNS tools)

**Vulnerability Analysis:**
- OpenVAS (vulnerability scanner)
- Nikto (web server scanner)
- SQLmap (SQL injection)
- WPScan (WordPress scanner)
- Lynis (security auditing)

**Wireless Attacks:**
- Aircrack-ng suite
- Wifite (automated)
- Kismet (network detector)
- Reaver (WPS attacks)
- Fern Wifi Cracker

**Web Applications:**
- Burp Suite (web proxy)
- OWASP ZAP (security scanner)
- Commix (command injection)
- Skipfish (web scanner)
- Cadaver (WebDAV client)

**Exploitation:**
- Metasploit Framework
- Armitage (Metasploit GUI)
- Social Engineering Toolkit
- BeEF (browser exploitation)
- RouterSploit (router exploitation)

**Forensics:**
- Autopsy (digital forensics)
- Binwalk (firmware analysis)
- Bulk Extractor (data extraction)
- Hashdeep (hash computation)
- Volatility (memory forensics)

**Reverse Engineering:**
- Ghidra (NSA tool)
- Radare2
- OllyDbg (via Wine)
- IDA Free
- Binary Ninja (demo)

**Password Attacks:**
- John the Ripper
- Hashcat (GPU cracking)
- Hydra (network login)
- Medusa (parallel cracker)
- CeWL (wordlist generator)

**Sniffing & Spoofing:**
- Wireshark
- tcpdump
- Ettercap (MITM)
- BetterCAP
- Dsniff

**Post Exploitation:**
- PowerSploit
- Empire
- Mimikatz (via Wine)
- Weevely (web shell)

### Unique Features
- **Most tools** - 600+ security tools
- **Debian-based** - stable foundation
- **Regular updates** - new tools added
- **Documentation** - extensive guides
- **NetHunter** - Android version
- **Cloud images** - AWS, Azure, VM ready
- **ARM support** - Raspberry Pi, etc.

### Use Cases
- **Penetration testing** (professional)
- **Security auditing**
- **CTF competitions**
- **Security research**
- **Network security testing**
- **Wireless security assessment**
- **Learning ethical hacking**

### Hardware Requirements
- Minimum: 2GB RAM (4GB recommended), 20GB storage
- For tools: 8GB RAM, quad-core, 50GB SSD
- Wireless: Compatible Wi-Fi adapter (check Kali docs)
- Optimal: 16GB RAM, 8-core CPU, 100GB NVMe

### Kali Versions

**Desktop Editions:**
- GNOME (default, full-featured)
- XFCE (lightweight)
- KDE (feature-rich)
- MATE (traditional)

**Special Editions:**
- **NetHunter** - Android penetration testing
- **NetHunter Lite** - non-rooted Android
- **ARM** - Raspberry Pi, etc.
- **Docker** - containerized
- **WSL** - Windows Subsystem for Linux
- **Cloud** - AWS, Azure, GCP images

### Installation Modes
- **Live** - run from USB, no install
- **Installer** - full installation
- **Persistence** - save changes on USB
- **Encrypted persistence** - encrypted storage

### Community Resources
- **Kali Forums:** https://forums.kali.org/
- **Kali Training:** https://www.offensive-security.com/
- **Reddit:** r/Kali (50K+ members)
- **Discord:** Kali Linux Community
- **Documentation:** https://www.kali.org/docs/

### Learning Resources
- **Offensive Security:** PWK course (OSCP cert)
- **TryHackMe:** https://tryhackme.com/
- **HackTheBox:** https://www.hackthebox.com/
- **SANS:** Security courses
- **YouTube:** NetworkChuck, David Bombal, John Hammond

### Legal & Ethical Use
⚠️ **IMPORTANT:**
- Only test systems you own or have written permission to test
- Unauthorized access is illegal
- Get proper authorization before pentesting
- Follow responsible disclosure
- Understand local laws

### Default Credentials
- **Username:** kali
- **Password:** kali
- Change immediately after installation!

### Wireless Adapter Recommendations
**Best for Kali:**
- Alfa AWUS036ACH (dual-band, monitor mode)
- TP-Link TL-WN722N v1 (cheap, works great)
- Panda PAU09 (dual-band)
- Alfa AWUS1900 (high power)

**Check compatibility:** https://www.kali.org/docs/nethunter/wireless-cards/

### Metasploit Quick Start
```bash
# Start PostgreSQL (Metasploit database)
sudo systemctl start postgresql

# Initialize Metasploit database
sudo msfdb init

# Launch Metasploit
msfconsole

# Search for exploits
msf6 > search type:exploit platform:windows

# Use an exploit
msf6 > use exploit/windows/smb/ms17_010_eternalblue

# Show options
msf6 exploit(...) > show options

# Set target
msf6 exploit(...) > set RHOSTS 192.168.1.100

# Run exploit
msf6 exploit(...) > exploit
```

### Wireless Pentesting Example
```bash
# Put adapter in monitor mode
sudo airmon-ng start wlan0

# Scan for networks
sudo airodump-ng wlan0mon

# Capture handshake
sudo airodump-ng -c 6 --bssid [MAC] -w capture wlan0mon

# (On another terminal) Deauth to force handshake
sudo aireplay-ng --deauth 10 -a [BSSID] wlan0mon

# Crack with wordlist
aircrack-ng -w rockyou.txt capture-01.cap
```

### Burp Suite Web Testing
1. Launch Burp Suite Community
2. Configure browser proxy (127.0.0.1:8080)
3. Browse target website
4. Analyze HTTP requests in Burp
5. Use Repeater/Intruder for testing
6. Find vulnerabilities (XSS, SQLi, etc.)

### vs Other Security Distros

| Feature | Kali | Parrot | BlackArch |
|---------|------|--------|-----------|
| **Tools** | 600+ | 700+ | 2500+ |
| **Base** | Debian | Debian | Arch |
| **Updates** | Stable | Rolling | Rolling |
| **Desktop** | Multiple | MATE | Minimal |
| **Difficulty** | Medium | Medium | Hard |
| **Community** | ★★★★★ | ★★★★☆ | ★★★☆☆ |

### Professional Certifications Using Kali
- **OSCP** - Offensive Security Certified Professional
- **OSWP** - Offensive Security Wireless Professional
- **OSWE** - Web Expert
- **CEH** - Certified Ethical Hacker (can use Kali)

### Best For
- **Penetration testers** (professional use)
- **Security researchers**
- **Learning ethical hacking**
- **CTF competitions**
- **Network administrators** (security testing)

### NOT For
- Daily desktop use (overkill)
- Beginners to Linux (start with Ubuntu)
- Illegal hacking (obviously!)

### Post-Install Configuration
```bash
# Update system
sudo apt update && sudo apt full-upgrade -y

# Install additional tools
sudo apt install -y golang python3-pip

# Configure Metasploit database
sudo msfdb init

# Setup VPN for anonymous testing
sudo apt install openvpn
```

### Persistence on USB
Allows saving data/tools on live USB:
1. Use Kali's USB creator: https://www.kali.org/docs/usb/live-usb-install-with-windows/
2. Select "Persistence" partition size
3. Boot from USB
4. Changes saved between reboots

---

## BackTrack
**Category:** Legacy Security (Now Kali Linux)
**Official Site:** https://www.backtrack-linux.org/ (archived)
**Successor:** Kali Linux

### Historical Information
- **BackTrack 5** was the last version (2012)
- Merged into Kali Linux in 2013
- Based on Ubuntu (BackTrack) vs Debian (Kali)
- Popular before Kali existed

### Included in UNetbootin
- **BackTrack 5 R1** - historical purposes
- Most users should use Kali Linux instead

### Why Still Included?
- Legacy hardware compatibility
- Old tutorials reference BackTrack
- Some prefer Ubuntu base
- Historical interest

### Recommendation
**Use Kali Linux instead** - modern tools, updates, support

---

*[Continuing with all remaining distributions...]*

