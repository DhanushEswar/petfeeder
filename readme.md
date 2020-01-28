# Automated Pet Feeder using IoT
## Description
 * The objective of this project is to feed the pet remotely using Internet.
 * Automated pet feeder is one of the new technologies for feeding pet. 
 * It will help pet owner to take care of their pet while they are not at home. 
 * Whether user away from home unexpectedly or simply would like one less chore to worry about, user can feel secure that the beloved pet will be cared for and fed on time, every time. 
 * Pet care should be fun, not burdensome and so the goal of this project is to assist owner with pet care by providing an automatic pet feeder.
 * The pet feeder is connected to a Blynk server on internet, when the user wants to feed the pet can access the link and it will run the code which is already installed on the Node-mcu (pet feeder) and the pet will be fed on time.
 * Other than that, it also have the timer in order to feed the pet periodically.
 * This system assists pet owner to feed the pet remotely.

## Components
### Softwares
1. [Arduino](https://www.arduino.cc/)

2. [Blynk](https://blynk.io/)

### Hardwares
1. Node MCU ESP8266- To establish the connection between the user and the feeder.

![alt text](https://5.imimg.com/data5/DW/KO/MY-43948449/esp8266-serial-wireless-module-nodemcu-v3-lua-wifi-internet-500x500.jpg)

2. Servo Motor- To feed the Pet.

![alt text](https://robu.in/wp-content/uploads/2017/09/IMG_0521.jpg)

3. LCD Display- To show the Last feed time.

![alt text](https://raw.githubusercontent.com/DhanushEswar/pet-feeder/master/images/lcd.jpg)

## Instructions

1. Install the [Blynk](https://blynk.io/) app from the Google Playstore.

2. Login with your Email-id and create New Project.

3. Enter the Authentication code for the Project in the Code. [Refer Code] 

4. Select a Slider and set the pin as V0 and limit to 0 to 10.

![alt text](https://raw.githubusercontent.com/DhanushEswar/pet-feeder/master/images/Slider.jpg)


1. Select a Button and set the output pin as V1 and set limit to 0-1 and set mode as Push. 

![alt text](https://github.com/DhanushEswar/pet-feeder/blob/master/images/Button.jpg)


1. Select a Timer and set the Output pin as V1.

![alt text](https://raw.githubusercontent.com/DhanushEswar/pet-feeder/master/images/Timer.jpg)

> [Note: All these pins are set in code. Don't change those pins]

1. Connect the LCD screen with Node MCU. [Click Here!](https://www.losant.com/blog/how-to-connect-lcd-esp8266-nodemcu)
   
2. Provide the necessary Power supply and Wifi credentials.
> [Note: Refer the code... SSID name and Password: Set as ur wish]

Then,You all set... **Feeder requires uninterrupted Power supply and Wifi Connection.**

You can access the Pet feeder at anywhere using the Blynk app.

You can also set the Timer for the Feeder.

Thank You! :)