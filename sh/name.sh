yesno(){
while true 
do 
read x
case "$x" in
y)return 0;;
n)return 1;;
*)return 2;;
esac
done
}
for name in $@
do
echo "yourname is $name"
if yesno "$name"
then 
echo "HI $name"
else
echo "NO"
fi
done 
exit 0
