import base64

with open("q08_secret.enc") as f:
    data = f.read().splitlines()[0]
print(data)

decoded_data = base64.b64decode(data).decode()
print(decoded_data)