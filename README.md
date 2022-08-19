# INFO
- Thesis Project Title: Touch Media
- MASTER IN ADVANCED ARCHITECTURE
- Institute of Advanced Architecture of Catalonia IAAC
- Research Line: Advanced Interaction 2015
- Author: Orion Gorrão Moreira Campos
- GitHub: [https://github.com/orion-campos/Touch_Media](https://github.com/orion-campos/Touch_Media)
- Video 1: [Touch Media - Electronic Development](https://vimeo.com/manage/videos/140458246)
- Video 2: [Touch Media - 3D Printing Development](https://vimeo.com/manage/videos/140481266)

# GENERAL INFORMATION
This project is the result of six months of theoretical research and three months of complete dedication at the research line Advanced Interaction, as part of the Master of Advanced Architecture program at the Institute of Advanced Architecture of Catalonia. Because of this, it is possible to develop it more with proper time and resources.<br>
The author is sharing it under under the Apache License Version 2.0, so like other free software licenses, it allows the user of the software the freedom to use for any purpose, to distribute it, to modify it, and to distribute modified versions of the software. It still requires application of the same license to all unmodified parts and, in every licensed file, any original copyright, patent, trademark, and attribution notices in redistributed code must be preserved and, in every licensed file changed, a notification must be added stating that changes have been made to that file. The README file should be ALWAYS MAINTAINED IN ALL COPIES.<br>
Feel free to contact me if necessary :blush:<br>
[![creative](https://img.shields.io/badge/Creative%20Commons-EF9421?style=for-the-badge&logo=creativecommons&logoColor=white)](https://creativecommons.org/)<br>

# GITHUB FILES
**3D:**<br>
All the 3D printed geometries for the electronic compartments of the first user (the wrist) and the second user (the back pack and the DC motors vibrators). There is the original Rhino file of all, if it is desired to modify anything, and the STL of each part for being 3D printed.<br>
**ARDUINO:**<br>
All the Arduino codes, photos of the circuits, and the Fritzing files of each of the main steps of the development of the project, including the final one. They are organized numerically from 1 to FINAL.<br>
**CONCEPT:**<br>
Illustrations showing the initial concept of the objects that were aimed to create. The illustrations are conceptual, so they form just represent a desirable initial feeling.<br>
**EAGLE_PCBmilling:**<br>
Eagle files of the PCB’s made for the Arduino shields of the Arduino Micro (First user - emitter) and the Arduino UNO (Second user - receiver). Together with all the Eagle files, also the bitmap masks of each board, with the engrave and cut information for the Fabmodules to run.<br>
**PHOTOS:**<br>
Photos of the final prototype of the Glove part and the Back-pack part.<br>
**NOTICE:**<br>
The current Markdown file, that must be included as a readable copy within a README file distributed as part of the derivative works, within the source form or documentation, or within a display generated by the derivative works, as stipulated under the Apache License Version 2.0.<br>

# OBJECTIVE
This research aims to create a new way of communication using and increasing our sense of touch by creating a wearable tool, which has an open use, but in this research will focus to give a critical answer to our major visual based society. The main areas where this new form of communication can be used are:
- Helping vision disabled people, which then could have another option to communicate other than the braille language;
- Connecting users in a long distant relationship, which want to experience another type of connection that the visual devices cannot create; and
- People who want to experience and receive other types of information that couldn‘t been send by visual communication devices.

# PRODUCED OBJECT
A glove wearied by the first user, with 3 flex-sensors and 2 pressure sensors. This glove would be connected to a box attached to the wrist of the first user, containing all the electronic parts necessary to code the information from those sensors and send, via a radio frequency emitter, the information to the second user.<br>
The second user would be wearing a little back-pack with all the electronic parts necessary to code the information received via a radio frequency receiver, and transform it into movement of 6 DC Motors attached to its back, that would turn and rotate a weight on each motor, making the whole enclosure vibrate. The intensity and the length of the vibration of each motor would be determined by the intensity and the length of each sensor being pressed or bended.

# ELECTRONIC AND CODING TOOLS AND METHODS USED
The whole prototype of the electronic and coding part of the project was done with the open-source computer hardware and software Arduino.<br>
Arduino is based on a family of micro-controller board manufactured primarily by SmartProjects in Italy, using various 8-bit Atmel AVR micro-controllers or 32-bit Atmel ARM processors. These systems provide sets of digital and analog I/O pins that can be interfaced to various expansion boards and other circuits. The boards feature serial communications interfaces, including USB on some models, for loading programs from personal computers. For programming the micro-controllers, the Arduino platform provides an integrated development environment (IDE) based on the Processing project, which includes support for C and C++ programming languages.<br>
After the electronic prototype part it was used the software Fritzing, which is an open source software initiative to support designers and artists. It was developed at the University of Applied Sciences of Potsdam. The main advantage of the software is the easy interface to document and record the layout of the created breadboards.<br>

# ELECTRONIC COMPONENTS LIST
### First user - emitter
GLOVE PART
- 1x Arduino Micro;
- 1x RF Link Transmitter - 315MHz (https://www.sparkfun.com/products/10535);
- 3x Long Flex sensor-Length: 112.5mm (https://www.adafruit.com/products/182);
- 2x Round Force-Sensitive Resistor (FSR) - Interlink 402-Length:: 56.77mm (https://www.adafruit.com/products/166);
- 6x 22Kohm Resistor;
- 1x 10Kohm Resistor;
- 1x 220ohm Resistor;
- 1x LED;
- 1x Simple Switch;
- 1x 7.4V 400mAh Lipo battery; and
- 30CMx Hard copper wire to serve as antenna.

### Second user - receiver
BACK PACK PART
- 1x Arduino UNO R2 (UNO R3 should work as well);
- 1x RF Link Receiver - 4800bps (315MHz) (https://www.sparkfun.com/products/10533);
- 6x 1N4004 Diode;
- 6x TIP120 Transistor;
- 6x 10Kohm Resistor;
- 1x Simple Switch;
- 1x 7.4V 400mAh Lipo battery;
- 4x AA battery;
- 2x Double AA battery holder;
- 1x 7.4V 400mAh Lipo battery; and
- 30centimeterx Hard copper wire to serve as antenna.

VIBRATORS PART
- 6x 1.5-4.5V DC Motor (130 size).

### NECESSARY ELECTRONIC SUPPLIES
- 1x Lipo battery charger;
- 1x USB cable - A/MicroB;
- 1x USB Cable - Standard A-B;
- 1x Cooper plate for PCB milling;
- 5meterx Soft core electronic wire (aprox.28AWG); and
- 1x Soldering iron.

### OPTIONAL ELECTRONIC SUPPLIES
- 2meterx 6mm Heat Shrink.

# CIRCUIT BOARD PROJECT AND METHOD OF FABRICATION
After all the electronic components were tested and improved at the Protoboard, it was necessary to make a final shield for the Arduino in order to decrease the size of the circuit, make it user friendly, and more important, make it portable!<br>
It was used the software CAD Soft EAGLE for creating the schematic and the board design. EAGLE (for: Easily Applicable Graphical Layout Editor, German: Einfach anzuwendender grafischer Layout-Editor) by CadSoft Computer is a flexible, expandable and scriptable EDA application with schematic capture editor, PCB layout editor, auto-router and CAM and BOM tools developed by CadSoft Computer GmbH, Germany, since 1988. EAGLE is popular among smaller design houses and in academia for its favorable licensing terms and rich availability of component libraries on the web. Hobbyists are attracted by the availability of freeware licenses.<br>
After the board was designed with the most efficient use of the small space available, the CNC code was generated. Due to try and error process, a more fast speed configuration was used, making only five offset paths of cut in each line. The software used for this was the Fabmodules.<br>
- Video 1: [Touch Media - Electronic Development](https://vimeo.com/manage/videos/140458246)

# HARDWARE METHOD OF FABRICATION
For fabricating the cases of the DC Motors, the Arduino‘s and the produced Shields, it was created a series of compartments using a 3D Printer. This option was chosen due to the geometry that would be created, and the possibility to change and improve the final result easily.<br>
The method of 3D Printing used was an additive one, using PLA filaments. The 3d Printer was the BCN3D+, an open hardware based on the mechanic of the RapRap Prussa, developed by the Universidad Politecnica de Catalunya and assembled by the author.<br>
The file for the machine to print is know as G-Code. This file is a series of numbers that represent the position of the Nozller and the speed that the extruder need to go to the current point from the previous point. The G-Code was generated using the Slic3r software, a free software that generate the G-Code file, by configurations defined by the user, such as height of each layer, temperature, percentage of the fill of each solid, style of the fill, etc. The Slic3r software need as a basic input the base geometry to be 3d printed. This geometry was made using the Rhino software, but could be generated by any major 3D modeler.<br>
- Video 2: [Touch Media - 3D Printing Development](https://vimeo.com/manage/videos/140481266)

# FINAL CONCLUSION
The project opened a broad range of possibilities for improvement.<br>
The choose for a radio frequency board to send the data from one Arduino to the other had some advantages, a couple of backfires on the project happened. One of them was the delay of information that was intentionally set from the time that the data is received from the Arduino to the moment that it is translated to movement to the DC Motors vibrators. This delay needed to be long enough as one second to not over-load the radio frequency receiver. Although one second don‘t appear to be a long period, it jeopardize the sense of instant response of the device.<br>
Another weak point of the choosen radio frequency components was that radio frequency devices are extremely suitable by noise pollution caused by electrostatic that are each day increasing in our society. The scenario get worst since the project is using so many electric motors, which generate a extremely big electromagnetic field. The coil produced by the motors interfere a lot on the radio frequency receiver, being very frequent on this project to receive a “dirty data“. The sender part is not affected.<br>
The main advantages for using the radio frequency boards was the simpler code that they demand in comparison with a internet connection option. Also this option was choose to create an accessible project to be reproduced later in the maker community, since it has been choose a low cost radio frequency transmitters and receivers (each ranging fro 8€ to 12€).<br>
There are more stable already made shields, but their price range between 40€ to 50€, which would become hard to be freely reproduced.<br>
The ideal way of communication would be made the connection through internet, which would achieve the desired effect of creating a functional new way of communication other than the cellphones and other common visual devices that are available today.<br>
Other than this, one of the main points to emphasize is that although this project aims to create a new way of communication, it would never be the same as the existing way of communications, which are based on the written language and speak language, because those forms of languages are based on different senses, as the vision and hearing sense. This project demands to develop a language in order to communicate through the touch sense. There would not be a substitute for a twitter send from a cellphone, or written message telling specific information. Other than this, the information sent could be of a specific feeling such as love, hate, or gratitude.<br>
The point that could be develop from this project, but demand years of research are the areas that should be excited on the body in order to create this set of desired emotions. This would demand a better research on the physical part of the motors and also a biological, medical and psychological team.<br>
