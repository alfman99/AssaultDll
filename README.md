<div id="top"></div>

[![WTFPL License][license-shield]][license-url]
[![Issues][issues-shield]][issues-url]


<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/alfman99/AssaultDll">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

<h3 align="center">AssaultDll</h3>

  <p align="center">
    Reverse engineering practice, internal AssaultCube game hack
    <br />
    <!-- <a href="https://github.com/alfman99/AssaultDll">View Demo</a>
    · -->
    <a href="https://github.com/alfman99/AssaultDll/issues">Report Bug</a>
    ·
    <a href="https://github.com/alfman99/AssaultDll/issues">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

This is a personal project I made in my free time to learn some topics that have interested me for a long time but never had the required knowledge to start doing. The topics I practiced during this project where:
- *reverse engineering* (Ghidra, Cheat Engine, ReClass, x86dbg)
- *low level programming* (Assembly)
- *raw pointers*
- *dynamic link libraries*
- *function hooking*
- *byte patching*

AssaultDll is far from being perfect or complete, this project is about the process of learning and not about the goal of creating a game cheat. 

> **Use this piece of software at your own responsibility**

<p align="right">(<a href="#top">back to top</a>)</p>



### Built With

* [ImGui](https://github.com/ocornut/imgui)
* [MinHook](https://github.com/TsudaKageyu/minhook)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- GETTING STARTED -->
## Getting Started
### Prerequisites

This is an example of how to list things you need to use the software and how to install them.
* Microsoft Visual Studio Community 2022 (64 bits) - Version 17.2.0 Preview 1.0
* MinHook .lib [MinHook Releases](https://github.com/TsudaKageyu/minhook/releases)
* OpenGL32 .lib
* Any dll injector

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/alfman99/AssaultDll.git
   ```
2. Open the project with Visual Studio
3. Check if libraries are correctly linked to the project
4. Build Release 32 bits .dll
5. Use your dll injector to inject the dll into ac_client.exe

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage **// TODO**

- Open menu with <kbd>insert</kbd>
- Use <kbd>supr</kbd> to fully unload dll

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [ ] Cheats
  - [ ] Aimbot
  - [ ] ESP
  - [x] Infinite ammo
  - [ ] No recoil
  - [ ] No spread

- [ ] Game Hooks
  - [x] OPENGL32 wglSwapBuffers

- [ ] Game Functions
  - [x] Bottom screen messages
  - [x] Chat messages
  - [ ] Colored messages
  - [x] Bottom screen messages

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

All pull requests adding new features to the project will be ignored, issues are welcome and constructive criticism is welcome too

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the WTFPL License. See [`LICENSE.txt`](https://github.com/alfman99/AssaultDll/blob/master/LICENSE.txt) for more information.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

alfman99 - [@Krowzar](https://twitter.com/Krowzar_) - krowzark@gmail.com

Project Link: [https://github.com/alfman99/AssaultDll](https://github.com/alfman99/AssaultDll)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[issues-shield]: https://img.shields.io/github/issues/alfman99/AssaultDll.svg
[issues-url]: https://github.com/alfman99/AssaultDll/issues
[license-shield]: https://img.shields.io/github/license/alfman99/AssaultDll.svg
[license-url]: https://github.com/alfman99/AssaultDll/blob/master/LICENSE.txt
[product-screenshot]: images/screenshot.png
