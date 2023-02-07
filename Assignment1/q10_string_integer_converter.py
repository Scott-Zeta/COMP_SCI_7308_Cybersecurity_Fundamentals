import binascii

# convert string to integer using 
def string_to_int(string):
    return int.from_bytes(binascii.a2b_qp(string),byteorder='big')

# convert into back to string
def int_to_string(number):
    bin = number.to_bytes((number.bit_length() + 7) // 8, byteorder='big')
    return binascii.b2a_qp(bin).decode("utf-8")

def main():
    with open("q10_rsa.encrypted") as f:
        s = f.read()
    print(string_to_int(s))
    with open("q10_encrypted_to_integer.txt","w") as f:
        f.write(str(string_to_int(s)))        
    
if __name__ == "__main__":
    main()    