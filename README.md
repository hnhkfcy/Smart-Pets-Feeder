
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]



<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/hnhkfcy/Smart-Pets-Feeder">
    <img src="Images/GIF_Animation.gif" alt="SmartPetFeederGif" width="400" height="300">
  </a>

  <h3 align="center">Smart Pet Feeder</h3>

  <p align="center">
    An awesome Smart pet Feeder to jumpstart your projects!
    <br />


<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Contents</summary>
  <ol>
    <li>
      <a href="#Smart-Pet-Feeder">Smart Pet Feeder</a>
      <ul>
        <li><a href="#Hardware">Hardware</a></li>
        <li><a href="#Mechanical-structure">Mechanical structure</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact-us">Contact us</a></li>
    <li><a href="#acknowledgements">Acknowledgements</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## Smart Pet Feeder

 ![Schematic](https://github.com/hnhkfcy/Smart-Pets-Feeder/blob/master/Schematics/Hardware_Schematic.png)


### Hardware

This section list  major hardware that team 15 built this project using. 
* [RaspiberryPi-4b](https://uk.rs-online.com/web/p/raspberry-pi/1822096/?gclid=Cj0KCQjwmcWDBhCOARIsALgJ2Qd6O_jaYRwutcGjO6Z8gKUe2f2h8pY3Nm23oHlLHghdNgyNjcCPtfkaAu29EALw_wcB&gclsrc=aw.ds)
* [StepMotor](https://www.mouser.co.uk/ProductDetail/Digilent/290-028?qs=2BBkhzTa%2F3DNnJbFjunbOw%3D%3D&mgh=1&vip=1&gclid=Cj0KCQjwmcWDBhCOARIsALgJ2QfzMtD2H3DoQ3uohFrVHCupWfeFwlW2XJY-3zUgsTIHqVt9wqRYIVAaAkdoEALw_wcB)
* [USB-Camera](https://thepihut.com/products/8mp-1080p-usb-camera-module-1-4-cmos-imx219-mini-uvc?variant=32111049310270&currency=GBP&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&gclid=Cj0KCQjwmcWDBhCOARIsALgJ2QczZxWO2GCtOTogRhd8Ozcjkz3XR-NHFeFaJuQIphNty8UBRW5rmcEaAtmgEALw_wcB)
*  [HX711](https://www.amazon.co.uk/Weighting-Half-bridge-Amplifier-Bathroom-Arduino/dp/B07FMN1DBN/ref=sr_1_1_sspa?adgrpid=52942215837&dchild=1&gclid=Cj0KCQjwmcWDBhCOARIsALgJ2QdWy6OXk4GOaqIlU1PSPwmuxa_hkNtX2Z8Hue4HIUpGyRnexFG7HVsaAi6dEALw_wcB&hvadid=259046162843&hvdev=c&hvlocphy=9046551&hvnetw=g&hvqmt=e&hvrand=16638470403446013995&hvtargid=kwd-327727690284&hydadcr=22925_1807003&keywords=hx711&qid=1618090787&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyT1U3VjUwOVUxSlRJJmVuY3J5cHRlZElkPUEwNDk3MjY2MlpNRzRMVFRIVE9XMiZlbmNyeXB0ZWRBZElkPUEwNzgyMjM1MTNDMVNDV0ZBOTE4TiZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=)
*  [3D-printing](https://www.shapeways.com/business/3d-printing-services/?adgroup_id=120027049116&campaign_id=12607958069&gclid=Cj0KCQjwmcWDBhCOARIsALgJ2QcwmNZffgddThWcYH-9hcUdpckWtVPzAW5nqObyYgK9VBfsR2Dp1cQaAvbLEALw_wcB&target_id=kwd-685410368&utm_campaign=UK_3D-printing_Desktop_Exact&utm_content=509104377827&utm_medium=3D-printing&utm_source=adwords&utm_term=3d%20printing%20service)
* [Plank](https://www.amazon.co.uk/Clas-Ohlson-Whitewood-Warp-Resistant-Edge-Laminated/dp/B08B1R1Y3P/ref=asc_df_B08B1R1Y3P/?tag=googshopuk-21&linkCode=df0&hvadid=447163472133&hvpos=&hvnetw=g&hvrand=13141452539728557175&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9046551&hvtargid=pla-925355368073&psc=1&tag=&ref=&adgrpid=105563454404&hvpone=&hvptwo=&hvadid=447163472133&hvpos=&hvnetw=g&hvrand=13141452539728557175&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9046551&hvtargid=pla-925355368073)
 * [pcf8591 sensor](https://www.amazon.co.uk/DollaTek-Converter-PCF8591-Arduino-Raspberry/dp/B07DJ4NVRK/ref=sr_1_1?adgrpid=58791213812&dchild=1&gclid=Cj0KCQjwmcWDBhCOARIsALgJ2QdiLRovIqvJ_iHGzLyyhBKP2hwZqBEaIlkbFK25FobLYKo6sSYwrYcaAgBMEALw_wcB&hvadid=259047910301&hvdev=c&hvlocphy=9046551&hvnetw=g&hvqmt=e&hvrand=10882352435376445668&hvtargid=kwd-295662067656&hydadcr=22927_1807007&keywords=pcf8591&qid=1618090900&s=electronics&sr=1-1)
 
 ### Mechanical structure
 ![Camera holder](![Schematic](https://github.com/hnhkfcy/Smart-Pets-Feeder/blob/master/Mechanical%20Structure/rpi_camera_mount.stl))

<!-- GETTING STARTED -->
## Getting Started

This is the Embedded system project of  team 15 in the university of Glasgow. we need to more details

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
 
* OpenCv
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
    
2.  Change directorites and relocate in Smart Pet Feeder project:  
    `cd Software`  
    
3.  Link the necessary executables and libraries using CMake:  
    `cmake .`  
    
4.  Build the project using make:  
    `make`  
    
5.  Run the test file labeled Cycle_Buddy:  
    `./Feed`

<!-- ROADMAP -->
## Roadmap

Thread of the project: one for USB-camera, the rest for Step motor and HX711 

<!-- CONTRIBUTING -->
## Contributing

This is an open source project, therefore, just fork it and build up the project according to the READM.md in every document.



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact us

JianZhao - 2542679Z@student.gla.ac.uk

Jiaxun Hong -2538979h@student.gla.ac.uk

Chaoyan Fan -2595750F@student.gla.ac.uk

* [Twitter](https://twitter.com/jianzha47918304/status/1381001029836226560?s=21) 

* [Youtube](https://www.youtube.com/watch?v=cMlTJh96JMU) 

* [Instagram](https://www.instagram.com/glasgowteam15/) 


Project Link: [https://github.com/hnhkfcy/Smart-Pets-Feeder](https://github.com/hnhkfcy/Smart-Pets-Feeder)



<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements
* [CMake](https://cmake.org/cmake/help/latest/guide/tutorial/index.html#a-basic-starting-point-step-1)
* [C++](https://www.youtube.com/watch?v=pp9xVskBMrg&list=PLE74iD3mMaPl4OKpqWkMmk0NbqO2s7KEP)
* [How to use git](https://blog.csdn.net/zamamiro/article/details/70172900)
* [ReadMe template](https://github.com/othneildrew/Best-README-Template)
* [ADC](https://github.com/berndporr/wiringPi/tree/main/wiringPi)
* [RaspiberryPi_Pin](https://pinout.xyz/pinout/i2c#)
* [Thread](https://github.com/berndporr/cppThread/blob/master/CppThread.h)
* [OpenCV Installation1](https://blog.csdn.net/weixin_43287964/article/details/101696036?depth_1-utm_source=distribute.pc_relevant.none-task&utm_source=distribute.pc_relevant.none-task)
* [OpenCV installation2](https://qengineering.eu/install-opencv-4.4-on-raspberry-pi-4.html)
* [OpenCV example](https://blog.csdn.net/shuoyueqishilove/article/details/80686143)
* [NGINX](https://www.raspberrypi.org/documentation/remote-access/web-server/nginx.md)
* [Raspberry Pi no wifi](https://blog.csdn.net/seanblog/article/details/110204579?utm_medium=distribute.pc_relevant.none-task-blog-baidujs_title-2&spm=1001.2101.3001.4242)
* [Raspberry Pi Tutorial](https://wiki.dfrobot.com.cn/%E6%A0%91%E8%8E%93%E6%B4%BE4B_DFR0619_DFR0618_DFR0697_WIKI)





<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/badge/CONTRIBUTORS-3-green
[contributors-url]: https://github.com/hnhkfcy/Smart-Pets-Feeder/graphs/contributors
[forks-shield]: https://img.shields.io/badge/FORKS-3-blue
[forks-url]: https://github.com/zj736893657/Smart-Pets-Feeder/network/members
[stars-shield]: https://img.shields.io/badge/STARS-7-red
[stars-url]: https://github.com/hnhkfcy/Smart-Pets-Feeder/stargazers
[issues-shield]: https://img.shields.io/badge/ISSUES-2-yellow
[issues-url]: https://github.com/hnhkfcy/Smart-Pets-Feeder/issues
[license-shield]: https://img.shields.io/badge/LICENSE-MIT-green
[license-url]: https://github.com/hnhkfcy/Smart-Pets-Feeder/blob/master/LICENSE
[product-screenshot]: images/screenshot.png
