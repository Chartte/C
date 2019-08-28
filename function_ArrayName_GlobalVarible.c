szadmin@SZ-IRA-RT> show configuration | display set 
set version 15.1R7.9
set groups member0 interfaces me0 unit 0 family inet
set groups member1 interfaces me0 unit 0 family inet

set interfaces xe-0/0/0 description ---TO_SZ-IRA-WAN-CT_Ge-0/0/0---
set interfaces xe-0/0/0 ether-options 802.3ad ae0
set interfaces xe-0/0/1 description ---TO_SZ-IRA-WAN-CT-B_Ge-0/0/0---
set interfaces xe-0/0/1 ether-options 802.3ad ae1
set interfaces xe-0/0/2 description ---TO_SZ-IRA-MAN-CT_Ge-1/0/0---
set interfaces xe-0/0/2 ether-options 802.3ad ae2
set interfaces xe-0/0/3 description ---TO_SZ-IRA-MAN-CMCC_Ge-1/0/0---
set interfaces xe-0/0/3 ether-options 802.3ad ae3
set interfaces xe-0/0/4 unit 0 family ethernet-switching port-mode access
set interfaces xe-0/0/4 unit 0 family ethernet-switching vlan members vlan500
set interfaces xe-0/0/5 description ---TO_SZ-INTER-FW-OA_G0/0/3---
set interfaces xe-0/0/5 unit 0 family ethernet-switching vlan members vlan510
set interfaces xe-0/0/6 unit 0 family ethernet-switching
set interfaces xe-0/0/7 unit 0 family ethernet-switching
set interfaces xe-0/0/8 unit 0 family ethernet-switching
set interfaces xe-0/0/9 unit 0 family ethernet-switching
set interfaces xe-0/0/10 description TO-IDS-10.60.203.154
set interfaces xe-0/0/10 unit 0 family inet address 10.60.203.153/30
set interfaces xe-0/0/11 description TO_4G-MAIPU-7300-RT
set interfaces xe-0/0/11 unit 0 family inet address 10.60.203.149/30
set interfaces xe-0/0/12 description TO_B-SZ-11F-S7503-PD-01_GE1/4/0/47
set interfaces xe-0/0/12 unit 0 family inet address 10.60.203.25/30
set interfaces xe-0/0/13 description TO_B-SZ-11F-S7503-OA-01_GE1/4/0/47
set interfaces xe-0/0/13 unit 0 family inet address 10.60.203.33/30
set interfaces xe-0/0/14 description TO_SZ-CESHI-FW_ge-0/0/3
set interfaces xe-0/0/14 unit 0 family inet address 10.60.203.65/30
set interfaces xe-0/0/15 unit 0 family inet
set interfaces xe-0/0/16 unit 0 family inet address 10.60.203.45/30
set interfaces xe-0/0/17 unit 0 family ethernet-switching
set interfaces xe-0/0/18 unit 0 family ethernet-switching
set interfaces xe-0/0/19 unit 0 family ethernet-switching
set interfaces xe-0/0/20 unit 0 description ***NETWORK-MO-10.60.203.62****
set interfaces xe-0/0/20 unit 0 family inet address 10.60.203.61/30
set interfaces xe-0/0/21 unit 0 family inet address 10.60.203.77/30
set interfaces xe-0/0/22 unit 0 family ethernet-switching
set interfaces xe-0/1/0 description ---TO_ZD9F-IRA-CT_Ge-0/1/0---
set interfaces xe-0/1/0 unit 0 family inet address 10.60.203.17/30
set interfaces xe-0/1/3 description ---S-16F-3600-48-OA01-A_G1/0/52--
set interfaces xe-0/1/3 unit 0 family inet address 10.60.201.141/30
set interfaces xe-1/0/0 description ---TO_SZ-IRA-WAN-CT_Ge-0/0/1---
set interfaces xe-1/0/0 ether-options 802.3ad ae0
set interfaces xe-1/0/1 description ---TO_SZ-IRA-WAN-CT-B_Ge-0/0/1---
set interfaces xe-1/0/1 ether-options 802.3ad ae1
set interfaces xe-1/0/2 description ---TO_SZ-IRA-MAN-CT_Ge-1/1/0---
set interfaces xe-1/0/2 ether-options 802.3ad ae2
set interfaces xe-1/0/3 description ---TO_SZ-IRA-MAN-CMCC_Ge-1/1/0---
set interfaces xe-1/0/3 ether-options 802.3ad ae3
set interfaces xe-1/0/4 unit 0 family ethernet-switching port-mode access
set interfaces xe-1/0/4 unit 0 family ethernet-switching vlan members vlan500
set interfaces xe-1/0/5 description ---TO_SZ-INTER-FW-OB_G9/0/3---
set interfaces xe-1/0/5 unit 0 family ethernet-switching vlan members vlan510
set interfaces xe-1/0/10 unit 0 description ***NETWORK-MO-10.60.203.74****
set interfaces xe-1/0/10 unit 0 family inet address 10.60.203.73/30
set interfaces xe-1/0/12 description TO_B-SZ-11F-S7503-PD-01_GE2/4/0/47
set interfaces xe-1/0/12 unit 0 family inet address 10.60.203.29/30
set interfaces xe-1/0/13 description TO_B-SZ-11F-S7503-OA-01_GE2/4/0/47
set interfaces xe-1/0/13 unit 0 family inet address 10.60.203.37/30
set interfaces xe-1/1/0 description ---TO_ZD9F-IRA-CMCC_Ge-1/1/0---
set interfaces xe-1/1/0 unit 0 family inet address 10.60.203.21/30
set interfaces xe-1/1/3 description ---S-16F-3600-48-OA01-A_G2/0/49--
set interfaces xe-1/1/3 unit 0 family inet address 10.60.201.145/30
set interfaces ae0 description ---TO_SZ-IRA-WAN-CT_AE0---
set interfaces ae0 unit 0 family ethernet-switching port-mode trunk
set interfaces ae0 unit 0 family ethernet-switching vlan members vlan10
set interfaces ae0 unit 0 family ethernet-switching native-vlan-id 1
set interfaces ae1 description ---TO_SZ-IRA-WAN-CT-B_AE0---
set interfaces ae1 unit 0 family ethernet-switching port-mode trunk
set interfaces ae1 unit 0 family ethernet-switching vlan members vlan20
set interfaces ae1 unit 0 family ethernet-switching native-vlan-id 1
set interfaces ae2 description ---TO_SZ-IRA-MAN-CT_AE0---
set interfaces ae2 unit 0 family inet address 10.60.203.9/30
set interfaces ae3 description ---TO_SZ-IRA-MAN-CMCC_AE0---
set interfaces ae3 unit 0 family inet address 10.60.203.13/30
set interfaces lo0 unit 0 family inet filter input protect
set interfaces lo0 unit 0 family inet address 10.60.99.21/32
set interfaces vlan unit 0
set interfaces vlan unit 10 family inet address 10.60.203.2/30
set interfaces vlan unit 20 family inet address 10.60.203.6/30
set interfaces vlan unit 500 family inet address 10.60.203.177/29
set interfaces vlan unit 510 family inet address 10.60.203.193/29
set snmp client-list snmp50 10.5.36.81/32
set snmp client-list snmp50 10.5.36.82/32
set snmp client-list snmp50 10.5.36.84/32
set snmp client-list snmp50 10.5.36.85/32
set snmp client-list snmp50 10.5.36.86/32
set snmp client-list snmp50 10.5.36.87/32
set snmp client-list snmp50 10.5.36.107/32
set snmp client-list snmp50 10.5.36.88/32
set snmp community linux authorization read-only
set snmp community linux client-list-name snmp50
set snmp community linux_ywlj authorization read-only
set snmp community linux_ywlj client-list-name snmp50
set snmp community public authorization read-only
set routing-options static route 10.203.148.0/24 next-hop 10.60.201.142
set routing-options static route 10.203.148.0/24 qualified-next-hop 10.60.201.146 preference 100
set routing-options static route 10.203.175.0/24 next-hop 10.60.201.142
set routing-options static route 10.203.175.0/24 qualified-next-hop 10.60.201.146 preference 100
set routing-options static route 10.203.154.0/24 next-hop 10.60.203.66
set routing-options static route 10.60.203.68/30 next-hop 10.60.203.66
set routing-options static route 10.60.99.29/32 next-hop 10.60.203.66
set routing-options static route 10.203.155.0/24 next-hop 10.60.203.66
set routing-options static route 10.203.146.0/24 next-hop 10.60.203.182
set routing-options static route 10.60.99.20/32 next-hop 10.60.203.182
set routing-options static route 10.203.250.0/24 next-hop 10.60.203.198
set routing-options static route 10.60.203.160/30 next-hop 10.60.203.198
set routing-options static route 10.203.145.0/24 next-hop 10.60.203.198
set routing-options static route 10.60.157.0/24 next-hop 10.60.203.198
set routing-options static route 10.60.161.0/24 next-hop 10.60.203.198
set routing-options static route 10.60.162.0/24 next-hop 10.60.203.198
set routing-options static route 10.60.163.0/24 next-hop 10.60.203.198
set routing-options static route 10.60.158.0/25 next-hop 10.60.203.198
set routing-options static route 10.60.159.128/25 next-hop 10.60.203.198
set routing-options static route 10.60.160.128/25 next-hop 10.60.203.198
set routing-options router-id 10.60.99.21
set protocols ospf external-preference 180
set protocols ospf export static-ospf
set protocols ospf reference-bandwidth 1g
set protocols ospf area 0.0.0.0 interface vlan.10
set protocols ospf area 0.0.0.0 interface vlan.20
set protocols ospf area 0.0.0.0 interface lo0.0
set protocols ospf area 0.0.0.0 interface vlan.500
set protocols ospf area 0.0.0.0 interface vlan.510
set protocols ospf area 0.0.0.0 interface ae2.0
set protocols ospf area 0.0.0.0 interface ae3.0
set protocols ospf area 0.0.0.0 interface xe-0/0/12.0 metric 10
set protocols ospf area 0.0.0.0 interface xe-1/0/12.0 metric 20
set protocols ospf area 0.0.0.0 interface xe-0/0/13.0 metric 10
set protocols ospf area 0.0.0.0 interface xe-1/0/13.0 metric 20
set protocols ospf area 0.0.0.0 interface xe-1/0/14.0
set protocols ospf area 0.0.0.0 interface xe-0/0/14.0 metric 20
set protocols ospf area 0.0.0.0 interface xe-0/0/15.0 metric 20
set protocols ospf area 0.0.0.0 interface xe-0/0/16.0
set protocols ospf area 0.0.0.0 interface xe-0/1/0.0 metric 10
set protocols ospf area 0.0.0.0 interface xe-1/1/0.0 metric 20
set protocols ospf area 0.0.0.0 interface xe-0/1/3.0
set protocols ospf area 0.0.0.0 interface xe-1/1/3.0
set protocols ospf area 0.0.0.0 interface xe-0/0/11.0
set protocols ospf area 0.0.0.0 interface xe-0/0/10.0
set protocols ospf area 0.0.0.0 interface xe-0/0/20.0
set protocols ospf area 0.0.0.0 interface xe-0/0/21.0
set protocols igmp-snooping vlan all
set protocols mstp bridge-priority 4k
set protocols mstp interface all mode point-to-point
set protocols lldp interface all
set protocols lldp-med interface all
set policy-options policy-statement static-ospf term 1 from protocol static
set policy-options policy-statement static-ospf term 1 then accept

set virtual-chassis preprovisioned
set virtual-chassis no-split-detection
set virtual-chassis member 0 role routing-engine
set virtual-chassis member 0 serial-number LY0218406695
set virtual-chassis member 1 role routing-engine
set virtual-chassis member 1 serial-number LY0218406698
set ethernet-switching-options analyzer port_monitor input ingress interface xe-0/0/13.0
set ethernet-switching-options analyzer port_monitor input ingress interface xe-1/0/13.0
set ethernet-switching-options analyzer port_monitor input ingress interface ae0.0
set ethernet-switching-options analyzer port_monitor input ingress interface ae2.0
set ethernet-switching-options analyzer port_monitor input ingress interface ae3.0
set ethernet-switching-options analyzer port_monitor input ingress interface xe-0/0/14.0
set ethernet-switching-options analyzer port_monitor input egress interface xe-0/0/13.0
set ethernet-switching-options analyzer port_monitor input egress interface xe-1/0/13.0
set ethernet-switching-options analyzer port_monitor input egress interface ae0.0
set ethernet-switching-options analyzer port_monitor input egress interface ae2.0
set ethernet-switching-options analyzer port_monitor input egress interface ae3.0
set ethernet-switching-options analyzer port_monitor input egress interface xe-0/0/14.0
set ethernet-switching-options analyzer port_monitor output interface xe-0/0/9.0
set ethernet-switching-options storm-control interface all
set vlans default vlan-id 1
set vlans default l3-interface vlan.0
set vlans vlan10 description TO_SZ-IRA-WAN-CT
set vlans vlan10 vlan-id 10
set vlans vlan10 l3-interface vlan.10
set vlans vlan20 description TO_SZ-IRA-WAN-CT-B
set vlans vlan20 vlan-id 20
set vlans vlan20 l3-interface vlan.20
set vlans vlan500 vlan-id 500
set vlans vlan500 l3-interface vlan.500
set vlans vlan510 vlan-id 510
set vlans vlan510 l3-interface vlan.510
set poe interface all
                                        
{master:0}
szadmin@SZ-IRA-RT> configure 
Entering configuration mode

{master:0}[edit]
szadmin@SZ-IRA-RT# set interfaces vlan unit 0 ?
Possible completions:
  <[Enter]>            Execute this command
  accounting-profile   Accounting profile name
  alias                Interface alias
+ apply-groups         Groups from which to inherit configuration data
+ apply-groups-except  Don't inherit configuration data from these groups
> arp-resp             Knob to control ARP response on the interface, default is restricted
  bandwidth            Logical unit bandwidth (informational only)
  description          Text description of interface
  disable              Disable this logical interface
  encapsulation        Logical link-layer encapsulation
> family               Protocol family
  no-traps             Don't enable SNMP notifications on state changes
> proxy-arp            Enable proxy ARP on the interface, default is unrestricted
  traps                Enable SNMP notifications on state changes
  |                    Pipe through a command
{master:0}[edit]
szadmin@SZ-IRA-RT# set interfaces vlan unit ?    
Possible completions:
  <interface-unit-number>  Logical unit number
  0                    Logical unit number
  10                   Logical unit number
  20                   Logical unit number
  500                  Logical unit number
  510                  Logical unit number
{master:0}[edit]
szadmin@SZ-IRA-RT# set interfaces vlan ?        
Possible completions:
  accounting-profile   Accounting profile name
+ apply-groups         Groups from which to inherit configuration data
+ apply-groups-except  Don't inherit configuration data from these groups
  description          Text description of interface
  disable              Disable this interface
  encapsulation        Physical link-layer encapsulation
  gratuitous-arp-reply  Enable gratuitous ARP reply
> hold-time            Hold time for link up and link down
  mac                  Hardware MAC address
  mtu                  Maximum transmit packet size (256..9216)
  no-gratuitous-arp-reply  Don't enable gratuitous ARP reply
  no-gratuitous-arp-request  Ignore gratuitous ARP request
  no-traps             Don't enable SNMP notifications on state changes
> traceoptions         Interface trace options
  traps                Enable SNMP notifications on state changes
> unit                 Logical interface
{master:0}[edit]
szadmin@SZ-IRA-RT# exit                       
Exiting configuration mode

{master:0}
szadmin@SZ-IRA-RT> show interfaces terse 
Interface               Admin Link Proto    Local                 Remote
vcp-255/2/0             up    down
vcp-255/2/0.32768       up    down
vcp-255/2/1             up    down
vcp-255/2/1.32768       up    down
vcp-255/2/2             up    up
vcp-255/2/2.32768       up    up  
vcp-255/2/3             up    up
vcp-255/2/3.32768       up    up  
xe-0/0/0                up    down
xe-0/0/0.0              up    down aenet    --> ae0.0
xe-0/0/1                up    down
xe-0/0/1.0              up    down aenet    --> ae1.0
xe-0/0/2                up    down
xe-0/0/2.0              up    down aenet    --> ae2.0
xe-0/0/3                up    down
xe-0/0/3.0              up    down aenet    --> ae3.0
xe-0/0/4                up    down
xe-0/0/4.0              up    down eth-switch
xe-0/0/5                up    down
xe-0/0/5.0              up    down eth-switch
xe-0/0/6                up    down
xe-0/0/6.0              up    down eth-switch
xe-0/0/7                up    down      
xe-0/0/7.0              up    down eth-switch
xe-0/0/8                up    down
xe-0/0/8.0              up    down eth-switch
xe-0/0/9                up    down
xe-0/0/9.0              up    down eth-switch
xe-0/0/10               up    down
xe-0/0/10.0             up    down inet     10.60.203.153/30
xe-0/0/11               up    down
xe-0/0/11.0             up    down inet     10.60.203.149/30
xe-0/0/12               up    down
xe-0/0/12.0             up    down inet     10.60.203.25/30 
xe-0/0/13               up    down
xe-0/0/13.0             up    down inet     10.60.203.33/30 
xe-0/0/14               up    down
xe-0/0/14.0             up    down inet     10.60.203.65/30 
xe-0/0/15               up    down
xe-0/0/15.0             up    down inet    
xe-0/0/16               up    down
xe-0/0/16.0             up    down inet     10.60.203.45/30 
xe-0/0/17               up    down
xe-0/0/17.0             up    down eth-switch
xe-0/0/18               up    down
xe-0/0/18.0             up    down eth-switch
xe-0/0/19               up    down
xe-0/0/19.0             up    down eth-switch
xe-0/0/20               up    down
xe-0/0/20.0             up    down inet     10.60.203.61/30 
xe-0/0/21               up    down
xe-0/0/21.0             up    down inet     10.60.203.77/30 
xe-0/0/22               up    down
xe-0/0/22.0             up    down eth-switch
xe-0/0/23               up    down
xe-0/0/24               up    down
xe-0/0/25               up    down
xe-0/0/26               up    down
xe-0/0/27               up    down
xe-0/0/28               up    down
xe-0/0/29               up    down
xe-0/0/30               up    down
xe-0/0/31               up    down
xe-0/1/0                up    down
xe-0/1/0.0              up    down inet     10.60.203.17/30 
xe-0/1/1                up    down
xe-0/1/3                up    down
xe-0/1/3.0              up    down inet     10.60.201.141/30
xe-1/0/0                up    down      
xe-1/0/0.0              up    down aenet    --> ae0.0
xe-1/0/1                up    down
xe-1/0/1.0              up    down aenet    --> ae1.0
xe-1/0/2                up    down
xe-1/0/2.0              up    down aenet    --> ae2.0
xe-1/0/3                up    down
xe-1/0/3.0              up    down aenet    --> ae3.0
xe-1/0/4                up    down
xe-1/0/4.0              up    down eth-switch
xe-1/0/5                up    down
xe-1/0/5.0              up    down eth-switch
xe-1/0/6                up    down
xe-1/0/7                up    down
xe-1/0/8                up    down
xe-1/0/9                up    down
xe-1/0/10               up    down
xe-1/0/10.0             up    down inet     10.60.203.73/30 
xe-1/0/11               up    down
xe-1/0/12               up    down
xe-1/0/12.0             up    down inet     10.60.203.29/30 
xe-1/0/13               up    down
xe-1/0/13.0             up    down inet     10.60.203.37/30 
xe-1/0/14               up    down      
xe-1/0/15               up    down
xe-1/0/16               up    down
xe-1/0/17               up    down
xe-1/0/18               up    down
xe-1/0/19               up    down
xe-1/0/20               up    down
xe-1/0/21               up    down
xe-1/0/22               up    down
xe-1/0/23               up    down
xe-1/0/24               up    down
xe-1/0/25               up    down
xe-1/0/26               up    down
xe-1/0/27               up    down
xe-1/0/28               up    down
xe-1/0/29               up    down
xe-1/0/30               up    down
xe-1/0/31               up    down
xe-1/1/0                up    down
xe-1/1/0.0              up    down inet     10.60.203.21/30 
xe-1/1/1                up    down
xe-1/1/3                up    down
xe-1/1/3.0              up    down inet     10.60.201.145/30
ae0                     up    down      
ae0.0                   up    down eth-switch
ae1                     up    down
ae1.0                   up    down eth-switch
ae2                     up    down
ae2.0                   up    down inet     10.60.203.9/30  
ae3                     up    down
ae3.0                   up    down inet     10.60.203.13/30 
bme0                    up    up
bme0.32768              up    up   inet     128.0.0.1/2     
                                            128.0.0.16/2    
                                            128.0.0.32/2    
                                   tnp      0x10            
bme0.32770              down  up   eth-switch
dsc                     up    up
gre                     up    up
ipip                    up    up
jsrv                    up    up
jsrv.1                  up    up   inet     128.0.0.127/2   
lo0                     up    up
lo0.0                   up    up   inet     10.60.99.21         --> 0/0
lo0.16384               up    up   inet     127.0.0.1           --> 0/0
lsi                     up    up
me0                     up    down      
me0.0                   up    down eth-switch
mtun                    up    up
pimd                    up    up
pime                    up    up
tap                     up    up
vlan                    up    up
vlan.0                  up    down
vlan.10                 up    down inet     10.60.203.2/30  
vlan.20                 up    down inet     10.60.203.6/30  
vlan.500                up    down inet     10.60.203.177/29
vlan.510                up    down inet     10.60.203.193/29
vme                     up    down

{master:0}
