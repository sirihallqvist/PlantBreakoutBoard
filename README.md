# PlantBreakoutBoard

## Prerequisites:
- VSCode
- Arduino Nano 33 BLE connected via usb-usbc to the computer

- ADD MORE AS YOU GO HERE

## Install ArduinoCLI
1. Go to [Arduino CLI Download Page](https://arduino.github.io/arduino-cli/1.3/installation/)
2. Download the correct zip-folder
3. Place the folder where you want to have it
4. Add the path to the .exe file in PATH in environmental variables to be able to use it

## Set up Board

Run the following commands to update and download dependencies.

```powershell
arduino-cli core update-index
arduino-cli core install arduino:mbed_nano  # Installs needed board support for Arduino Nano 33 BLE
```

## Find the FQBN (Fully Qualified Board Name)

Run the following command to find the full name of the board:

```powershell
arduino-cli board listall
```

## Find the Port that the Arduino Use

Run the following command to find which port the Arduino board is using:

```powershell
arduino-cli board list
```

## Compile the Code

To compile the code, run the following command:

```powershell
arduino-cli compile --fqbn arduino:mbed_nano:nano33ble mittBLEprojekt
```

## Upload the Code to the Arduino

To upload the code to the unit, run the following command:

```powershell
arduino-cli upload -p <PORT> --fqbn <FQBN> pathToYourBleProjectFile.ino
```

## Automatic Build and Upload in VSCode

Create the file .vscode/tasks.json in your repository, and add following content in that file:

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Build Arduino Sketch",
      "type": "powershell",
      "command": "arduino-cli compile --fqbn arduino:mbed_nano:nano33ble .",
      "group": "build"
    },
    {
      "label": "Upload Arduino Sketch",
      "type": "powershell",
      "command": "arduino-cli upload -p PORT --fqbn FQBN .",
      "group": "build"
    }
  ]
}
```

Now, to build and/or upload, press `Ctrl+Shift+B` and choose the task you want to do.

## Install BLE Library

To install the needed BLE Library, run the following command:

```powershell
arduino-cli lib install ArduinoBLE
```
