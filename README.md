# arduino-rgbfade
Smooth color transition for RGB LEDs connected to an Arduino

## Note
This is **NOT** a library. It's just a piece of code I've written to make things work. At the time of writing this readme, I am not very sure of how to convert this to a library. It would be great if somebody could contribute to this repository and help convert it to a library.

## Usage
- Set the value of ```fadeAmount``` as you like. A higher value will result in a faster fade.
- Set the PWM pins for Red, Green and Blue. Connect the common cathode of the LED to Arduino's Ground pin.
- Inside the ```void main()``` block, add the following functions accordingly:
  - Start with the initial color. Use the rgb() function to set the initial color. Give it integer values for red, green and blue respectively.
  - Add a delay before the fade if you like.
  - Use the ```fade()``` function and supply it the initial triplet of RGB values and then the final triplet of RGB values. Use the ```rgb()``` function again with the final values to ensure that we stop at the right colors.
  - Read the example code inside ```void main()``` for more information.

Function definition for ```fade()```:

```int fade(int fromR, int fromG, int fromB, int toR, int toG, int toB); ```
