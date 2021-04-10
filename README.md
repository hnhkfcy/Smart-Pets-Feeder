
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]



<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/hnhkfcy/Smart-Pets-Feeder">
    <img src="Images/GIF_Animation.gif" alt="SmartPetFeederGif" width="300" height="300">
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

 ![Schematic](https://github.com/hnhkfcy/Smart-Pets-Feeder/blob/master/Schematics/Schematic_diagram.png)


### Hardware

This section list  major hardware that team 15 built this project using. 
* [RaspiberryPi-4b](https://getbootstrap.com)
* [StepMotor](https://jquery.com)
* [USB-Camera](https://laravel.com)
*  [HX711](https://laravel.com)
*  [3D-printing](https://laravel.com)
* [Plank](https://laravel.com)
 * [pcf8591 sensor](https://laravel.com)
 
 ### Mechanical structure
 ![Camera holder](![Schematic](https://github.com/hnhkfcy/Smart-Pets-Feeder/blob/master/Schematics/Schematic_diagram.png))

<!-- GETTING STARTED -->
## Getting Started

This is the Embedded system project of  team 15 in the university of Glasgow.

### Prerequisites

This is an example of how to list things you need to use the software and how to install them.
* wiringPi
  ```sh
  sudo apt-get install wiringPi
  ```
  ```
  sudo apt-get update && upgrade
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

[Twitter](https://twitter.com/your_username) 

[Youtube](https://twitter.com/your_username) 

[Instagram](https://twitter.com/your_username) 

[Facebook](https://twitter.com/your_username) 

Project Link: [https://github.com/hnhkfcy/Smart-Pets-Feeder](https://github.com/hnhkfcy/Smart-Pets-Feeder)



<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements
* [CMake](https://www.webpagefx.com/tools/emoji-cheat-sheet)
* [C++](https://www.youtube.com/watch?v=pp9xVskBMrg&list=PLE74iD3mMaPl4OKpqWkMmk0NbqO2s7KEP)
* [FSR](https://choosealicense.com)
* [Hardware schematic](https://pages.github.com)
* [HX711](https://daneden.github.io/animate.css)
* [Step Motor](https://connoratherton.com/loaders)
* [Thread](https://kenwheeler.github.io/slick)
* [SPI commucation](https://github.com/cferdinandi/smooth-scroll)
* [OpenCv installation](http://leafo.net/sticky-kit)
* [NGINX](http://jvectormap.com)
* [STL](https://fontawesome.com)





<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/hnhkfcy/Smart-Pets-Feeder/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/zj736893657/Smart-Pets-Feeder/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/hnhkfcy/Smart-Pets-Feeder/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[product-screenshot]: images/screenshot.png
