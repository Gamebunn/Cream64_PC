## Super Cream 64 - The Grand Finale 
A fork of [AloXado320/sm64ex-alo](https://github.com/AloXado320/sm64ex-alo), which is a fork of [sm64pc/sm64ex](https://github.com/sm64pc/sm64ex) with additional features. 

Overall additions since the last build:

 * Flying finally added! - Since introduced in Chao Bandstand, you can now fly around in the base game
 * Outfits galore - All the outfits are all available here alongside a few new ones to boot! Cheese also gets in on the fun with matching alts!
 * New levels - Three new areas have been added, replacing Secret Aquarium, Vanish Cap Under the Moat and Wing Mario over the Rainbow. 
 * Redone soundtrack - While mostly the same as before, more songs have been added and redone to help with file size. 
 * And much more!
 
 Repo custom assets: [https://drive.google.com/file/d/1Qze3htl10to8ZySFfbPlARpvc2otPvF1/view?usp=sharing](https://drive.google.com/file/d/1C2XFHdlYvfYRcXaUSNOFMhbS7Mhk8AgS/view?usp=sharing)
 
 Helpful build additions:
 
 HIGH_FPS_PC=1 - Game runs at 60 FPS
 
 NODRAWINGDISTANCE=1 - All objects are shown at all times

## Building
 ### Clone the repository:

 ```sh
 git clone https://github.com/AloXado320/sm64ex-alo
 cd sm64ex-alo
 ```
 
 **Note:** On Unix systems you may need to do this before doing any changes:
 
 ```sh
 git config core.fileMode false
 chmod -R 777 .
 ```
 
 ### Copy baserom(s) for asset extraction:
 
 For each version (jp/us/eu/sh) for which you want to build an executable, put an existing ROM at `./baserom.<VERSION>.z64` for asset extraction.
 
 By default it builds the US version.

<details>
  <summary>To build for N64, click here.</summary>
 
  **Note:** Only tested in WSL, works on (Debian / Ubuntu) as well, other distros untested.

  #### Install build dependencies:
  ```sh
  sudo apt install -y binutils-mips-linux-gnu build-essential git libcapstone-dev pkgconf python3 gcc-mips-linux-gnu
  ```

  #### Build:
  ```sh
  # if you have more cores available, you can increase the -j parameter
  make -j4 TARGET_N64=1 
  ```
 
  #### ROM location:
  ```sh
  build/us/sm64.us.f3dzex.z64
  ```

</details>

<details>
  <summary>To build for Android, click here.</summary>
 
  **Note:** Only Termux build is supported.
 
  #### Install Termux
 
  Install the app from F-Droid [here](https://f-droid.org/en/packages/com.termux/)
 
  Make sure you use this version, as the Google Play version is outdated.

  #### Install build dependencies
  ```sh
  pkg install git wget make python getconf zip apksigner clang binutils
  ```

  #### Copy in your baserom:

  Do this using your default file manager (on AOSP, you can slide on the left and there will be a "Termux" option there), or using Termux.
  ```sh
  termux-setup-storage
  cp /sdcard/path/to/your/baserom.z64 ./baserom.us.z64
  ```

  #### Install external dependencies
  ```sh
  cd platform/android/ && ./getkhrplatform.sh && ./getSDL.sh && cd ../..
  ```
 
  #### Build
  ```sh
  # if you have more cores available, you can increase the -j parameter
  # On Termux, TARGET_ANDROID=1 is defined automatically in Makefile
  make -j4
  ```

 #### Install apk:
  ```sh
  xdg-open build/us_android/sm64.us.f3dex2e.apk
  ```
 
</details>

 * To build for sm64ex platforms, [click here](https://github.com/sm64pc/sm64ex/blob/nightly/README.md).
 * To build for Wii U, [click here](https://github.com/aboood40091/sm64-port/blob/master/README.md). (TARGET_WII_U=1)
 * To build for 3DS, [click here](https://github.com/sm64-port/sm64_3ds/blob/master/README.md). (TARGET_N3DS=1)
 * To build for Switch, [click here](https://github.com/fgsfdsfgs/sm64ex/blob/switch/README.md). (TARGET_SWITCH=1)
