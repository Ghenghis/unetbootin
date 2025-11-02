/*
distrover.cpp from UNetbootin <http://unetbootin.sourceforge.net>
Copyright (C) 2007-2008 Geza Kovacs <geza0kovacs@gmail.com>

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License at <http://www.gnu.org/licenses/> for more details.
*/

#ifndef ubuntuverlist
#define ubuntuverlist \
"16.04_NetInstall" << "16.04_NetInstall_x64" << "16.04_HdMedia" << "16.04_HdMedia_x64" << "16.04_Live" << "16.04_Live_x64" << \
"18.04_NetInstall" << "18.04_NetInstall_x64" << "18.04_HdMedia" << "18.04_HdMedia_x64" << "18.04_Live_x64" << \
"20.04_Live_x64" << \
"22.04_Live_x64" << \
"24.04_Live_x64" << \
"Daily_Live" << "Daily_Live_x64"
#endif

distroselect->addItem(unetbootin::tr("== Select Distribution =="), (QStringList() << unetbootin::tr("== Select Version ==") <<
unetbootin::tr("Welcome to <a href=\"https://unetbootin.github.io/\">UNetbootin</a>, the Universal Netboot Installer. Usage:"
	"<ol><li>Select a distribution and version to download from the list above, or manually specify files to load below.</li>"
	"<li>Select an installation type, and press OK to begin installing.</li></ol>") <<
unetbootin::tr("== Select Version ==")));
distroselect->addItem("Arch Linux", (QStringList() << "core" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.archlinux.org/\">https://www.archlinux.org</a><br/>"
	"<b>Description:</b> Arch Linux is a lightweight distribution optimized for speed and flexibility.<br/>"
	"<b>Install Notes:</b> The default version allows for installation over the internet (FTP).") <<
"core" << "core_x64" << "netinstall" << "netinstall_x64"));
distroselect->addItem("Artix Linux", (QStringList() << "Latest_Base_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://artixlinux.org/\">https://artixlinux.org</a><br/>"
	"<b>Description:</b> Artix Linux is a systemd-free Arch-based distribution. Rolling release with multiple init systems (OpenRC, runit, s6, dinit).<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Base_x64" << "Latest_Plasma_x64" << "Latest_XFCE_x64"));
distroselect->addItem("ArchStrike", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://archstrike.org/\">https://archstrike.org</a><br/>"
	"<b>Description:</b> ArchStrike is an Arch Linux-based penetration testing and security distribution. Includes over 2000 security tools. Rolling release with latest security software.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64"));
distroselect->addItem("AV Linux", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.bandshed.net/avlinux/\">http://www.bandshed.net/avlinux</a><br/>"
	"<b>Description:</b> AV Linux is a Debian-based distribution for multimedia production. Includes audio/video editing, recording, and mastering tools. Professional-grade creative suite.<br/>"
	"<b>Install Notes:</b> The Live version allows testing tools before installation. Optimized for low-latency audio.") <<
"Latest_x64" << "2021_x64"));
distroselect->addItem("antiX", (QStringList() << "23_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://antixlinux.com/\">https://antixlinux.com</a><br/>"
	"<b>Description:</b> antiX is a fast, lightweight systemd-free Linux distribution based on Debian. Perfect for older computers and systems with limited resources.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"23_Live_x64" << "23_Live" << "22_Live_x64" << "22_Live"));
distroselect->addItem("BackTrack", (QStringList() << "5R1-GNOME" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.backtrack-linux.org/\">https://www.backtrack-linux.org/</a><br/>"
	"<b>Description:</b> BackTrack is a distribution focused on network analysis and penetration testing.<br/>"
	"<b>Install Notes:</b> BackTrack is booted and run in live mode; no installation is required to use it.") <<
"5R1-GNOME" << "5R1-GNOME_x64" << "5R1-KDE" << "5R1-KDE_x64"));
distroselect->addItem("BackBox", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.backbox.org/\">https://www.backbox.org</a><br/>"
	"<b>Description:</b> BackBox is a lightweight Ubuntu-based penetration testing distribution. Minimal, fast, and focused on network analysis and security assessment.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64" << "8_Live_x64"));
distroselect->addItem("Batocera", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://batocera.org/\">https://batocera.org</a><br/>"
	"<b>Description:</b> Batocera is a retro gaming distribution. Plug-and-play system supporting 150+ gaming platforms. Based on EmulationStation and RetroArch.<br/>"
	"<b>Install Notes:</b> Boot directly to gaming interface. Supports USB controllers. Add ROMs to dedicated folders.") <<
"Latest_x64" << "Latest_RPi"));
distroselect->addItem("Kali Linux", (QStringList() << "2024.3_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.kali.org/\">https://www.kali.org/</a><br/>"
	"<b>Description:</b> Kali Linux is an advanced penetration testing and security auditing Linux distribution with 600+ security tools.<br/>"
	"<b>Install Notes:</b> Kali is booted in live mode; installation is optional. Default credentials: kali/kali") <<
"2024.3" << "2024.3_x64" << "2024.3_Live_x64" << "2024.2" << "2024.2_x64" << "2024.2_Live_x64" << "2024.1" << "2024.1_x64" << "2024.1_Live_x64"));
distroselect->addItem("Bodhi Linux", (QStringList() << "7.0_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.bodhilinux.com/\">https://www.bodhilinux.com</a><br/>"
	"<b>Description:</b> Bodhi Linux is a lightweight Ubuntu-based distribution featuring the Moksha desktop (Enlightenment fork). Minimal, elegant, and highly customizable.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"7.0_Live_x64" << "7.0_Live" << "6.0_Live_x64" << "6.0_Live"));
distroselect->addItem("Bio-Linux", (QStringList() << "8_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://environmentalomics.org/bio-linux/\">http://environmentalomics.org/bio-linux</a><br/>"
	"<b>Description:</b> Bio-Linux is an Ubuntu-based distribution for bioinformatics. Includes 500+ scientific packages for genomics, proteomics, and molecular biology research.<br/>"
	"<b>Install Notes:</b> Pre-configured bioinformatics tools. Ideal for research and academic use.") <<
"8_Live_x64"));
distroselect->addItem("BlackArch", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://blackarch.org/\">https://blackarch.org</a><br/>"
	"<b>Description:</b> BlackArch is an Arch Linux-based penetration testing distribution with 2500+ security tools. Comprehensive security testing platform with latest tools.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64" << "Latest_Slim_x64"));
distroselect->addItem("Bugtraq", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://bugtraq-team.com/\">http://bugtraq-team.com</a><br/>"
	"<b>Description:</b> Bugtraq is a Debian/Ubuntu-based penetration testing and digital forensics distribution. Features mobile forensics, malware analysis, and security tools.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64"));
distroselect->addItem("CAELinux", (QStringList() << "2020_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.caelinux.com/\">https://www.caelinux.com</a><br/>"
	"<b>Description:</b> CAELinux is an Ubuntu-based distribution for computer-aided engineering. Includes FEA, CFD, CAD tools like Salome, Code_Aster, and OpenFOAM.<br/>"
	"<b>Install Notes:</b> Professional engineering simulation tools pre-installed. Requires powerful hardware.") <<
"2020_x64" << "2018_x64"));
distroselect->addItem("ChimeraOS", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://chimeraos.org/\">https://chimeraos.org</a><br/>"
	"<b>Description:</b> ChimeraOS turns your PC into a Steam gaming console. Arch-based with Steam Big Picture, game streaming, and controller support out-of-box.<br/>"
	"<b>Install Notes:</b> Boots directly to Steam. Optimized for gaming performance. Supports HDR and VRR.") <<
"Latest_x64"));
distroselect->addItem("CentOS Stream", (QStringList() << "9_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.centos.org/\">https://www.centos.org</a><br/>"
	"<b>Description:</b> CentOS Stream is the continuously delivered Linux distribution that tracks just ahead of Red Hat Enterprise Linux (RHEL) development.<br/>"
	"<b>Install Notes:</b> CentOS Stream provides rolling updates. Only x86_64 architecture is supported for Stream 9+.") <<
"9" << "9_x64" << "9_Live_x64" << "10" << "10_x64" << "10_Live_x64"));
distroselect->addItem("Rocky Linux", (QStringList() << "9.5_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://rockylinux.org/\">https://rockylinux.org</a><br/>"
	"<b>Description:</b> Rocky Linux is a community enterprise operating system designed to be 100%% bug-for-bug compatible with Red Hat Enterprise Linux.<br/>"
	"<b>Install Notes:</b> Rocky Linux provides enterprise stability with community support.") <<
"8.10" << "8.10_x64" << "8.10_Live_x64" << "9.5" << "9.5_x64" << "9.5_Live_x64"));
distroselect->addItem("AlmaLinux", (QStringList() << "9.5_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://almalinux.org/\">https://almalinux.org</a><br/>"
	"<b>Description:</b> AlmaLinux is an open-source, community-owned and governed, forever-free enterprise Linux distribution, focused on long-term stability. AlmaLinux is 1:1 binary compatible with RHEL.<br/>"
	"<b>Install Notes:</b> AlmaLinux provides extended support and is backed by a nonprofit organization.") <<
"8.10" << "8.10_x64" << "8.10_Live_x64" << "9.5" << "9.5_x64" << "9.5_Live_x64"));
distroselect->addItem("CloneZilla", (QStringList() << "1.1.0-8" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://clonezilla.org/\">https://clonezilla.org/</a><br/>"
	"<b>Description:</b> CloneZilla is a distribution used for disk backup and imaging.<br/>"
	"<b>Install Notes:</b> CloneZilla is booted and run in live mode; no installation is required to use it.") <<
"1.1.0-8"));
distroselect->addItem("Damn Small Linux", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://damnsmalllinux.org/\">http://damnsmalllinux.org</a><br/>"
	"<b>Description:</b> Damn Small Linux is a minimalist distribution designed for older computers.<br/>"
	"<b>Install Notes:</b> The Live version loads the entire system into RAM and boots from memory, so installation is not required but optional.") <<
"Latest_Live"));
distroselect->addItem("Debian", (QStringList() << "Stable_NetInstall" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.debian.org/\">https://www.debian.org</a><br/>"
	"<b>Description:</b> Debian is a community-developed Linux distribution that supports a wide variety of architectures and offers a large repository of packages.<br/>"
	"<b>Install Notes:</b> The NetInstall version allows for installation over FTP. If you would like to use a pre-downloaded install iso, use the HdMedia option, and then place the install iso file on the root directory of your hard drive or USB drive") <<
"Stable_NetInstall" << "Stable_NetInstall_x64" << "Stable_HdMedia" << "Stable_HdMedia_x64" << "Testing_NetInstall" << "Testing_NetInstall_x64" << "Testing_HdMedia" << "Testing_HdMedia_x64" << "Unstable_NetInstall" << "Unstable_NetInstall_x64" << "Unstable_HdMedia" << "Unstable_HdMedia_x64"));
//	"Stable_NetInstall" << "Stable_NetInstall_x64" << "Stable_Live" << "Testing_NetInstall" << "Testing_NetInstall_x64" << "Testing_Live" << "Unstable_NetInstall" << "Unstable_NetInstall_x64" << "Unstable_Live"));
distroselect->addItem("Deepin", (QStringList() << "23_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.deepin.org/\">https://www.deepin.org</a><br/>"
	"<b>Description:</b> Deepin is a beautiful Chinese-developed distribution with an elegant custom desktop environment. Features polished UI and ease of use.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"23_Live_x64" << "20.9_Live_x64" << "20.8_Live_x64"));
distroselect->addItem("Deft Linux", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.deftlinux.net/\">http://www.deftlinux.net</a><br/>"
	"<b>Description:</b> Deft (Digital Evidence & Forensics Toolkit) is an Ubuntu-based distribution for computer forensics and incident response. Features digital forensics tools.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode for forensic investigations.") <<
"Latest_Live_x64" << "8.2_Live_x64"));
distroselect->addItem("Dreamlinux", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Description:</b> Dreamlinux is a user-friendly Debian-based distribution.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live"));
distroselect->addItem("Dr.Web AntiVirus", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.freedrweb.com/livecd\">https://www.freedrweb.com/livecd</a><br/>"
	"<b>Description:</b> Dr.Web AntiVirus is an anti-virus emergency kit to restore a system that broke due to malware.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which malware scans can be launched.") <<
"Latest_Live"));
distroselect->addItem("Elive", (QStringList() << "Stable_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.elivecd.org/\">https://www.elivecd.org</a><br/>"
	"<b>Description:</b> Elive is a Debian-based distribution featuring the Enlightenment window manager.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Stable_Live"));
distroselect->addItem("Elementary OS", (QStringList() << "7.1_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://elementary.io/\">https://elementary.io</a><br/>"
	"<b>Description:</b> Elementary OS is a beautiful, fast, and open replacement for macOS and Windows. Built on Ubuntu with the Pantheon desktop environment.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"7.1_Live_x64" << "7.0_Live_x64"));
distroselect->addItem("EndeavourOS", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://endeavouros.com/\">https://endeavouros.com</a><br/>"
	"<b>Description:</b> EndeavourOS is a rolling release based on Arch Linux with a friendly installer and helpful community. Arch made easy for beginners.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64"));
distroselect->addItem("Fedora", (QStringList() << "41_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://getfedora.org/\">https://getfedora.org</a><br/>"
	"<b>Description:</b> Fedora is a Red Hat sponsored community distribution which showcases the latest cutting-edge free/open-source software.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The NetInstall version allows for both installation over the internet (FTP), or offline installation using pre-downloaded installation ISO files.") <<
	"24_NetInstall" << "24_NetInstall_x64" << "24_Live" << "24_Live_x64" << "25_NetInstall" << "25_NetInstall_x64" << "25_Live" << "25_Live_x64" << "26_NetInstall_x64" << "26_Live_x64" << "27_NetInstall_x64" << "27_Live_x64" << "28_NetInstall_x64" << "28_Live_x64" << "29_NetInstall_x64" << "29_Live_x64" << "30_NetInstall_x64" << "30_Live_x64" << "39_NetInstall_x64" << "39_Live_x64" << "40_NetInstall_x64" << "40_Live_x64" << "41_NetInstall_x64" << "41_Live_x64" << "Rawhide_NetInstall_x64"));
distroselect->addItem("Fedora Security Lab", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://labs.fedoraproject.org/security/\">https://labs.fedoraproject.org/security</a><br/>"
	"<b>Description:</b> Fedora Security Lab is a Fedora spin for security testing and forensics. Features penetration testing tools, network analysis, and forensics utilities.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64"));
distroselect->addItem("FreeBSD", (QStringList() << "8.0" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.freebsd.org/\">https://www.freebsd.org</a><br/>"
	"<b>Description:</b> FreeBSD is a general-purpose Unix-like operating system designed for scalability and performance.<br/>"
	"<b>Install Notes:</b> The default version allows for both installation over the internet (FTP), or offline installation using pre-downloaded installation ISO files.") <<
"6.3" << "6.3_x64" << "7.0" << "7.0_x64" << "7.2" << "7.2_x64" << "8.0" << "8.0_x64"));
distroselect->addItem("FreeDOS", (QStringList() << "1.0" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.freedos.org/\">https://www.freedos.org</a><br/>"
	"<b>Description:</b> FreeDOS is a free MS-DOS compatible operating system.<br/>"
	"<b>Install Notes:</b> See the <a href=\"http://fd-doc.sourceforge.net/wiki/index.php?n=FdDocEn.FdInstall\">manual</a> for installation details.") <<
"1.0"));
distroselect->addItem("FreeNAS", (QStringList() << "0.7.4919" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://freenas.org/\">https://www.freenas.org</a><br/>"
	"<b>Description:</b> FreeNAS is an embedded open source NAS (Network-Attached Storage) distribution based on FreeBSD.<br/>"
	"<b>Install Notes:</b> The LiveCD version creates a RAM drive for FreeNAS, and uses a FAT formatted floppy disk or USB key for saving the configuration file. The embedded version allows installation to hard disk.") <<
"0.7.1.5024_Live" << "0.7.1.4997_Live_x64"));
distroselect->addItem("ClearOS", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.clearos.com/\">https://www.clearos.com</a><br/>"
	"<b>Description:</b> ClearOS is a Linux distribution designed for servers, gateways, and network systems. Features web-based management, firewall, VPN, and network services.<br/>"
	"<b>Install Notes:</b> Server/gateway distribution with comprehensive network management tools.") <<
"Latest_x64" << "7.9_x64"));
distroselect->addItem("Frugalware", (QStringList() << "Stable" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://frugalware.org/\">https://frugalware.org</a><br/>"
	"<b>Description:</b> Frugalware is a general-purpose Slackware-based distro for advanced users.<br/>"
	"<b>Install Notes:</b> The default option allows for both installation over the internet (FTP), or offline installation using pre-downloaded installation ISO files.") <<
"Stable" << "Stable_x64" << "Testing" << "Testing_x64" << "Current" << "Current_x64"));
//distroselect->addItem("F-Secure Rescue CD", (QStringList() << "Latest_Live" <<
//unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.f-secure.com/linux-weblog/\">http://www.f-secure.com/linux-weblog/</a><br/>"
//	"<b>Description:</b> F-Secure Rescue CD detects and removes malware from your Windows installation.<br/>"
//	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which malware scans can be launched.") <<
//                                             "Latest_Live"));
distroselect->addItem("GeeXboX", (QStringList() << "2.0-i386" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.geexbox.org/\">https://www.geexbox.org</a><br/>"
               "<b>Description:</b> GeeXboX is an Embedded Linux Media Center Distribution.<br/>") << "2.0-i386" << "2.0-x86_64"));
distroselect->addItem("Garuda Linux", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://garudalinux.org/\">https://garudalinux.org</a><br/>"
	"<b>Description:</b> Garuda Linux is an Arch-based distribution focused on gaming and performance. Features beautiful themes, gaming optimizations, and Btrfs snapshots.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64" << "Latest_KDE_x64" << "Latest_GNOME_x64" << "Latest_XFCE_x64"));
distroselect->addItem("GParted Live", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://gparted.org/livecd.php\">https://gparted.org/livecd.php</a><br/>"
	"<b>Description:</b> GParted Live is a small bootable distribution for disk partition management. Create, resize, move, and copy partitions without data loss.<br/>"
	"<b>Install Notes:</b> Boot in live mode for partition operations. No installation required.") <<
"Latest_Live_x64" << "Latest_Live_x86"));
//distroselect->addItem("Gentoo", (QStringList() << "2008.0_Live" <<
//unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.gentoo.org/\">http://www.gentoo.org</a><br/>"
//	"<b>Description:</b> Gentoo is a flexible source-based distribution designed for advanced users.<br/>"
//	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
//"2007.0_Live" << "2007.0_Live_x64" << "2008.0_Live" << "2008.0_x64_Live"));
//	distroselect->addItem("GAG", (QStringList() << "4.9" <<
//	tr("<b>Homepage:</b> <a href=\"http://gag.sourceforge.net/\">http://gag.sourceforge.net</a><br/>"
//		"<b>Description:</b> GAG is a user-friendly graphical boot manager.<br/>"
//		"<b>Install Notes:</b> GAG simply boots and runs; no installation is required to use it.") <<
//	"4.9"));
distroselect->addItem("gNewSense", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.gnewsense.org/\">http://www.gnewsense.org</a><br/>"
	"<b>Description:</b> gNewSense is an FSF-endorsed distribution based on Ubuntu with all non-free components removed.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live"));
distroselect->addItem("Gujin", (QStringList() << "2.4" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://sourceforge.net/projects/gujin/\">https://sourceforge.net/projects/gujin</a><br/>"
	"<b>Description:</b> Gujin is a graphical boot manager which can bootstrap various volumes and files.<br/>"
	"<b>Install Notes:</b> Gujin simply boots and runs; no installation is required to use it.") <<
"2.4"));
distroselect->addItem("Kaspersky Rescue Disk", (QStringList() << "10_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://support.kaspersky.com/14229/\">https://support.kaspersky.com/14229</a><br/>"
	"<b>Description:</b> Kaspersky Rescue Disk detects and removes malware from your Windows installation.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which malware scans can be launched.") <<
"10_Live" << "8_Live"));
distroselect->addItem("IprediaOS", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.ipredia.org/\">https://www.ipredia.org</a><br/>"
	"<b>Description:</b> IprediaOS is a Fedora-based Linux distribution providing anonymous Internet access through the I2P (Invisible Internet Project) network. All network traffic is automatically routed through I2P.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode. All applications configured for anonymous I2P networking.") <<
"Latest_Live_x64"));
distroselect->addItem("KaOS", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://kaosx.us/\">https://kaosx.us</a><br/>"
	"<b>Description:</b> KaOS is an independent distribution focused on Qt and KDE Plasma. Rolling release with carefully curated packages for KDE enthusiasts.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64"));
distroselect->addItem("Kodachi", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.digi77.com/linux-kodachi/\">https://www.digi77.com/linux-kodachi</a><br/>"
	"<b>Description:</b> Kodachi is a Debian-based Linux distribution focused on privacy and anonymity. Routes all traffic through VPN, Tor, and DNSCrypt. Leaves no traces on hardware.<br/>"
	"<b>Install Notes:</b> The Live version boots with all privacy features enabled. Can be installed but designed for live use.") <<
"Latest_Live_x64" << "8.27_Live_x64"));
    distroselect->addItem("Kubuntu", (QStringList() << "22.04_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.kubuntu.org/\">https://www.kubuntu.org</a><br/>"
	"<b>Description:</b> Kubuntu is an official Ubuntu derivative featuring the KDE desktop.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The NetInstall version allows for installation over FTP, and can install Kubuntu and other official Ubuntu derivatives. If you would like to use a pre-downloaded alternate (not desktop) install iso, use the HdMedia option, and then place the alternate install iso file on the root directory of your hard drive or USB drive") <<
ubuntuverlist));
distroselect->addItem("KDE neon", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://neon.kde.org/\">https://neon.kde.org</a><br/>"
	"<b>Description:</b> KDE neon provides the latest KDE Plasma desktop and applications on top of a stable Ubuntu base. Always get the newest KDE software.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64" << "Latest_User_x64" << "Latest_Testing_x64"));
distroselect->addItem("KXStudio", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://kx.studio/\">https://kx.studio</a><br/>"
	"<b>Description:</b> KXStudio is a Debian-based distribution for professional audio production. Includes JACK audio, low-latency kernel, and extensive audio plugin collection.<br/>"
	"<b>Install Notes:</b> Pre-configured for music production. Optimized for real-time audio processing.") <<
"Latest_x64"));
distroselect->addItem("Lakka", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.lakka.tv/\">https://www.lakka.tv</a><br/>"
	"<b>Description:</b> Lakka is a lightweight retro gaming distribution. Based on RetroArch and LibreELEC. Supports emulation for NES, SNES, PlayStation, N64, and more.<br/>"
	"<b>Install Notes:</b> Minimal OS boots directly to RetroArch. Ideal for dedicated gaming boxes.") <<
"Latest_x64" << "Latest_RPi"));
distroselect->addItem("NethServer", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.nethserver.org/\">https://www.nethserver.org</a><br/>"
	"<b>Description:</b> NethServer is a CentOS-based Linux distribution for servers. Features modular design with email, file sharing, firewall, web server, and groupware modules.<br/>"
	"<b>Install Notes:</b> Server distribution designed for small/medium businesses. Web-based administration.") <<
"Latest_x64" << "7.9_x64"));
distroselect->addItem("Network Security Toolkit", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.networksecuritytoolkit.org/\">https://www.networksecuritytoolkit.org</a><br/>"
	"<b>Description:</b> NST is a bootable live distribution with network security and penetration testing tools. Features web-based network monitoring, analysis, and security assessment.<br/>"
	"<b>Install Notes:</b> NST is booted and run in live mode; no installation is required.") <<
"Latest_x64" << "Latest_x86"));
distroselect->addItem("Nitrux", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://nxos.org/\">https://nxos.org</a><br/>"
	"<b>Description:</b> Nitrux is a Debian-based distribution with systemd-free design and the Nomad desktop. Features modern design, AppImages, and immutable root filesystem.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64"));
	distroselect->addItem("LinuxConsole", (QStringList() << "1.0.2010-cd" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://linuxconsole.org/\">https://linuxconsole.org</a><br/>"
 "<b>Description:</b> LinuxConsole is a desktop distro to play games, easy to install, easy to use and fast to boot .<br/>"
 "<b>Install Notes:</b> The 1.0.2010 is latest 1.0, now available on rolling release (run liveuptate to update modules and kernel).") <<
 "1.0.2010-cd"));
    distroselect->addItem("Linux Mint", (QStringList() << "22_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://linuxmint.com/\">https://linuxmint.com</a><br/>"
	"<b>Description:</b> Linux Mint is a user-friendly Ubuntu-based distribution which includes additional proprietary codecs and other software by default.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
    "19.2_Live" << "19.2_Live_x64"<<"19.3_Live"<<"19.3_Live_x64"<<"20_Live_x64"<<"20.1_Live_x64"<<"20.2_Live_x64"<<"20.3_Live_x64"<<"21_Live_x64"<<"21.1_Live_x64"<<"21.2_Live_x64"<<"21.3_Live_x64"<<"22_Live_x64"));
//distroselect->addItem("Linspire", (QStringList() << "Latest_Live" <<
//unetbootin::tr("<b>Description:</b> Linspire is a user-friendly Debian-based distribution.<br/>"
//	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
//"Latest_Live"));
distroselect->addItem("Manjaro", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://manjaro.org/\">https://manjaro.org</a><br/>"
	"<b>Description:</b> Manjaro is a user-friendly Arch Linux-based distribution with easy installation and automatic hardware detection. Rolling release with access to AUR.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64" << "Latest_KDE_x64" << "Latest_XFCE_x64" << "Latest_GNOME_x64"));
distroselect->addItem("MX Linux", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://mxlinux.org/\">https://mxlinux.org</a><br/>"
	"<b>Description:</b> MX Linux is an antiX and former MEPIS communities cooperative venture using the best tools from Debian Stable. Features XFCE desktop and MX Tools.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64" << "21_Live_x64" << "19_Live_x64"));
distroselect->addItem("Mint Linux LMDE", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.linuxmint.com/download_lmde.php\">https://www.linuxmint.com/download_lmde.php</a><br/>"
	"<b>Description:</b> Linux Mint Debian Edition is a Linux Mint project which uses Debian as a base instead of Ubuntu.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64" << "5_Live_x64"));
distroselect->addItem("Musix", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.musix.org.ar/en/\">http://www.musix.org.ar/en</a><br/>"
	"<b>Description:</b> Musix is a Debian-based distribution with software for musicians and audio producers.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live"));
distroselect->addItem("Nitrux", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://nxos.org/\">https://nxos.org</a><br/>"
	"<b>Description:</b> Nitrux is a Debian-based distribution with systemd-free design and the Nomad desktop. Features modern design, AppImages, and immutable root filesystem.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64"));
distroselect->addItem("OpenMediaVault", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.openmediavault.org/\">https://www.openmediavault.org</a><br/>"
	"<b>Description:</b> OpenMediaVault is a Debian-based NAS (Network Attached Storage) solution. Features web-based management, RAID, file sharing (SMB, NFS, FTP), and plugins.<br/>"
	"<b>Install Notes:</b> NAS distribution designed for home and small office storage servers.") <<
"Latest_x64" << "7_x64" << "6_x64"));
distroselect->addItem("Ophcrack", (QStringList() << "XP-LiveCD-2.0" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://ophcrack.sourceforge.io/\">https://ophcrack.sourceforge.io</a><br/>"
	"<b>Description:</b> Ophcrack can crack Windows passwords.<br/>"
	"<b>Install Notes:</b> Ophcrack is booted and run in live mode; no installation is required to use it.") <<
"XP-LiveCD-2.0" << "Vista-LiveCD-2.0"));
distroselect->addItem("Parted Magic", (QStringList() << "2.1_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://partedmagic.com/\">https://partedmagic.com</a><br/>"
	"<b>Description:</b> Parted Magic includes the GParted partition manager and other system utilities which can resize, copy, backup, and manipulate disk partitions.<br/>"
	"<b>Install Notes:</b> Parted Magic is booted and run in live mode; no installation is required to use it.") <<
"2.1_Live"));
distroselect->addItem("Peppermint OS", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://peppermintos.com/\">https://peppermintos.com</a><br/>"
	"<b>Description:</b> Peppermint OS is a lightweight cloud-focused distribution based on Debian with XFCE. Emphasizes web applications and cloud integration.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64" << "11_Live_x64" << "10_Live_x64"));
distroselect->addItem("Pentoo", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.pentoo.ch/\">https://www.pentoo.ch</a><br/>"
	"<b>Description:</b> Pentoo is a Gentoo-based penetration testing live distribution. Features the latest security tools with daily updates, custom kernel with wireless injection patches.<br/>"
	"<b>Install Notes:</b> Pentoo is designed for live use but can be installed. Features persistent changes support.") <<
"Latest_Live_x64"));
distroselect->addItem("Parrot Security OS", (QStringList() << "Latest_Security_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.parrotsec.org/\">https://www.parrotsec.org</a><br/>"
	"<b>Description:</b> Parrot Security OS is a Debian-based distribution for security, privacy and development. Features 700+ security tools, forensics, and development tools.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Security_x64" << "Latest_Home_x64" << "Latest_Architect_x64"));
//distroselect->addItem("PCLinuxOS", (QStringList() << "KDE 2010" <<
//unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.pclinuxos.com/\">http://www.pclinuxos.com</a><br/>"
//	"<b>Description:</b> PCLinuxOS is a user-friendly Mandriva-based distribution.<br/>"
//	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
//"KDE 2010" << "Gnome 2010" << "LXDE 2010" << "MiniMe 2010" << "E17 2010"));
distroselect->addItem("Puppy Linux", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.puppylinux.com/\">http://www.puppylinux.com</a><br/>"
	"<b>Description:</b> Puppy Linux is a lightweight distribution designed for older computers.<br/>"
	"<b>Install Notes:</b> The Live version loads the entire system into RAM and boots from memory, so installation is not required but optional.") <<
	"Latest_Live"));
distroselect->addItem("Pop!_OS", (QStringList() << "22.04_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://pop.system76.com/\">https://pop.system76.com</a><br/>"
	"<b>Description:</b> Pop!_OS is developed by System76 for STEM and creative professionals. Based on Ubuntu with custom desktop, excellent NVIDIA support, and tiling window management.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. Choose NVIDIA or AMD/Intel version.") <<
"22.04_Live_x64" << "22.04_NVIDIA_x64" << "22.04_Intel_AMD_x64"));
distroselect->addItem("Proxmox VE", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.proxmox.com/proxmox-ve\">https://www.proxmox.com/proxmox-ve</a><br/>"
	"<b>Description:</b> Proxmox Virtual Environment is a Debian-based virtualization platform. Supports KVM virtual machines, LXC containers, software-defined storage, and networking.<br/>"
	"<b>Install Notes:</b> Enterprise-grade virtualization platform with web-based management interface.") <<
"Latest_x64" << "8.2_x64" << "8.1_x64"));
distroselect->addItem("Rescatux", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.supergrubdisk.org/rescatux/\">https://www.supergrubdisk.org/rescatux</a><br/>"
	"<b>Description:</b> Rescatux is a rescue Linux distribution for repairing boot problems and recovering systems. Fixes GRUB, Windows boot, resets passwords, and recovers data.<br/>"
	"<b>Install Notes:</b> Boot in live mode to repair system issues. User-friendly rescue operations.") <<
"Latest_x64" << "Latest_x86"));
distroselect->addItem("Sabayon Linux", (QStringList() << "5.2" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.sabayon.org/\">https://www.sabayon.org</a><br/>"
	"<b>Description:</b> Sabayon Linux is a Gentoo-based Live DVD distribution which features the Entropy binary package manager in addition to the source-based Portage.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The LiteMCE edition is 2 GB, while the full edition will need an 8 GB USB drive") <<
	"5.1" << "5.1_x64" << "5.2" << "5.2_x64"));
distroselect->addItem("Salix", (QStringList() << "13.37_Live_Xfce" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://salixos.org\">https://salixos.org</a><br/>"
	"<b>Description:</b> Salix is a GNU/Linux distribution based on Slackware (fully compatible) that is simple, fast and easy to use.<br/>"
	"Like a bonsai, Salix is small, light & the product of infinite care.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.<br/>"
	"Default root password is <b>live</b>.") <<
	"13.0.2a_HdMedia" << "13.0.2a_HdMedia_x64" <<
  "13.1.2_HdMedia_Fluxbox" << "13.1.2_HdMedia_Fluxbox_x64" << "13.1.2_HdMedia_KDE" << "13.1.2_HdMedia_KDE_x64" << "13.1.2_HdMedia_LXDE" << "13.1.2_HdMedia_LXDE_x64" << "13.1.2_HdMedia_Xfce" << "13.1.2_HdMedia_Xfce_x64" <<
  "13.37_HdMedia_Fluxbox" << "13.37_HdMedia_Fluxbox_x64" << "13.37_HdMedia_KDE" << "13.37_HdMedia_KDE_x64" << "13.37_HdMedia_LXDE" << "13.37_HdMedia_LXDE_x64" << "13.37_HdMedia_Ratpoison" << "13.37_HdMedia_Ratpoison_x64" << "13.37_HdMedia_Xfce" << "13.37_HdMedia_Xfce_x64" <<
  "13.37_Live_Xfce" << "13.37_Live_Xfce_x64" <<
  "Latest_HdMedia_Fluxbox" << "Latest_HdMedia_Fluxbox_x64" << "Latest_HdMedia_KDE" << "Latest_HdMedia_KDE_x64" << "Latest_HdMedia_LXDE" << "Latest_HdMedia_LXDE_x64" << "Latest_HdMedia_Ratpoison" << "Latest_HdMedia_Ratpoison_x64" << "Latest_HdMedia_Xfce" << "Latest_HdMedia_Xfce_x64" <<
  "Latest_Live_Fluxbox" << "Latest_Live_Fluxbox_x64" << "Latest_Live_KDE" << "Latest_Live_KDE_x64" << "Latest_Live_LXDE" << "Latest_Live_LXDE_x64" << "Latest_Live_Ratpoison" << "Latest_Live_Ratpoison_x64" << "Latest_Live_Xfce" << "Latest_Live_Xfce_x64"));
distroselect->addItem("Samurai Web Testing", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.samurai-wtf.org/\">http://www.samurai-wtf.org</a><br/>"
	"<b>Description:</b> Samurai Web Testing Framework is a live Linux distribution focused on web penetration testing. Includes best tools for web application security testing.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode for web application security testing.") <<
"Latest_Live_x64"));
distroselect->addItem("SIFT Workstation", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.sans.org/tools/sift-workstation/\">https://www.sans.org/tools/sift-workstation</a><br/>"
	"<b>Description:</b> SIFT (SANS Investigative Forensic Toolkit) Workstation is an Ubuntu-based digital forensics and incident response distribution. Created by SANS Institute.<br/>"
	"<b>Install Notes:</b> The distribution includes forensic tools for incident response and digital investigations.") <<
"Latest_x64"));
distroselect->addItem("Slax", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.slax.org/\">https://www.slax.org</a><br/>"
	"<b>Description:</b> Slax is a Slackware-based distribution featuring the KDE desktop.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live"));
distroselect->addItem("Solus", (QStringList() << "Latest_Budgie_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://getsol.us/\">https://getsol.us</a><br/>"
	"<b>Description:</b> Solus is an independent rolling release distribution. Features Budgie desktop (also available in GNOME, MATE, Plasma). Curated for desktop use.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Budgie_x64" << "Latest_GNOME_x64" << "Latest_Plasma_x64" << "Latest_MATE_x64"));
distroselect->addItem("SystemRescue", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.system-rescue.org/\">https://www.system-rescue.org</a><br/>"
	"<b>Description:</b> SystemRescue is an Arch-based recovery distribution for system repair and data recovery. Features partition management, backup tools, and system rescue utilities.<br/>"
	"<b>Install Notes:</b> Boot in live mode for system rescue operations. Includes GParted, fsarchiver, testdisk.") <<
"Latest_x64" << "Latest_x86"));
distroselect->addItem("SteamOS", (QStringList() << "3.0_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://store.steampowered.com/steamos\">https://store.steampowered.com/steamos</a><br/>"
	"<b>Description:</b> SteamOS is Valve's Arch-based gaming OS. Powers Steam Deck. Includes Proton for Windows game compatibility, optimized gaming kernel, and Steam interface.<br/>"
	"<b>Install Notes:</b> Boots to Steam interface. Excellent Windows game compatibility via Proton.") <<
"3.0_x64" << "Latest_x64"));
distroselect->addItem("SliTaz", (QStringList() << "Stable_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.slitaz.org/en/\">http://www.slitaz.org/en</a><br/>"
	"<b>Description:</b> SliTaz is a lightweight, desktop-oriented micro distribution.<br/>"
	"<b>Install Notes:</b> The Live version loads the entire system into RAM and boots from memory, so installation is not required but optional.") <<
"Stable_Live" << "Cooking_Live"));
distroselect->addItem("Smart Boot Manager", (QStringList() << "3.7" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://btmgr.sourceforge.net/about.html\">http://btmgr.sourceforge.net/about.html</a><br/>"
	"<b>Description:</b> Smart Boot Manager is a bootloader which can overcome some boot-related BIOS limitations and bugs.<br/>"
	"<b>Install Notes:</b> SBM simply boots and runs; no installation is required to use it.") <<
"3.7"));
distroselect->addItem("Super Grub Disk", (QStringList() << "Latest" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.supergrubdisk.org\">https://www.supergrubdisk.org</a><br/>"
	"<b>Description:</b> Super Grub Disk is a bootloader which can perform a variety of MBR and bootloader recovery tasks.<br/>"
	"<b>Install Notes:</b> SGD simply boots and runs; no installation is required to use it.") <<
"Latest"));
distroselect->addItem("Super OS", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Description:</b> Super OS is an unofficial derivative of Ubuntu which includes additional software by default. Requires a 2GB USB drive to install.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live"));
distroselect->addItem("Subgraph OS", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://subgraph.com/\">https://subgraph.com</a><br/>"
	"<b>Description:</b> Subgraph OS is a Debian-based adversary-resistant computing platform. Features application sandboxing, kernel hardening, and Tor integration for journalists and activists.<br/>"
	"<b>Install Notes:</b> Advanced security-focused distribution. All applications run in sandboxed environments.") <<
"Latest_x64"));
distroselect->addItem("Tails", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://tails.net/\">https://tails.net</a><br/>"
	"<b>Description:</b> Tails (The Amnesic Incognito Live System) is a Debian-based privacy and anonymity focused distribution. Routes all traffic through Tor, leaves no trace, includes encryption tools.<br/>"
	"<b>Install Notes:</b> Designed for live use only. Amnesic (leaves no trace). All connections routed through Tor network.") <<
"Latest_x64" << "6.9_x64" << "6.8_x64"));
distroselect->addItem("Trinity Rescue Kit", (QStringList() << "Latest" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://trinityhome.org/\">https://trinityhome.org</a><br/>"
	"<b>Description:</b> Trinity Rescue Kit is a recovery distribution for Windows and Linux systems. Features password reset, virus scanning, data recovery, and disk cloning tools.<br/>"
	"<b>Install Notes:</b> Boot in live mode for system rescue and recovery operations.") <<
"Latest"));
//distroselect->addItem("SystemRescueCD", (QStringList() << "Latest_Live" <<
//unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.sysresccd.org\">http://www.sysresccd.org</a><br/>"
//	"<b>Description:</b> SystemRescueCD includes various partition management and data recovery and backup tools.<br/>"
//	"<b>Install Notes:</b> SystemRescueCD is booted and run in live mode; no installation is required to use it.") <<
//"Latest_Live"));
distroselect->addItem("Ubuntu", (QStringList() << "22.04_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.ubuntu.com/\">https://www.ubuntu.com</a><br/>"
	"<b>Description:</b> Ubuntu is a user-friendly Debian-based distribution. It is currently the most popular Linux desktop distribution.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The NetInstall version allows for installation over FTP, and can install Kubuntu and other official Ubuntu derivatives. If you would like to use a pre-downloaded alternate (not desktop) install iso, use the HdMedia option, and then place the alternate install iso file on the root directory of your hard drive or USB drive") <<
ubuntuverlist));
distroselect->addItem("Ubuntu AI", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://lambdalabs.com/lambda-stack-deep-learning-software\">Lambda Stack AI</a><br/>"
	"<b>Description:</b> Ubuntu AI (Lambda Stack) is pre-configured for machine learning and AI development. Includes TensorFlow, PyTorch, Jupyter, CUDA, cuDNN. GPU-optimized.<br/>"
	"<b>Install Notes:</b> Requires NVIDIA GPU for full features. All ML frameworks pre-installed and configured.") <<
"Latest_x64" << "22.04_x64"));
distroselect->addItem("Ubuntu Studio", (QStringList() << "24.04_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://ubuntustudio.org/\">https://ubuntustudio.org</a><br/>"
	"<b>Description:</b> Ubuntu Studio is an official Ubuntu flavor for multimedia production. Includes audio recording/editing, video editing, graphics design, and photography tools.<br/>"
	"<b>Install Notes:</b> Low-latency kernel included. Professional creative workflow tools pre-installed.") <<
"24.04_x64" << "22.04_x64" << "20.04_x64"));
distroselect->addItem("Voyager", (QStringList() << "Latest_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://voyagerlive.org/\">https://voyagerlive.org</a><br/>"
	"<b>Description:</b> Voyager is a Xubuntu-based distribution with elegant design and pre-configured software. Features beautiful themes, multimedia codecs, and productivity tools.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live_x64" << "24.04_Live_x64" << "22.04_Live_x64"));
distroselect->addItem("Whonix", (QStringList() << "Latest_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.whonix.org/\">https://www.whonix.org</a><br/>"
	"<b>Description:</b> Whonix is a Debian-based distribution designed for anonymity and privacy. Uses Tor isolation with Gateway and Workstation VMs. Prevents IP and DNS leaks.<br/>"
	"<b>Install Notes:</b> Advanced privacy distribution. Requires virtualization. Two-VM architecture (Gateway + Workstation).") <<
"Latest_x64" << "17_x64"));
distroselect->addItem("xPUD", (QStringList() << "Stable_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.xpud.org/\">http://www.xpud.org</a><br/>"
	"<b>Description:</b> xPUD is a lightweight distribution featuring a simple kiosk-like interface with a web browser and media player.<br/>"
	"<b>Install Notes:</b> The Live version loads the entire system into RAM and boots from memory.") <<
"Stable_Live" << "Unstable_Live"));
distroselect->addItem("Xubuntu", (QStringList() << "22.04_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.xubuntu.org/\">https://www.xubuntu.org</a><br/>"
	"<b>Description:</b> Xubuntu is an official Ubuntu derivative featuring the XFCE desktop.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The NetInstall version allows for installation over FTP, and can install Kubuntu and other official Ubuntu derivatives. If you would like to use a pre-downloaded alternate (not desktop) install iso, use the HdMedia option, and then place the alternate install iso file on the root directory of your hard drive or USB drive") <<
ubuntuverlist));
distroselect->addItem("Zenwalk", (QStringList() << "5.2" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://zenwalkgnulinux.blogspot.com/\">https://zenwalkgnulinux.blogspot.com</a><br/>"
	"<b>Description:</b> Zenwalk is a Slackware-based distribution featuring the XFCE desktop.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"5.2"));
distroselect->addItem("Zorin OS", (QStringList() << "17_Live_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://zorin.com/os/\">https://zorin.com/os</a><br/>"
	"<b>Description:</b> Zorin OS is designed for Windows users switching to Linux. Features a familiar Windows-like interface with excellent out-of-the-box functionality.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"17_Live_x64" << "17_Core_x64" << "17_Lite_x64" << "16_Live_x64"));
distroselect->addItem("3CX", (QStringList() << "pbx_debian_x64" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"https://www.3cx.com/\">https://www.3cx.com</a><br/>"
    "<b>Description:</b> 3CX is a specialist, Debian-based Linux distribution designed to run a complete unified communications platform. It provides a complete open standards-based IP PBX and phone system that works with popular SIP trunks and IP phones. It will automatically configure all supported peripherals and it also comes with clients for Windows, OS X, iOS and Android. The ISO image includes a free license for the 3CX PBX edition.<br/>") <<
"pbx_debian_x64"));
