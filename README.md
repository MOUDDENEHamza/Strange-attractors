
#						PRESENTATION

This project is about modelling the trajectory of a point by implementing the whole algorithm in C language and 
and displaying the curve by Gnuplot. To succeed in this project, I used different dynamic systems by 
introducing the differential equations.

#						COMPILE & RUN

First you should install gnuplot to draw the curve of ten different dynamic systems (Lorenz , Euler, Aizawa,
Anishchenko, Hoover, Rossler, Coullet, Hadley, Rayleigh, Bouali).

-To install gnuplot on LINUX.You have to open the terminal, and type:
	
					sudo apt install gnuplot gnuplot-x11

-If you don't have make package, you can install on LUNIX it by typing:
	
					sudo apt install build-essential

-After installing this package, you can launch the program by typing:

					cd src/main_src/
					make all -s

-To clean the preject, you have to type:
			
					make clean

#						LICENSE

-This program is “free software” if the program’s users have the four essential freedoms:

.The freedom to run the program as you wish, for any purpose. 
.The freedom to study how the program works, and change it so it does your computing as you wish.
 Access to the source code is a precondition for this. 
.The freedom to redistribute copies so you can help your neighbor.
.The freedom to distribute copies of your modified versions to others.By doing this you can give the whole 
community a chance to benefit from your changes. Access to the source code is a precondition for this.
