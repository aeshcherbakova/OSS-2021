#!/bin/bash
find ~ -type f -name "*.txt" > /tmp/txts.txt
cat /tmp/txts.txt
echo -e "\nsize in bytes:"
du -h /tmp/txts.txt | cut -f1
echo "size in lines:"
cat /tmp/txts.txt | xargs wc -l | tail -1
rm /tmp/txts.txt
