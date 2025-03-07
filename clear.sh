semids=$(ipcs -s | awk '/^0x/ {print $2}')

for id in $semids; do
    ipcrm sem $id
done