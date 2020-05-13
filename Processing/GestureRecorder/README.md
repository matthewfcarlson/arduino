To run the GestureRecorder, you must:
1. Download and install [Processing 3](https://processing.org/download/)
2. Run the [LIS3DHGestureRecorder.ino](https://github.com/makeabilitylab/arduino/tree/master/Processing/GestureRecorder/Arduino/LIS3DHGestureRecorder) code on your Arduino
3. Run [GestureRecorder.pde](https://github.com/makeabilitylab/arduino/blob/master/Processing/GestureRecorder/GestureRecorder.pde). Make sure to update the `ARDUINO_SERIAL_PORT_INDEX` and `SERIAL_BAUD_RATE` to match your Arduino.

Your recorded gestures will be stored in a folder called `Gestures`, which will be a sub-directory in the root `.pde`.