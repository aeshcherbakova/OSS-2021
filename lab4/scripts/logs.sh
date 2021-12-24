#!/bin/bash
date >> /tmp/run.log
echo "Hello, world!"
cat /tmp/run.log | grep wc -l >&2 
