#!/bin/bash
#-gt,-eq,-lt
mkdir -p SUS
cd SUS

dothatshit() {
clear
echo -e "Wähle eine Option: \n - [a]dd Bewertung\n - [n]ew Schüler/in\n - [r]emove Schüler/in\n - [p]rint Bewertungen\n\n - Any other to end script"
echo -e "Eingabe:\t"
read -r option

case $option in
a)
    echo "#add Bewertng"
    echo "Matrikelnummer angeben: "
    read -r ID
  
    if [ $ID -lt 10 ]
    then
        IDNR=000$ID
        echo "Success"
    elif [ $ID -lt 100 ]
    then
        IDNR=00$ID
        echo "Success"
    elif [ $ID -lt 1000 ]
    then
        IDNR=0$ID
        echo "Success"
    elif [ $ID -lt 10000 ]
    then
        IDNR=$ID
        echo "Success"
    else
        echo Incorrect Student number
    fi

    cd $IDNR

    echo "Aufgabenblatt Nr: "
    read -r AFNR

    echo "Punkte eingeben: "
    read -r POINTS

    echo $POINTS >> $AFNR".txt"
    cd ..
    ;;
n)
    echo "# new Schüler/in"
    echo "Matrikelnummer angeben: "
    read -r ID

    if [ $ID -lt 10 ]
    then
        mkdir 000$ID
        echo "Success"
    elif [ $ID -lt 100 ]
    then
        mkdir 00$ID
        echo "Success"
    elif [ $ID -lt 1000 ]
    then
        mkdir 0$ID
        echo "Success"
    elif [ $ID -lt 10000 ]
    then
        mkdir $ID
        echo "Success"
    else
        echo Incorrect Student number
    fi
    ;;
r)
    echo "# remove Schüler/in"
    echo "Matrikelnummer angeben: "
    read -r ID

    if [ $ID -lt 10 ]
    then
        rm -r 000$ID
        echo "Success"
    elif [ $ID -lt 100 ]
    then
        rm -r 00$ID
        echo "Success"
    elif [ $ID -lt 1000 ]
    then
        rm -r 0$ID
        echo "Success"
    elif [ $ID -lt 10000 ]
    then
        rm -r $ID
        echo "Success"
    else
        echo Incorrect Student number
    fi
    ;;
p)
    echo "# print Bewertungen"
    echo "Matrikelnummer angeben: "
    read -r ID

    if [ $ID -lt 10 ]
    then
        cd "000"$ID
        echo "Success"
    elif [ $ID -lt 100 ]
    then
        cd "00"$ID
        echo "Success"
    elif [ $ID -lt 1000 ]
    then
        cd "0"$ID
        echo "Success"
    elif [ $ID -lt 10000 ]
    then
        cd $ID
        echo "Success"
    else
        echo Incorrect Student number
    fi

    echo "Aufgabenblatt Nr: "
    read -r AFNR

    echo "Die Punkte im Aufgabenblatt $AFNR sind: "
    cat $AFNR".txt"
    echo "success"

    echo "Exit by pressing any button followed by enter"

    while true
    do
        read -r endifpress

        case %endifpress in
        *) break
        ;;
        esac
    done  
    ;;
*)
    exit 1
esac

return
}

while true
do
    dothatshit
done

