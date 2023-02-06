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