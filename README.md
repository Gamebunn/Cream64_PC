
# Super Cream 64 - The Grand Finale

A SM64 romhack starring Cream the Rabbit build on a fork of [AloXado320/sm64ex-alo](https://github.com/AloXado320/sm64ex-alo), which is a fork of [sm64pc/sm64ex](https://github.com/sm64pc/sm64ex) with additional features. 

Overall additions:

* The ability to fly! Originally made for Cream 64, introduced in Chao Bandstand and now it's finally back in its intended hack. Works like Sonic Heroes: get about 3-4 seconds of total flight time. When you're not moving, you lose no stamina.
* Be whoever you wanna be! A grand total of 64 different outfits are available for you to choose from the very start. (PC Version only): Each alt has its own matching Cheese alt and a handful have a custom Vanilla alt. [A full list can be seen here.](https://i.imgur.com/13ezwpr.png)
* Brand new levels replacing five existing levels: Secret Aquarium, Tower of the Wing Cap, Vanish Cap under the Moat, Cavern of the Metal Cap and Wing Mario over the Rainbow. Each still have a single secret star and the vanish switch is still there too. The Princess' Secret Slide remains the same but now has a visual makeover. 
* Models and textures have been updated to fit the theme, ranging from enemies, the various toads in the castle, stars, etc. The few untouched are left that way on purpose.
* Music has been updated. All but a few have been replaced with brand new tracks. (PC Version only) Half the costumes now come with a custom collect star jingle. 
* General tweaks to the speed for the Koopa the Quick replacement. Rematch is now more doable than how it was in v4.x 
* Amy, Tails, Blaze and Marine have their own little side stories. Completely optional and located through the game in the various levels. Keep an eye out!
* And so much more. 

## Building SC64 - The Hard Way
 
 Make sure to grab the latest version of MSYS2 from their website. Seems that initial bug has been fixed now and the latest version should be able to compile hacks now.
 
 If you haven't built with the normal sm64ex/sm64ex-alo builds, [look at those first for a proper tutorial and getting the proper dependencies for install](https://github.com/sm64pc/sm64ex/wiki/Compiling-on-Windows). Then once you got the hang of it, come back here. 
 
 1) Do `git clone https://github.com/Gamebunn/Cream64_PC.git` to somewhere on your PC with MSYS2. Make sure it's a directory with full access. Then `cd Cream64_PC` to get into the folder itself.
 2) Download the extra assets needed for the repo. Will update with the latest version when ready. 
 3) Find your own US copy of sm64, rename it to baserom.us.z64 and put it in the root of your clone.
 4) Dump the contents of the assets folder into the root of where you cloned the git
 5) Go ahead and compile with `make EXTENDED_BOUNDS=2`. If you got a decent CPU, you can increase the compile speed with `make EXTENDED_BOUNDS=2 -j4`.

 
 ### Helpful optional build additions:
 
 HIGH_FPS_PC=1 - Game runs at 60 FPS
 
 NODRAWINGDISTANCE=1 - All objects are shown at all times
 
 Example: ```make EXTENDED_BOUNDS=2 NODRAWINGDISTANCE=1 -j4```

 ## Building SC64 - The Easy Way

Super Cream 64 should now be avialable through sm64pcbuilder2. Currently not available, will update when it's live on the program. 

If you're just looking for the N64 build, [it's available right here.](https://romhacking.com/hack/super-cream-64)
