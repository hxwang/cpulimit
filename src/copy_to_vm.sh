#!/bin/bash
ssh-keygen -f "/home/hwang14/.ssh/known_hosts" -R 10.0.47.2
scp -i ../../../vm-key/cloud.key /usr/bin/stress cpulimit mem ubuntu@10.0.47.2:~/
