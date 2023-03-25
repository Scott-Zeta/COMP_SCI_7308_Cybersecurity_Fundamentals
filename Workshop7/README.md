## Sniffing?
In cybersecurity, sniffing refers to the practice of intercepting and capturing network traffic as it flows between two or more devices. This technique is often used by hackers and cybersecurity professionals to analyze network traffic for various purposes, such as detecting vulnerabilities or identifying potential security threats.

Sniffing can be accomplished through a variety of methods, including the use of specialized software tools or hardware devices designed for this purpose. Once network traffic has been captured, it can be analyzed to extract information such as usernames, passwords, and other sensitive data.

Typical sniff tool: Wirshark.
To do sniffing, you need to connect to the target network

## DNS Hijacking?
DNS hijacking, also known as DNS spoofing or DNS redirection, is a type of cyber attack in which an attacker intercepts domain name system (DNS) queries and responds with false information.

When a user types a website address into their web browser, the browser sends a DNS query to a DNS server to resolve the domain name into an IP address that the browser can use to connect to the website. In a DNS hijacking attack, the attacker intercepts this DNS query and responds with false information, directing the user's browser to a different, malicious website instead of the intended website.

For example, an attacker could hijack the DNS query for a banking website and redirect the user to a fake, phishing website that looks like the real banking website but is designed to steal the user's login credentials.

DNS hijacking attacks can be carried out in several ways, including:

Compromising a DNS server: An attacker can compromise a DNS server and modify the DNS records to redirect traffic to a malicious website.

Malware infection: Malware can modify the DNS settings on a victim's computer or router to redirect DNS queries to a malicious DNS server controlled by the attacker.

Man-in-the-middle attack: An attacker can intercept DNS queries between the user's computer and the DNS server, modify the DNS responses, and then forward the modified responses to the user's computer.

To protect against DNS hijacking attacks, it's important to use a reputable DNS service and keep your software and firmware up-to-date to prevent vulnerabilities that could be exploited by attackers. You can also use a DNSSEC-enabled DNS resolver, which can help detect and prevent DNS hijacking attacks by adding a layer of cryptographic security to DNS queries and responses.

## ARP?
ARP stands for Address Resolution Protocol. It is a protocol used in computer networks to map a network address (such as an IP address) to a physical address (such as a MAC address).

When a device wants to send a packet to another device on the same network, it needs to know the MAC address of the destination device so that it can send the packet to the correct device. The device first checks its own ARP cache table to see if it has a recent entry for the destination device's MAC address. If it doesn't have an entry, the device sends an ARP request to the network asking for the MAC address associated with the destination device's IP address.

The ARP request is broadcast to all devices on the network, and the device that has the matching IP address responds with its MAC address. The device that made the ARP request then stores this information in its ARP cache table for future use.

ARP is a simple protocol, but it is essential for the functioning of local area networks. It is also vulnerable to attacks, such as ARP spoofing, where an attacker sends fake ARP messages to the network to map their own MAC address to the IP address of another device on the network. This can be used in various types of attacks, such as man-in-the-middle attacks and denial of service attacks. 

There are some similarities between ARP and DNS. Both protocols are used to resolve a higher-level address (IP address or domain name) to a lower-level address (MAC address or IP address, respectively). However, the main difference is that ARP is used to resolve a lower-level address within a local network, while DNS is used to resolve a higher-level address across the Internet.

In other words, ARP is used for communication between devices on the same local network, while DNS is used for communication between devices on different networks.

## Difference of ARP and DNS Spoof?
Similar, like modify other's phonebook. But they are in different network level, which DNS in application layer(DNS) but ARP in network layer(MAC) (ARP usally in local network such as LANs, WIFI, Switch)