Steps to run the code : 
i) Compile and run gen.cpp. It will create 2 files plaintext1.txt and plaintext2.txt (one file for each characteristic). 
ii) Now run command.cpp(make sure it inputs plaintext1.txt). It will create commands.txt. Now run the command "ssh -i id_rsa student@65.0.124.36 < commands.txt > output.txt". Stop it after 2 minutes using Ctrl-C, if it did not stop automatically. It will generate output.txt. Now run clean.cpp(make sure it outputs ciphertext1.txt).
iii) Now again run command.cpp(make sure this time it inputs plaintext2.txt). It will create commands.txt. Now run the command "ssh -i id_rsa student@65.0.124.36 < commands.txt > output.txt". Stop it after 2 minutes using Ctrl-C, if it did not stop automatically. It will generate output.txt. Now run clean.cpp(make sure it outputs ciphertext2.txt).
iv) Till this point of time, you have generated ciphertext1.txt and ciphertext2.txt. Now run break1.cpp and break2.cpp. It will create 2 files key1.txt and key2.txt. Each file contains the 30 bits of key-6(one file for each characteristic). 
v) Now run final_key.cpp. It will generate f_key.txt containing the 56 bits of the key. 
vi) After this run password.cpp. It will output the decrypted password. Remove the '0' at the end and you will get the command to clear the level. 
