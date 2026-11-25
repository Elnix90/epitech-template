#!/usr/bin/bash

sudo groupadd student
sudo groupadd pedago

for u in toto tata tutu; do
    sudo useradd -m -s /usr/bin/fish $u
    echo "$u:$u" | sudo chpasswd
done

sudo usermod tata -aG pedago
sudo usermod toto -aG student
sudo usermod tutu -aG pedago,student
