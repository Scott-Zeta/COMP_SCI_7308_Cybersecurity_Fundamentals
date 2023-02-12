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