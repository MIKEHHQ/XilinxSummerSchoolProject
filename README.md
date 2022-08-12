# XilinxSummerSchoolProject
Project developed in 2022 Xilinx Summer School

# Project CORDIC Cart to POL
## What Is CORDIC
CORDIC (Coordinate Rotation Digital Computer) is an efficient approach to calculate trigonometric, hyperbolic, and other mathematical functions. It is a digit-by-digit algorithm that creates one output digit every iteration. This allows us to adapt the precision of the algorithm to the application needs; additional repetitions yield a more exact output result. Accuracy is another popular design evaluation metric alongside performance and resource utilization. CORDIC provides straightforward calculations utilizing simply addition, subtraction, bit shifting, and table lookups, all of which are straightforward to implement in hardware, both generally and in FPGAs.
## Design Flow
The following figure is the Design Sources of Vivado project:
![image1](https://github.com/MIKEHHQ/XilinxSummerSchoolProject/tree/main/Lab_DSP/Cordic/src/design_sources.png)

The following figure shows the Block Design of the whole systerm of Cordic to Pole:
![image2](http://github.com/MIKEHHQ/XilinxSummerSchoolProject/blob/main/Lab_DSP/Cordic/src/block_design.png)

The diagram below looks at the implementation of our algorithm on the chip from the perspective of assigning chip pins.
![image3](https://github.com/MIKEHHQ/XilinxSummerSchoolProject/tree/main/Lab_DSP/Cordic/src/package.png)
## Jupyter Notebook
This picture shows the Interactive Playground of our project for everyone to dynamically input the coordinates of the rectangular coordinate system, and the accelerator will obtain the read data for calculation, so as to obtain the coordinate representation in the polar coordinate system.
![image](https://github.com/MIKEHHQ/XilinxSummerSchoolProject/blob/main/Lab_DSP/Cordic/jupyter/ineract_playground.png)
# Playground
## How To Play
![image](https://github.com/MIKEHHQ/XilinxSummerSchoolProject/blob/main/Lab_DSP/Cordic/jupyter/playground_video.gif)
