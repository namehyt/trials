Deployment of a Unix-like system
================================

## communications

1. time sync

(in case of no RTC but Internet)

  - ntp 
  - htp (time sync from http-message)

2. tel-log

cli:
  - telnet (for CLI)
  - ssh (for CLI)

GUI:
  - VNC (an open source solusion, client can be on Win/Unix-like/iOS)
  - xrdp (can be visit by 'mstsc')

3. file-access

file-only:
  - ftp/tftp

directory-enhanced:
  - samba
