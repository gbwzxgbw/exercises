#!/usr/bin/env bash

# tcpdump -i wl1 -G 86400 -W 14 -C 1000 -w /userdisk/data/wl1.pcap. -z gzip &   # does not work ...
# tcpdump -i wl1 -G 86400 -C 1000 -w wl1_%Y%m%d_%H%M%S.pcap &
# tcpdump -D
