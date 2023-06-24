# Particle Simulation with Black Hole

This project is a particle simulation that depicts the interaction of particles with a black hole. The simulation is implemented using JavaScript and the p5.js library.

## Setup

The following constants are defined:
- `c`: Represents the speed of light.
- `G`: Represents the gravitational constant.
- `dt`: Represents the time step for the simulation.

The following variables are initialized:
- `m87`: Represents the black hole object.
- `particles`: An array to store the photon particles.
- `start` and `end`: Variables used to determine the starting and ending positions of the particles.

The `setup()` function performs the following tasks:
- Sets up the canvas using the `createCanvas()` function.
- Creates a `Blackhole` object named `m87` at the center of the canvas.
- Initializes the `start` and `end` variables based on the height of the canvas.
- Generates a series of `Photon` objects and adds them to the `particles` array.
- Loads an image as the background.

## Simulation

The `draw()` function is called continuously and performs the following tasks:
- Sets the background image.
- Draws two lines to represent the starting and ending positions of the particles.
- Updates and shows each particle in the `particles` array.
- Shows the black hole object.

Please note that the code provided is incomplete, as it references classes (`Blackhole` and `Photon`) that are not defined in the snippet. Additional code is required to fully understand the functionality of these classes.

To run the simulation, you would need to set up an environment with the necessary dependencies and complete the missing parts of the code.

