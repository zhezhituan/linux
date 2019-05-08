dialog --title "question" --msgbox "Welcome" 9 18
dialog --title "Confirm" --yesno "Are you willing to take part" 9 18
echo $?
if [ $? = "0" ]
then 
dialog --inputbox "Please enter your name" 9 30 2>1.txt
else 
dialog --infobox "THANK YOU" 5 20
sleep 2
dialog --clear
exit 0
fi

