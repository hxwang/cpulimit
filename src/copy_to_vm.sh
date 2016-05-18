#!/bin/bash
ip=$1
ssh-keygen -f "/home/hwang14/.ssh/known_hosts" -R 10.0.47.$ip
scp -i ../../openstack/setup/key/poweredge.key /usr/bin/stress cpulimit mem ubuntu@10.0.47.$ip:~/
