import binascii

# convert string to integer using 
def string_to_int(string):
    return int.from_bytes(binascii.a2b_qp(string),byteorder='big')

# convert into back to string
def int_to_string(number):
    bin = number.to_bytes((number.bit_length() + 7) // 8, byteorder='big')
    return binascii.b2a_qp(bin).decode("utf-8")

def main():        
    print(int_to_string(2559400531514252965350352773429248709764082935695171087997))
if __name__ == "__main__":
    main()    