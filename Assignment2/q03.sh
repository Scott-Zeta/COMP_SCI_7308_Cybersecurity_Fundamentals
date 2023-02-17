#!/usr/bin/env bash

# get the ip address
dig dunstan.org.au

# get other domain name base on the address
dig dunstan.org.au +short | xargs -I{} dig -x {}

# use whois get the Owner of the IP address
dig dunstan.org.au +short | xargs -I{} whois {}