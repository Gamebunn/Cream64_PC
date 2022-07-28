## Super Cream 64 - The Grand Finale 
A fork of [AloXado320/sm64ex-alo](https://github.com/AloXado320/sm64ex-alo), which is a fork of [sm64pc/sm64ex](https://github.com/sm64pc/sm64ex) with additional features. 

Overall additions since the last build:

 * Flying finally added! - Since introduced in Chao Bandstand, you can now fly around in the base game
 * Outfits galore - All the outfits are all available here alongside a few new ones to boot! Cheese also gets in on the fun with matching alts!
 * New levels - Three new areas have been added, replacing Secret Aquarium, Vanish Cap Under the Moat and Wing Mario over the Rainbow. 
 * Redone soundtrack - While mostly the same as before, more songs have been added and redone to help with file size. 
 * And much more!
 
 ## Building SC64
 
 If you haven't built with the normal sm64ex/sm64ex-alo builds, [look at those first for a proper tutorial and getting the proper dependencies for install](https://github.com/sm64pc/sm64ex/wiki/Compiling-on-Windows). Then once you got the hang of it, come back here. 
 
 1) do ```git clone https://github.com/Gamebunn/sm64ex-alo.git``` to somewhere on your PC with MSYS2. Make sure it's a directory with full access. Then `cd sm64ex-alo` to get into the folder itself.
 2) download the extra assets needed for the repo. https://drive.google.com/file/d/1hmJFyawj3jrFyex7rzwfMySawqNkGWnj/view?usp=sharing
 3) find your own US copy of sm64, rename it to baserom.us.z64 and put it in the root of your clone.
 4) dump the contents of the assets folder into the root of where you cloned the git
 5) go ahead and compile with ```make```. If you got a decent CPU, you can increase the compile speed with ```make -j4```.
 
 Helpful build additions:
 
 HIGH_FPS_PC=1 - Game runs at 60 FPS
 
 NODRAWINGDISTANCE=1 - All objects are shown at all times
 
 Example: ```make NODRAWINGDISTANCE=1 -j4```

Currently the only build that works for this is just for PC. The others have not been tested and are not guaranteed to work. If you do wish to try, go right away. If you're also just looking for the N64 build, [it's available right here.](https://romhacking.com/hack/super-cream-64)

## Known Bugs

* Certain stars show up transparent even when not collected (Visual bug): Aware but not sure what's going on. Still functions properly otherwise. 
* Wrong animation plays when collection stars in Eggman levels (Visual bug): Plays the underwater star dance rather than the normal one. Still functions properly otherwise.
* Collision with pillars in Jolly Roger Bay may cause accidental death: Some conflicts with the better poles patch included in the repo. Since the pillars in JRB use cones for climbing, it may sometimes sends the player to NULL causing them to die. Looking into this and hoping to fix at a later date. For now, it's best recommended you just avoid the pillars all together for `BLAST TO THE STONE PILLAR` and just fly to the star from the boat next to it. 
* Going to the Displays option crashes the game (SM64EX conflict): Since sm64ex-alo removed a setting in display (3 point filter for textures), the game doesn't know what to do and crashes. The current fix is to just delete your `sm64config.txt ` file in `Appdata/Roaming/sm64ex` and let it generate a new one. 

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
