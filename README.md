# ESP32 OTA Update Project

This project is designed for the ESP32 microcontroller and demonstrates how to perform Over-The-Air (OTA) updates. The project connects to a Wi-Fi network and periodically checks for firmware updates from a specified server.

This is made for the **ESP NodeMCU-32s** Microcontroller
    But can work for any ESP/Arduino Module
    ( Change platformio.ini to build for your module )

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/nisooom/ESP32-OTA.git
    cd ESP32-OTA
    ```

2. Install PlatformIO:
    ```bash
    pip install platformio
    ```

3. Build Project:
    ```bash
    platformio run
    ```

4. Upload to ESP:
    ```bash
    platformio run --target upload --environment nodemcu-32s
    ```
    
## Usage

1. Clone Project.
2. Build and upload the firmware to your ESP32 board:
    ```bash
    platformio run --target upload --environment "Your Module"
    ```

3. Monitor the serial output:
    ```bash
    platformio device monitor
    ```

## Contributing

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to the branch (`git push origin feature-branch`).
6. Create a new Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.