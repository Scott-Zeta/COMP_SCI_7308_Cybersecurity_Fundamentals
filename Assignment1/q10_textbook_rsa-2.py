# function to calculate inverse modular
# using the extended Euclidean algorithm
def invmod(e,e_coPrime):
  i=1
  while True:
    d = e_coPrime * i + 1;
    if(d%e==0):
      d = d/e
      break;
    i = i+1
  return d

p = int("C5A047A7C52ED3A2875F7D76C47B555F",16) # first prime
q = int("C93268355C09197BBF1659B5522FFACD",16) # second prime
e = int("010001",16) # an number that is co-prime with (p-1)*(q-1)

# calculate modulus n
n = int("9B51C20306EDE535C8FCAADBC3F3515E52A0D005703DD449BEC66B23E2932313",16)
print "n is: " + str(n)

# calculate inverse modular d of exponent e and (p-1)*(q-1)
d = int("0D067636BAC6088AD2281E4BFFCACFEFEF9BC1A69FB9E701063DFBAAB436E4C1",16)
print "d is: " + str(d)

# check that d*e mod (p-1)*(q-1) is indeed 1
print "checking d*e mod (p-1)*(q-1): " + str(((d*e) % ((p-1)*(q-1))))

# encrypting short message using public exponent e
msg = int("1234",16)
enc = pow(msg,e, n) # supplying the 3rd parameter efficiently computes the mod

# encrypted  enc = (msg^e)/n
# print "Message " + str(msg) + " is encrypted to: " + str(enc)
with open("q10_rsa.encrypted") as f:
  s = f.read()
enc = int(s,16)
# decrypt message using private exponent d
plain = pow(enc,d, n) # supplying the 3rd parameter efficiently computes the mod

# decrpted plain = (enc^d)/n = msg
print "Cipher " + str(enc) + " is decrypted to: " + str(plain)