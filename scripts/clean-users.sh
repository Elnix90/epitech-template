#!/usr/bin/bash

sudo userdel toto
sudo userdel tata
sudo userdel tutu
sudo rm -rf /home/tata /home/toto /home/tutu

sudo groupdel student
sudo groupdel pedago