## Development Version (Unreleased)

### Added (PR #5 - Next 6 Distributions)
- **Bodhi Linux** - Lightweight Enlightenment-based
  - Versions: 7.0, 6.0
  - Minimal and highly customizable
- **Deepin** - Beautiful Chinese distribution
  - Versions: 23, 20.9, 20.8
  - Elegant custom desktop environment
- **KaOS** - Independent Qt/KDE focused
  - Latest rolling release
  - Curated KDE Plasma experience
- **Nitrux** - Systemd-free with Nomad desktop
  - Latest with AppImage support
  - Immutable system
- **Peppermint OS** - Lightweight cloud-focused
  - Latest, 11, 10
  - XFCE with cloud integration
- **Solus** - Independent rolling release
  - Latest (Budgie, GNOME, Plasma, MATE)
  - Curated desktop experience

### Added (PR #4 - Next 5 Popular Distributions)
- **Linux Lite** - Beginner-friendly Windows replacement
  - Versions: 7.0, 6.6, 6.4
  - Lightweight XFCE desktop
- **EndeavourOS** - Arch Linux made easy
  - Latest rolling release
  - Friendly installer and community
- **Garuda Linux** - Gaming-focused Arch derivative
  - Latest with KDE, GNOME, XFCE editions
  - Gaming optimizations and Btrfs snapshots
- **KDE neon** - Latest KDE Plasma on Ubuntu base
  - Latest User/Testing editions
  - Always newest KDE software
- **antiX** - Fast, lightweight, systemd-free
  - Versions: 23, 22
  - Perfect for older computers

### Added (PR #3 - Top 5 Popular Distributions)
- **MX Linux** - #1 on DistroWatch
  - Versions: 23.2, 23.1, 23.0
  - Debian-based with Xfce, KDE, or Fluxbox
- **Pop!_OS** - System76's developer/gaming distribution
  - Versions: 22.04 (Intel/AMD and NVIDIA variants)
  - Excellent NVIDIA support, tiling window management
- **Manjaro** - User-friendly Arch Linux
  - Version: 23.1 (KDE, XFCE, GNOME editions)
  - Rolling release with great hardware support
- **Elementary OS** - macOS-like interface
  - Versions: 7.1, 7.0
  - Beautiful Pantheon desktop environment
- **Zorin OS** - Windows-like for easy switching
  - Versions: 17 Core/Lite, 16
  - Familiar interface for Windows users

### Added (PR #1-2)
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
