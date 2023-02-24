import sys
filler='\x41\xb42'
sys.stdout.buffer.write(filler.encode('latin-1'))