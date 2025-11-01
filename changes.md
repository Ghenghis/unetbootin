## Development Version (Unreleased)

### Added
- **CentOS Stream** support (versions 9 and 10) to replace legacy CentOS
  - Updated mirror URLs to official CentOS Stream repositories
  - Both LiveCD and NetInstall modes supported
  - x86_64 architecture support
- **Rocky Linux** support (versions 8.10 and 9.5)
  - RHEL-compatible enterprise Linux distribution
  - Multiple mirror fallbacks for reliability
  - Both LiveCD and NetInstall modes supported
- **AlmaLinux** support (versions 8.10 and 9.5)
  - Community-owned, forever-free RHEL-compatible distribution
  - Official mirror integration
  - Both LiveCD and NetInstall modes supported
- **Kali Linux** - Modern penetration testing distribution
  - Versions: 2024.3, 2024.2, 2024.1
  - Both LiveCD and NetInstall modes
  - Replaces discontinued BackTrack (which remains for legacy users)

### Updated
- **Ubuntu/Kubuntu/Lubuntu/Xubuntu** - Added 24.04 LTS (Noble Numbat)
- **Fedora** - Added versions 39, 40, 41
- **Linux Mint** - Added versions 21.2, 21.3, 22
- **openSUSE** - Added Leap 15.5, 15.6, Tumbleweed

### Changed
- Replaced legacy CentOS (versions 4-8) with CentOS Stream
- Updated distribution download logic to support current RHEL ecosystem mirrors
- **Collection approach**: Old versions kept while adding new ones for maximum compatibility

## 700

This version upgrades to Qt 5.12 (previous versions were built with Qt 4). Minimum macOS version required is now macOS 10.12 (Sierra). The Linux builds are now built on Ubuntu 16.04 and might not run on Linux distributions from 2015 or before. If you are using older versions of macOS or Linux, please try a previous release - v661 is reported to work well on macOS 10.11.
