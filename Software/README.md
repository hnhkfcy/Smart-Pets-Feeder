# Software
## Structure

```bash
.
|
├── Software
│   ├── build
│   ├── CMakeLists.txt
│   ├── lib
│   ├── src
└── README.md
```

```lib``` contains the c++ header files which are added during compilation.

```src``` contains the ```cpp``` source code that compiles to a object that contains the feeding logic and interacts with the two load cell (HX711),camera and motor. 

```build``` is an empty folder for the files produced after compilation

### Prerequisites

This is an example of how to list things you need to use the software and how to install them.
* wiringPi
  ```sh
  sudo apt-get update && upgrade
  ```
  ```
  sudo apt-get install wiringPi
  ```
* Cmake
  ```sh
  sudo apt-get install cmake 
  ```
 
* OpenCV

1.update raspbian and Increase the swap-size

```
   sudo apt-get update && sudo apt-get upgrade && sudo rpi-update
   sudo nano /etc/dphys-swapfile
   #CONF_SWAPSIZE=100
   CONF_SWAPSIZE=2048

```
 2.Install tools and libraries for openCV

```
   sudo apt-get install build-essential cmake pkg-config
   sudo apt-get install libjpeg-dev libtiff5-dev libjasper-dev libpng12-dev
   sudo apt-get install libavcodec-dev libavformat-dev libswscale-dev libv4l-dev
   sudo apt-get install libxvidcore-dev libx264-dev
   sudo apt-get install libgtk2.0-dev libgtk-3-dev
   sudo apt-get install libatlas-base-dev gfortran

```

3.Get source code

```
   wget -O opencv.zip https://github.com/opencv/opencv/archive/4.1.0.zip
   wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/4.1.0.zip
   unzip opencv.zip
   unzip opencv_contrib.zip

```

4.Compile openCV

```
   cd ~/opencv-4.1.0/
   mkdir build
   cd build
   cmake -D CMAKE_BUILD_TYPE=RELEASE \
    -D CMAKE_INSTALL_PREFIX=/usr/local \
    -D INSTALL_PYTHON_EXAMPLES=ON \
    -D OPENCV_EXTRA_MODULES_PATH=~/opencv_contrib-4.1.0/modules \
    -D BUILD_EXAMPLES=ON ..

```

5.Build and Install openCV

```
   make -j4
   sudo make install && sudo ldconfig
   ```
 6.Check out the OpenCv in C++ envirment
   ```
 pkg-config --modversion opencv4 
 ```

<!-- USAGE EXAMPLES -->
## Usage

This project is built using Cmake and Makefiles in order to allow users to easily run our code and tets it.  
Please follow these necessary steps:  

1.  Clone the project with:  
    `git clone https://github.com/hnhkfcy/Smart-Pets-Feeder.git`  
    
2.  Change directorites and relocate in Smart Pet Feeder project,'build' is an empty folder for the files produced after compilation.:  
    `cd Software/build`  
    
3.  Link the necessary executables and libraries using CMake:  
    `cmake ..`  
    
4.  Build the project using make:  
    `make`  
    
5.  Run the test file labeled Cycle_Buddy:  
    `./src/feed`

