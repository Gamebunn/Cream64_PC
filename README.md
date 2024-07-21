
# Super Cream 64 - The Grand Finale

A SM64 romhack starring Cream the Rabbit build on a fork of [AloXado320/sm64ex-alo](https://github.com/AloXado320/sm64ex-alo), which is a fork of [sm64pc/sm64ex](https://github.com/sm64pc/sm64ex) with additional features. 

Overall additions:

* The ability to fly! Originally made for Cream 64, introduced in Chao Bandstand and now it's finally back in its intended hack. Works like Sonic Heroes: get about 3-4 seconds of total flight time. When you're not moving, you lose no stamina.
* Be whoever you wanna be! A grand total of over 100 different outfits are available for you to choose from the very start. (PC Version only): Each alt has its own matching Cheese alt and a handful have a custom Vanilla alt. [A full list can be seen here.](https://i.imgur.com/MyrBJbA.jpeg)
* Brand new levels replacing five existing levels: Secret Aquarium, Tower of the Wing Cap, Vanish Cap under the Moat, Cavern of the Metal Cap and Wing Mario over the Rainbow. Each still have a single secret star and their respective switches are still there too. The Princess' Secret Slide remains the same but now has a visual makeover. 
* Models and textures have been updated to fit the theme, ranging from enemies, the various toads in the castle, stars, etc. The few untouched are left that way on purpose.
* Music has been updated. All but a few have been replaced with brand new tracks. (PC Version only) All but a few now come with a custom collect star jingle. 
* General tweaks to the speed for the Koopa the Quick replacement. Rematch is now more doable than how it was in v4.x 
* Amy, Tails, Blaze and Marine have their own little side stories. Completely optional and located through the game in the various levels. Keep an eye out!
* And so much more. 

## Building SC64 - Windows version
 
 Make sure to grab the latest version of MSYS2 from their website. Seems that initial bug has been fixed now and the latest version should be able to compile hacks now.
 
 If you haven't built with the normal sm64ex/sm64ex-alo builds, [look at those first for a proper tutorial and getting the proper dependencies for install](https://github.com/sm64pc/sm64ex/wiki/Compiling-on-Windows). Then once you got the hang of it, come back here. 
 
 1) Do `git clone https://github.com/Gamebunn/Cream64_PC.git` to somewhere on your PC with MSYS2. Make sure it's a directory with full access. Then `cd Cream64_PC` to get into the folder itself.
 2) [Download the extra assets needed for the repo](https://drive.google.com/file/d/1rHteLAEMClXGX-xrQVBmFhoYg3AhCdo5/view?usp=drive_link)
 3) Find your own US copy of sm64, rename it to baserom.us.z64 and put it in the root of your clone.
 4) Dump the contents of the assets folder into the root of where you cloned the git
 5) Go ahead and compile with `make`. If you got a decent CPU, you can increase the compile speed with `make -j4`.

 ## Building SC64 - Switch version
 
 To build for Switch, [follow the instructions here](https://github.com/fgsfdsfgs/sm64ex/wiki/Compiling-for-Nintendo-Switch). (TARGET_SWITCH=1)
 
 ## Helpful optional build additions:
 
 `HIGH_FPS_PC=1` - Game runs at 60 FPS
 
 `NODRAWINGDISTANCE=1` - All objects are shown at all times
 
 Example: ```make NODRAWINGDISTANCE=1 -j4```
 
 The above can be used for the Switch version as well. 

If you're just looking for the N64 build, [it's available right here.](https://romhacking.com/hack/super-cream-64)

## Notable Bugs/Crashes

Think we got them all. Please let me know if anything weird does pop up though!

## FAQ

#### I'm running into `Segmentation Fault` errors when compiling sounds. What can I do?

Unfortunately, I don't have a real answer as to why it does that cause it varies per person. Sometimes it'll just work fine and for others it'll error out at a specific sound. Some solution is to just compile with the same settings again and it'll somehow work. [Though you can try and put this in the root, which has all the compiled custom sounds.](https://drive.google.com/file/d/19OHNwng-GTwDgevKncO0I_qWLrX3XYo8/view?usp=share_link) That does circumvent the problem most of the time but it's not guaranteed. 

#### I'm getting the error `Failed to extract assets from US ROM`, what is going on?

You may be missing some dependencies for which sm64ex/ex-alo needs to compile. [As mentioned above, try to do a normal compile of ex/ex-alo to make sure that works before trying Cream 64 if you keep running into that error.](https://github.com/sm64pc/sm64ex/wiki/Compiling-on-Windows) 

