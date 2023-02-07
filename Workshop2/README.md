## Alert
```./RSA/textbook_rsa-2.py``` is a python2 code

## Symmetroc encryption
Symmetric encryption, also known as shared key encryption, is a method of cryptography where the same key is used for both encryption and decryption. In symmetric encryption, both the sender and the receiver of a message have a copy of the same shared key, which they use to encrypt and decrypt the message.

The main advantage of symmetric encryption is that it is fast and efficient, as the same key can be used for both encryption and decryption, making the encryption and decryption process much simpler. However, the main disadvantage of symmetric encryption is that the key must be securely exchanged between the sender and the receiver, which can be a challenge if the two parties are not in close proximity or if the key is intercepted by an attacker.

Symmetric encryption algorithms include AES, DES, and Blowfish. These algorithms are widely used for encryption of data in motion, for example in VPNs, or data at rest, such as in disk encryption.

## CBC and EBC
ECB and CBC are two modes of operation for symmetric block ciphers.

ECB (Electronic Code Book) is the simplest and most basic mode of operation for a block cipher. In ECB, the plaintext is divided into fixed-size blocks and each block is encrypted separately using the same key. ECB has the disadvantage that if the same plaintext block is encrypted multiple times, it will produce the same ciphertext block each time, which can lead to patterns in the encrypted data that can be exploited by attackers.
Typical simple ECB is Ceaser Cipher. Which same text always generate same cipher.

CBC (Cipher Block Chaining) is a more secure mode of operation that addresses the weaknesses of ECB. In CBC, each block of plaintext is XORed with the previous block of ciphertext before it is encrypted, so that even if the same plaintext block is encrypted multiple times, it will produce a different ciphertext block each time. This makes it much more difficult for attackers to detect patterns in the encrypted data.
This one same text will have different cipher

Both ECB and CBC are widely used in various encryption applications, but CBC is generally considered to be more secure and is more commonly used in applications where security is a concern. However, it is important to note that the security of a block cipher in any mode of operation also depends on the strength of the encryption algorithm and the length of the key used.

## RSA (public private key pair)
RSA is a public-key cryptography algorithm. It is widely used for secure data transmission. In RSA, each user has a pair of public and private keys. The public key is used to encrypt the message and the private key is used to decrypt it. The security of RSA is based on the mathematical property that it is difficult to factorize the product of two large prime numbers, which are used to generate the keys. RSA is widely used in many applications such as digital signatures, software protection, and SSL/TLS protocols.

## RSA structure?
encrypted  enc = (msg^e)/n
decrpted plain = (enc^d)/n = msg
command ```openssl rsa -text -pubin < public.key``` can see the info of e and n in the key.
```
Public-Key: (512 bit)
Modulus:
    00:d4:24:4c:60:12:e4:d3:b9:1a:2a:8b:c7:21:c8:
    08:e6:55:d6:ef:cd:db:6e:fc:eb:2c:e3:6c:ed:e9:
    e0:59:f2:ad:4e:20:65:49:3d:2f:8d:49:3b:9c:7b:
    4f:38:48:e7:9a:90:9c:9b:38:58:71:04:25:00:01:
    f2:f8:3b:34:73
Exponent: 65537 (0x10001)
```
private key also has these info, so they allow decrpyt each other

Alert: RSA key can only be used to encrypt message less than its size (minus padding). So it usally used to encrypt other symmetric key.
```openssl rsautl -decrypt -inkey private.key -in message.dat``` use this to decrypt

1. Execute the following command (the example below is for 128 bits, so the one you will see is much longer)
```
# openssl asn1parse -i -in private.key
0:d=0 hl=2 l= 97 cons: SEQUENCE
2:d=1 hl=2 l= 1 prim: INTEGER :00
5:d=1 hl=2 l= 17 prim: INTEGER :AB32AD57BC713D952BE8D30099B41BEF # this is the modulus n
24:d=1 hl=2 l= 3 prim: INTEGER :010001 # public exponent e
29:d=1 hl=2 l= 16 prim: INTEGER :76B72FA9358DB94B835AF9B0F4C0D721 # private exponent d
47:d=1 hl=2 l= 9 prim: INTEGER :DD454679C3CA4C77 # secret p
58:d=1 hl=2 l= 9 prim: INTEGER :C611776FD9A7A249 # secret q
69:d=1 hl=2 l= 8 prim: INTEGER :75081A01773BFD7B
79:d=1 hl=2 l= 8 prim: INTEGER :2A37B4DE89651AC9
89:d=1 hl=2 l= 8 prim: INTEGER :228DBCF687C89CD5
```
2. Now we know n, p, q, e and d, you can use this Python code to verify their relationships (n=p*q and d*e mod (p-1)*(q-1) = 1 as follows
```
p = int("00DD454679C3CA4C77",16)
q = int("00C611776FD9A7A249", 16)
n = int("00AB32AD57BC713D952BE8D30099B41BEF", 16)
e = int("010001",16)
d = int("76B72FA9358DB94B835AF9B0F4C0D721", 16)

# Verify n = p*q
print "[n]:" + str(n) + " [p*q]: " + str(p*q)

# verify e*d mod{(p-1)*(q-1)} = 1
print "[e*d mod{(p-1)*(q-1)}]: " + str((e*d)%((p-1)*(q-1)))
```

## Cryptographic Hashing
Some features of Cryptographic Hashing, also refer to "digest"
1. Deterministic: Given the same input, the output of the hash function will always be the same.
2. Non-invertible: Given only the output of the hash function, it is computationally infeasible to determine the 3.original input.
3. Collision-resistant: It is computationally infeasible to find two different inputs that produce the same output (known as a "collision").
4. Fixed-size: The size of the output of the hash function is always the same, regardless of the size of the input.

So it can not be decrypt to original message, but can be used in download or transmission verify.