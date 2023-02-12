## Google operator?
```ext``` and ```filetype```:
```ext``` would check the file's extension, even its costumize extension or hard-code extension
```file type``` stands for real file type

```-```
```-``` stands for exclusive, for example ```site:adelaide.edu.au -inurl:https``` will give result of all url which didn't use https secure protocal in the domain

```site:github.com ext:env```
If your git repo appear in here, that means you uploaded your sensitive info.


## dig
The dig command is used to query DNS (Domain Name System) servers and retrieve information about domain names and their associated records. The following are some of the commonly used query types when using dig:

1. SOA (Start of Authority) record: This record defines the authoritative information for a domain, including the primary DNS server for the domain, the email address of the domain administrator, and various time-to-live values.
2. NS (Name Server) record: This record lists the DNS servers that are authoritative for a domain.
3. MX (Mail Exchange) record: This record specifies the mail servers for a domain and the priority order in which they should be used to deliver email.
4. A (Address) record: This record maps a hostname to an IPv4 address.
5. AAAA (IPv6 Address) record: This record maps a hostname to an IPv6 address.
6. CNAME (Canonical Name) record: This record maps an alias to its real name.
7. PTR (Pointer) record: This record maps an IP address to a hostname.

The answer include
1. Question section, what you send, like ```dig A www.netflex.com```
2. Anwser section, what you want
3. authority section, who provided the info
4. additional section, attachment for anwser section

## Zone Transfer
A DNS zone transfer, also known as a full zone transfer, is a type of DNS query where a DNS server provides a complete copy of its records for a specific zone file to another DNS server. This is used for replicating the zone information between a primary DNS server and its secondary DNS servers.

In DNS, a zone is a contiguous portion of the domain name space, which is managed by a single administrative authority. A zone transfer is a request for all resource records within a specific DNS zone file, including names and addresses of all authoritative name servers for the domain, mail server (MX) records, and any other relevant data.

DNS zone transfers are used to keep secondary DNS servers up to date with the information held on the primary DNS server, but they can also be used by attackers to gain information about a target network's infrastructure. Therefore, it's important to secure zone transfers by allowing them only from trusted sources and to use encryption whenever possible.

Be honest, I don't fully understand this.
@8.8.8.8 stands for Google public server

## dnsenum?
For my understanding, "enumerate DNS" is like run multiple command with dig