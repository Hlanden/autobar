# Autobar Firmware

This is the firmware part of the "Autobar" project. The HW used for this project
is a ESP32-S3 devboard.

## Getting Started

### Requirements

Start with installing the ESP toolchain for your system.
[Instructions are found here](https://docs.espressif.com/projects/esp-idf/en/stable/esp32s3/get-started/linux-macos-setup.html).

Once installed pull the submodules in the project (if not already done):

```
git submodule update --init --recursive
```

Setup the esp-idf tools once the submodule for esp-idf is cloned:

```
cd dependencies/esp-idf/
./install.sh esp32
```

To be able to flash from your computer, you need to add your user to the
`dialout` group:

```
sudo usermod -aG dialout $USER
```

Log out and in (or reboot) and you should be ready :)

### Building

> For testing your toolchain there are many projects to run under
> `dependencies/esp-idf/examples/`

Before using the esp-idf toolchain installed above, you need to setup the
environment.

```
source dependencies/esp-idf/export.sh
```

Assuming you have set up a project for the FW, you will have to set the target
chip. This is only required **once per project**:

```
cd <your-project>
idf.py set-target esp32
```

Build using the following command:

```
idf.py build
```

### Flashing

Connect the devboard to your computer, and find the port it is connected to:

```
ls /dev/ttyUSB*
ls /dev/ttyACM*
```

Then you flash the project using the following command:

```
idf.py -p <PORT> flash
```

## Documentation

- [ESP32-S3 Programming Guide](https://docs.espressif.com/projects/esp-idf/en/stable/esp32s3/get-started/index.html)
