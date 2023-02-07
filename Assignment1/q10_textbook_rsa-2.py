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

p = int("E017",16) # first prime
q = int("D20D",16) # second prime
e = int("010001",16) # an number that is co-prime with (p-1)*(q-1)

# calculate modulus n
n = p*q
print "n is: " + str(n)

# calculate inverse modular d of exponent e and (p-1)*(q-1)
d = invmod(e, (p-1)*(q-1))
print "d is: " + str(d)

# check that d*e mod (p-1)*(q-1) is indeed 1
print "checking d*e mod (p-1)*(q-1): " + str(((d*e) % ((p-1)*(q-1))))

# encrypting short message using public exponent e
msg = 12345
enc = pow(msg,e, n) # supplying the 3rd parameter efficiently computes the mod

# encrypted  enc = (msg^e)/n
print "Message " + str(msg) + " is encrypted to: " + str(enc)

# decrypt message using private exponent d
plain = pow(enc,d, n) # supplying the 3rd parameter efficiently computes the mod

# decrpted plain = (enc^d)/n = msg
print "Cipher " + str(enc) + " is decrypted to: " + str(plain)