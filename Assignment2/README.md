# Issue in q09
Strang thing.
The pack sequence must folow the image given. Or it won't get the answer.
excute with single command one by one doesn't work.

# Issue in q08 (Done, Need to use double VM)
I tried 
```sudo nmap -T4 -sT -Pn -n -p 20000-60000 172.16.15.128```
```sudo nmap -T4 -sS -Pn -n -p 20000-60000 172.16.15.128```
for 40001 ports each takes around 1 hour.
But only get the log in scanLog.txt

run ```netstat -tulpn``` on VM, got portLog_fromHackLab.txt
more than one port between 20000 to 60000 openning, but its actually cheating, and I can not figure out why I can not see them when nmap scanning.

## ASN?
An Autonomous System Number (ASN) is a unique identifier assigned to a group of IP networks that operate together under a single administrative domain. ASNs are used to facilitate routing on the Internet, allowing routers to exchange information about the networks they are connected to and determine the best path for traffic to take.

Each ASN is assigned by a regional Internet registry (RIR) such as ARIN, RIPE, or APNIC, and is typically associated with an organization or Internet service provider (ISP) that operates a network infrastructure. ASNs can range in size from a small ISP with just a few networks to a large content provider with a global network spanning multiple continents.

ASNs are commonly used in the context of the Border Gateway Protocol (BGP), which is the primary protocol used to exchange routing information between Internet routers. By exchanging information about the networks they are connected to and the paths between them, routers can build a map of the Internet and determine the most efficient routes for traffic to take.

ASN can provide info for router path finding, they are an important part of the Internet infrastructure that enables routers to learn about and communicate with other networks, identify the networks that the routers are connected to.

## CVSS2.0 String?
A kind of standarlized way to represent aspect of the vulnerability.

For example:
In the CVSS 2.0 scoring system, the letters N, H, and P stand for:

AV: Access Vector 
AC: Access Complexity
Au: Authentication
C: Confidentiality Impact
I: Integrity Impact
A: Availability Impact

N: None. No impact on the system.
H: Partial. The vulnerability allows some access, but not enough to completely compromise the target.
P: Complete. The vulnerability allows full access to the target.
In the vector, AV:N/AC:H/Au:N/C:P/I:N/A:N, the values N, H, and P are used to indicate the impact of the vulnerability on the system in the following way:

AV:N: Access Vector is None, meaning that no access is required to exploit the vulnerability.
AC:H: Access Complexity is High, meaning that special conditions are required to exploit the vulnerability, such as a specific configuration or user interaction.
Au:N: Authentication is Not Required, meaning that no authentication or privileges are needed to exploit the vulnerability.
C:P: Confidentiality Impact is Partial, meaning that the vulnerability can only compromise some confidentiality of the system, but not all of it.
I:N: Integrity Impact is None, meaning that the vulnerability does not affect the integrity of the system.
A:N: Availability Impact is None, meaning that the vulnerability does not affect the availability of the system.