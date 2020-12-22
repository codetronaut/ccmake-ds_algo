## ccmake-ds_algo

This project aims to ease the work of making test case for the alraedy existing algorithms and methods. I faced a lot of issues in start learning a project and permutate it's test cases for my own implementation of a already existing algorithms. This project is a dynamic build which accept a variety of algo and give it's combined output. Currenty it's in development phase and I am adding new things (not on a regular basis but) according to available time.

### Prerequisites
The basic requirements are:

* CMake v3.5+

* A C/C++ compiler (defaults to gcc)

* make


## Getting Started

#### Git Clone

First we need to check out the git repo:

```bash
❯ mkdir ~/work
❯ cd ~/work
❯ git clone https://github.com/codetronaut/ccmake-ds_algo.git
❯ cd ccmake-ds_algo
❯ mkdir build 
❯ cd build
❯ cmake ..
❯ make
```

## Installation 

#### on Ubuntu

The easiest way to install the above on Ubuntu is as follows:

```sh
$ sudo apt-get install build-essential
$ sudo apt-get install cmake
```
#### On Arch Linux(or, Arch based)

```sh
$ sudo pacman -S base-devel
$ sudo pacman -Syu cmake
```

## Built With

* [CMake](https://cmake.org/cmake/help/v3.18/) - The build framework used

## Contributing

Feel free to contribute :)

<!---
## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 
-->

<!---
## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
-->
<!---
## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc
-->

#### Future Implementations
> * [ ] Extend generic functions and enable templating build.
> * [ ] Add support for vectors in C and rewrite the fork of vector for it.
> * [ ] Add section for more algorithms used in the problem-solving.  
> * [ ] Add more abstract data types.

