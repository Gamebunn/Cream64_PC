// Parameters: dialog enum ID, (unused), lines per box, left offset, width

#ifdef VERSION_EU
#define COMRADES "friends"
#define PLASTERED "splattered"
#define SCAM_ME "cheat!\n"
#define SCRAM "get lost"
#define YOU_CANT_SWIM_IN_IT "Its too heavy to swim\nwith."
#define GIVE_UP "give up"
#else
#define COMRADES "comrades"
#define PLASTERED "plastered"
#define SCAM_ME "scam\nME. "
#define SCRAM "scram--"
#define YOU_CANT_SWIM_IN_IT "You can't swim in it."
#define GIVE_UP "give"
#endif

DEFINE_DIALOG(DIALOG_000, 1, 6, 30, 200, _("\
Wow! You're smack in the\n\
middle of the battlefield.\n\
You'll find the Power\n\
Stars that Bowser stole\n\
inside the painting\n\
worlds.\n\
First, talk to the\n\
Bob-omb Buddy. (Press [B]\n\
to talk.) He'll certainly\n\
help you out, and so will\n\
his " COMRADES " in other\n\
areas.\n\
To read signs, stop, face\n\
them and press [B]. Press [A]\n\
or [B] to scroll ahead. You\n\
can talk to some other\n\
characters by facing them\n\
and pressing [B]."))

DEFINE_DIALOG(DIALOG_001, 1, 4, 95, 200, _("\
Watch out! If you wander\n\
around here, you're liable\n\
to be " PLASTERED " by a\n\
water bomb!\n\
Those enemy Bob-ombs love\n\
to fight, and they're\n\
always finding ways to\n\
attack.\n\
This meadow has become\n\
a battlefield ever since\n\
the Big Bob-omb got his\n\
paws on the Power Star.\n\
Can you recover the Star\n\
for us? Cross the bridge\n\
and go left up the path\n\
to find the Big Bob-omb.\n\
Please come back to see\n\
me after you've retrieved\n\
the Power Star!"))

DEFINE_DIALOG(DIALOG_002, 1, 4, 95, 200, _("\
Hey, you! It's dangerous\n\
ahead, so listen up! Take\n\
my advice.\n\
\n\
Cross the two\n\
bridges ahead, then\n\
watch for falling\n\
water bombs.\n\
The Big Bob-omb at the\n\
top of the mountain is\n\
very powerful--don't let\n\
him grab you!\n\
We're Bob-omb Buddies,\n\
and we're on your side.\n\
You can talk to us\n\
whenever you'd like to!"))

DEFINE_DIALOG(DIALOG_003, 1, 5, 95, 200, _("\
Thank you, Mario! The Big\n\
Bob-omb is nothing but a\n\
big dud now! But the\n\
battle for the castle has\n\
just begun.\n\
Other enemies are holding\n\
the other Power Stars. If\n\
you recover more Stars,\n\
you can open new doors\n\
that lead to new worlds!\n\
My Bob-omb Buddies are\n\
waiting for you. Be sure\n\
to talk to them--they'll\n\
set up cannons for you."))

DEFINE_DIALOG(DIALOG_004, 1, 3, 95, 200, _("\
We're peace-loving\n\
Bob-ombs, so we don't use\n\
cannons.\n\
But if you'd like\n\
to blast off, we don't\n\
mind. Help yourself.\n\
We'll prepare all of the\n\
cannons in this course for\n\
you to use. Bon Voyage!"))

DEFINE_DIALOG(DIALOG_005, 1, 3, 30, 200, _("\
Hey, Mario! Is it true\n\
that you beat the Big\n\
Bob-omb? Cool!\n\
You must be strong. And\n\
pretty fast. So, how fast\n\
are you, anyway?\n\
Fast enough to beat me...\n\
Koopa the Quick? I don't\n\
think so. Just try me.\n\
How about a race to the\n\
mountaintop, where the\n\
Big Bob-omb was?\n\
Whaddya say? When I say\n\
『Go,』 let the race begin!\n\
\n\
Ready....\n\
\n\
//Go!////Don't Go"))

DEFINE_DIALOG(DIALOG_006, 1, 3, 30, 200, _("\
Hey!!! Don't try to " SCAM_ME
"You've gotta run\n\
the whole course.\n\
Later. Look me up when\n\
you want to race for\n\
real."))

DEFINE_DIALOG(DIALOG_007, 1, 5, 30, 200, _("\
Hufff...fff...pufff...\n\
Whoa! You...really...are...\n\
fast! A human blur!\n\
Here you go--you've won\n\
it, fair and square!"))

DEFINE_DIALOG(DIALOG_008, 1, 4, 30, 200, _("\
BEWARE OF CHAIN CHOMP\n\
Extreme Danger!\n\
Get close and press [C]^\n\
for a better look.\n\
Scary, huh?\n\
See the Red Coin on top\n\
of the stake?\n\
\n\
When you collect eight of\n\
them, a Power Star will\n\
appear in the meadow\n\
across the bridge."))

DEFINE_DIALOG(DIALOG_009, 1, 5, 30, 200, _("\
Long time, no see! Wow,\n\
have you gotten fast!\n\
Have you been training\n\
on the sly, or is it the\n\
power of the Stars?\n\
I've been feeling down\n\
about losing the last\n\
race. This is my home\n\
course--how about a\n\
rematch?\n\
The goal is in\n\
Windswept Valley.\n\
Ready?\n\
\n\
//Go//// Don't Go"))

DEFINE_DIALOG(DIALOG_010, 1, 4, 30, 200, _("\
You've stepped on the\n\
Wing Cap Switch. Wearing\n\
the Wing Cap, you can\n\
soar through the sky.\n\
Now Wing Caps will pop\n\
out of all the red blocks\n\
you find.\n\
\n\
Would you like to Save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_011, 1, 4, 30, 200, _("\
You've just stepped on\n\
the Metal Cap Switch!\n\
The Metal Cap makes\n\
Mario invincible.\n\
Now Metal Caps will\n\
pop out of all of the\n\
green blocks you find.\n\
\n\
Would you like to Save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_012, 1, 4, 30, 200, _("\
You've just stepped on\n\
the Vanish Cap Switch.\n\
The Vanish Cap makes\n\
Mario disappear.\n\
Now Vanish Caps will pop\n\
from all of the blue\n\
blocks you find.\n\
\n\
Would you like to Save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_013, 1, 5, 30, 200, _("\
You've collected 100\n\
coins! Mario gains more\n\
power from the castle.\n\
Do you want to Save?\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_014, 1, 4, 30, 200, _("\
Wow! Another Power Star!\n\
Mario gains more courage\n\
from the power of the\n\
castle.\n\
Do you want to Save?\n\
\n\
//You Bet//Not Now"))

DEFINE_DIALOG(DIALOG_015, 1, 4, 30, 200, _("\
You can punch enemies to\n\
knock them down. Press [A]\n\
to jump, [B] to punch.\n\
Press [A] then [B] to Kick.\n\
To pick something up,\n\
press [B], too. To throw\n\
something you're holding,\n\
press [B] again."))

DEFINE_DIALOG(DIALOG_016, 1, 3, 30, 200, _("\
Hop on the shiny shell and\n\
ride wherever you want to\n\
go! Shred those enemies!"))

DEFINE_DIALOG(DIALOG_017, 1, 4, 30, 200, _("\
I'm the Big Bob-omb, lord\n\
of all blasting matter,\n\
king of ka-booms the\n\
world over!\n\
How dare you scale my\n\
mountain? By what right\n\
do you set foot on my\n\
imperial mountaintop?\n\
You may have eluded my\n\
guards, but you'll never\n\
escape my grasp...\n\
\n\
...and you'll never take\n\
away my Power Star. I\n\
hereby challenge you,\n\
Mario!\n\
If you want the Star I\n\
hold, you must prove\n\
yourself in battle.\n\
\n\
Can you pick me up from\n\
the back and hurl me to\n\
this royal turf? I think\n\
that you cannot!"))

DEFINE_DIALOG(DIALOG_018, 1, 4, 30, 200, _("\
I'm sleeping because...\n\
...I'm sleepy. I don't\n\
like being disturbed.\n\
Please walk quietly."))

DEFINE_DIALOG(DIALOG_019, 1, 2, 30, 200, _("\
Shhh! Please walk\n\
quietly in the hallway!"))

DEFINE_DIALOG(DIALOG_020, 1, 6, 95, 150, _("\
Dear Cream:\n\
Please come to the\n\
castle. I've baked\n\
a cake for you.\n\
Your loving mother--\n\
Princess Vanilla"))

DEFINE_DIALOG(DIALOG_021, 1, 5, 95, 200, _("\
Welcome.\n\
No one's home!\n\
Now " SCRAM "\n\
and don't come back!\n\
Gwa ha ha!"))

DEFINE_DIALOG(DIALOG_022, 1, 2, 95, 200, _("\
You need a key to open\n\
this door."))

DEFINE_DIALOG(DIALOG_023, 1, 3, 95, 200, _("\
This key doesn't fit!\n\
Maybe it's for the\n\
basement..."))

DEFINE_DIALOG(DIALOG_024, 1, 5, 95, 200, _("\
You need Star power to\n\
open this door. Recover a\n\
Power Star from an enemy\n\
inside one of the castle's\n\
paintings."))

DEFINE_DIALOG(DIALOG_025, 1, 4, 95, 200, _("\
It takes the power of\n\
3 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_026, 1, 4, 95, 200, _("\
It takes the power of\n\
8 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_027, 1, 4, 95, 200, _("\
It takes the power of\n\
30 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_028, 1, 4, 95, 200, _("\
It takes the power of\n\
50 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_029, 1, 5, 95, 200, _("\
To open the door that\n\
leads to the 『endless』\n\
stairs, you need 70\n\
Stars.\n\
Bwa ha ha!"))

DEFINE_DIALOG(DIALOG_030, 1, 6, 30, 200, _("\
Hello! The Lakitu Bros.,\n\
cutting in with a live\n\
update on Mario's\n\
progress. He's about to\n\
learn a technique for\n\
sneaking up on enemies.\n\
The trick is this: He has\n\
to walk very slowly in\n\
order to walk quietly.\n\
\n\
\n\
\n\
And wrapping up filming\n\
techniques reported on\n\
earlier, you can take a\n\
look around using [C]> and\n\
[C]<. Press [C]| to view the\n\
action from a distance.\n\
When you can't move the\n\
camera any farther, the\n\
buzzer will sound. This is\n\
the Lakitu Bros.,\n\
signing off."))

DEFINE_DIALOG(DIALOG_031, 1, 5, 30, 200, _("\
No way! You beat me...\n\
again!! And I just spent\n\
my entire savings on\n\
these new Koopa\n\
Mach 1 Sprint shoes!\n\
Here, I guess I have to\n\
hand over this Star to\n\
the winner of the race.\n\
Congrats, Mario!"))

DEFINE_DIALOG(DIALOG_032, 1, 5, 30, 200, _("\
If you get the Wing Cap,\n\
you can fly! Put the cap\n\
on, then do a Triple\n\
Jump--jump three times\n\
in a row--to take off.\n\
You can fly even higher\n\
if you blast out of a\n\
cannon wearing the\n\
Wing Cap!\n\
\n\
Use the [C] Buttons to look\n\
around while flying, and\n\
press [Z] to land."))

DEFINE_DIALOG(DIALOG_033, 1, 6, 30, 200, _("\
Ciao! You've reached\n\
Princess Toadstool's\n\
castle via a warp pipe.\n\
Using the controller is a\n\
piece of cake. Press [A] to\n\
jump and [B] to attack.\n\
Press [B] to read signs,\n\
too. Use the Control Stick\n\
in the center of the\n\
controller to move Mario\n\
around. Now, head for\n\
the castle."))

DEFINE_DIALOG(DIALOG_034, 1, 6, 30, 200, _("\
Good afternoon. The\n\
Lakitu Bros., here,\n\
reporting live from just\n\
outside the Princess's\n\
castle.\n\
\n\
Mario has just arrived\n\
on the scene, and we'll\n\
be filming the action live\n\
as he enters the castle\n\
and pursues the missing\n\
Power Stars.\n\
As seasoned cameramen,\n\
we'll be shooting from the\n\
recommended angle, but\n\
you can change the\n\
camera angle by pressing\n\
the [C] Buttons.\n\
If we can't adjust the\n\
view any further, we'll\n\
buzz. To take a look at\n\
the surroundings, stop\n\
and press [C]^.\n\
\n\
Press [A] to resume play.\n\
Switch camera modes with\n\
the [R] Button. Signs along\n\
the way will review these\n\
instructions.\n\
\n\
For now, reporting live,\n\
this has been the\n\
Lakitu Bros."))

DEFINE_DIALOG(DIALOG_035, 1, 5, 30, 200, _("\
There are four camera, or\n\
『[C],』 Buttons. Press [C]^\n\
to look around using the\n\
Control Stick.\n\
\n\
You'll usually see Mario\n\
through Lakitu's camera.\n\
It is the camera\n\
recommended for normal\n\
play.\n\
You can change angles by\n\
pressing [C]>. If you press\n\
[R], the view switches to\n\
Mario's camera, which\n\
is directly behind him.\n\
Press [R] again to return\n\
to Lakitu's camera. Press\n\
[C]| to see Mario from\n\
afar, using either\n\
Lakitu's or Mario's view."))

DEFINE_DIALOG(DIALOG_036, 1, 5, 30, 200, _("\
OBSERVATION PLATFORM\n\
Press [C]^ to take a look\n\
around. Don't miss\n\
anything!\n\
\n\
Press [R] to switch to\n\
Mario's camera. It\n\
always follows Mario.\n\
Press [R] again to switch\n\
to Lakitu's camera.\n\
Pause the game and\n\
switch the mode to 『fix』\n\
the camera in place while\n\
holding [R]. Give it a try!"))

DEFINE_DIALOG(DIALOG_037, 1, 2, 30, 200, _("\
I win! You lose!\n\
Ha ha ha ha!\n\
You're no slouch, but I'm\n\
a better sledder!\n\
Better luck next time!"))

DEFINE_DIALOG(DIALOG_038, 1, 3, 95, 200, _("\
Reacting to the Star\n\
power, the door slowly\n\
opens."))

DEFINE_DIALOG(DIALOG_039, 1, 4, 30, 200, _("\
No visitors allowed,\n\
by decree of\n\
the Big Bob-omb\n\
\n\
I shall never surrender my\n\
Stars, for they hold the\n\
power of the castle in\n\
their glow.\n\
They were a gift from\n\
Bowser, the Koopa King\n\
himself, and they lie well\n\
hidden within my realm.\n\
Not a whisper of their\n\
whereabouts shall leave\n\
my lips. Oh, all right,\n\
perhaps one hint:\n\
Heed the Star names at\n\
the beginning of the\n\
course.\n\
//--The Big Bob-omb"))

DEFINE_DIALOG(DIALOG_040, 1, 3, 30, 200, _("\
Warning!\n\
Cold, Cold Crevasse\n\
Below!"))

DEFINE_DIALOG(DIALOG_041, 1, 3, 30, 200, _("\
I win! You lose!\n\
Ha ha ha!\n\
\n\
That's what you get for\n\
messin' with Koopa the\n\
Quick.\n\
Better luck next time!"))

DEFINE_DIALOG(DIALOG_042, 1, 4, 30, 200, _("\
Caution! Narrow Bridge!\n\
Cross slowly!\n\
\n\
\n\
You can jump to the edge\n\
of the cliff and hang on,\n\
and you can climb off the\n\
edge if you move slowly.\n\
When you want to let go,\n\
either press [Z] or press\n\
the Control Stick in the\n\
direction of Mario's back.\n\
To climb up, press Up on\n\
the Control Stick. To\n\
scurry up quickly, press\n\
the [A] Button."))

DEFINE_DIALOG(DIALOG_043, 1, 5, 30, 200, _("\
If you jump and hold the\n\
[A] Button, you can hang on\n\
to some objects overhead.\n\
It's the same as grabbing\n\
a flying bird!"))

DEFINE_DIALOG(DIALOG_044, 1, 5, 95, 200, _("\
Whooo's there? Whooo\n\
woke me up? It's still\n\
daylight--I should be\n\
sleeping!\n\
\n\
Hey, as long as I'm\n\
awake, why not take a\n\
short flight with me?\n\
Press and hold [A] to grab\n\
on. Release [A] to let go.\n\
I'll take you wherever\n\
you want to go, as long\n\
as my wings hold out.\n\
Watch my shadow, and\n\
grab on."))

DEFINE_DIALOG(DIALOG_045, 1, 6, 95, 200, _("\
Whew! I'm just about\n\
flapped out. You should\n\
lay off the pasta, Mario!\n\
That's it for now. Press\n\
[A] to let go. Okay,\n\
bye byyyyyyeeee!"))

DEFINE_DIALOG(DIALOG_046, 1, 5, 30, 200, _("\
You have to master three\n\
important jumping\n\
techniques.\n\
First try the Triple Jump.\n\
\n\
Run fast, then jump three\n\
times, one, two, three.\n\
If you time the jumps\n\
right, you'll hop, skip,\n\
then jump really high.\n\
Next, go for distance\n\
with the Long Jump. Run,\n\
press [Z] to crouch then [A]\n\
to jump really far.\n\
\n\
To do the Wall Kick, press\n\
[A] to jump at a wall, then\n\
jump again when you hit\n\
the wall.\n\
\n\
Got that? Triple Jump,\n\
Long Jump, Wall Kick.\n\
Practice, practice,\n\
practice. You don't stand\n\
a chance without them."))

DEFINE_DIALOG(DIALOG_047, 1, 2, 95, 200, _("\
Hi! I'll prepare the\n\
cannon for you!"))

DEFINE_DIALOG(DIALOG_048, 1, 4, 30, 200, _("\
Snow Mountain Summit\n\
Watch for slippery\n\
conditions! Please enter\n\
the cottage first."))

DEFINE_DIALOG(DIALOG_049, 1, 5, 30, 200, _("\
Remember that tricky Wall\n\
Kick jump? It's a\n\
technique you'll have to\n\
master in order to reach\n\
high places.\n\
Use it to jump from wall\n\
to wall. Press the\n\
Control Stick in the\n\
direction you want to\n\
bounce to gain momentum.\n\
Practice makes perfect!"))

DEFINE_DIALOG(DIALOG_050, 1, 4, 30, 200, _("\
Hold [Z] to crouch and\n\
slide down a slope.\n\
Or press [Z] while in the\n\
air to Pound the Ground!\n\
If you stop, crouch, then\n\
jump, you'll do a\n\
Backward Somersault!\n\
Got that?\n\
There's more. Crouch and\n\
then jump to do a\n\
Long Jump! Or crouch and\n\
walk to...never mind."))

DEFINE_DIALOG(DIALOG_051, 1, 6, 30, 200, _("\
Climbing's easy! When you\n\
jump at trees, poles or\n\
pillars, you'll grab them\n\
automatically. Press [A] to\n\
jump off backward.\n\
\n\
To rotate around the\n\
object, press Right or\n\
Left on the Control Stick.\n\
When you reach the top,\n\
press Up to do a\n\
handstand!\n\
Jump off from the\n\
handstand for a high,\n\
stylin' dismount."))

DEFINE_DIALOG(DIALOG_052, 1, 5, 30, 200, _("\
Stop and press [Z] to\n\
crouch, then press [A]\n\
to do a high, Backward\n\
Somersault!\n\
\n\
To perform a Side\n\
Somersault, run, do a\n\
sharp U-turn and jump.\n\
You can catch lots of\n\
air with both jumps."))

DEFINE_DIALOG(DIALOG_053, 1, 5, 30, 200, _("\
Sometimes, if you pass\n\
through a coin ring or\n\
find a secret point in a\n\
course, a red number will\n\
appear.\n\
If you trigger five red\n\
numbers, a secret Star\n\
will show up."))

DEFINE_DIALOG(DIALOG_054, 1, 5, 30, 200, _("\
Welcome to the snow\n\
slide! Hop on! To speed\n\
up, press forward on the\n\
Control Stick. To slow\n\
down, pull back."))

DEFINE_DIALOG(DIALOG_055, 1, 4, 30, 200, _("\
Hey-ey, Mario, buddy,\n\
howzit goin'? Step right\n\
up. You look like a fast\n\
sleddin' kind of guy.\n\
I know speed when I see\n\
it, yes siree--I'm the\n\
world champion sledder,\n\
you know. Whaddya say?\n\
How about a race?\n\
Ready...\n\
\n\
//Go//// Don't Go"))

DEFINE_DIALOG(DIALOG_056, 1, 6, 30, 200, _("\
You brrrr-oke my record!\n\
Unbelievable! I knew\n\
that you were the coolest.\n\
Now you've proven\n\
that you're also the\n\
fastest!\n\
I can't award you a gold\n\
medal, but here, take this\n\
Star instead. You've\n\
earned it!"))

DEFINE_DIALOG(DIALOG_057, 1, 4, 30, 200, _("\
Egad! My baby!! Have you\n\
seen my baby??? She's\n\
the most precious baby in\n\
the whole wide world.\n\
(They say she has my\n\
beak...) I just can't\n\
remember where I left\n\
her.\n\
Let's see...I stopped\n\
for herring and ice cubes,\n\
then I...oohh! I just\n\
don't know!"))

DEFINE_DIALOG(DIALOG_058, 1, 4, 30, 200, _("\
You found my precious,\n\
precious baby! Where\n\
have you been? How can\n\
I ever thank you, Mario?\n\
Oh, I do have this...\n\
...Star. Here, take it\n\
with my eternal\n\
gratitude."))

DEFINE_DIALOG(DIALOG_059, 1, 4, 30, 200, _("\
That's not my baby! She\n\
looks nothing like me!\n\
Her parents must be\n\
worried sick!"))

DEFINE_DIALOG(DIALOG_060, 1, 4, 30, 200, _("\
ATTENTION!\n\
Read Before Diving In!\n\
\n\
\n\
If you stay under the\n\
water for too long, you'll\n\
run out of oxygen.\n\
\n\
Return to the surface for\n\
air or find an air bubble\n\
or coins to breathe while\n\
underwater.\n\
Press [A] to swim. Hold [A]\n\
to swim slow and steady.\n\
Tap [A] with smooth timing\n\
to gain speed.\n\
Press Up on the\n\
Control Stick and press [A]\n\
to dive.\n\
\n\
Press Down on the Control\n\
Stick and press [A] to\n\
return to the surface.\n\
\n\
Hold Down and press [A]\n\
while on the surface near\n\
the edge of the water to\n\
jump out."))

DEFINE_DIALOG(DIALOG_061, 1, 4, 30, 200, _("\
BRRR! Frostbite Danger!\n\
Do not swim here.\n\
I'm serious.\n\
/--The Penguin"))

DEFINE_DIALOG(DIALOG_062, 1, 3, 30, 200, _("\
Hidden inside the green\n\
block is the amazing\n\
Metal Cap.\n\
Wearing it, you won't\n\
catch fire or be hurt\n\
by enemy attacks.\n\
You don't even have to\n\
breathe while wearing it.\n\
\n\
The only problem:\n\
It is too heavy to\n\
swim with."))

DEFINE_DIALOG(DIALOG_063, 1, 5, 30, 200, _("\
The Vanish Cap is inside\n\
the blue block. Mr. I.\n\
will be surprised, since\n\
you'll be invisible when\n\
you wear it!\n\
Even the Big Boo will be\n\
fooled--and you can walk\n\
through secret walls, too."))

DEFINE_DIALOG(DIALOG_064, 1, 5, 30, 200, _("\
When you put on the Wing\n\
Cap that comes from a\n\
red block, do the Triple\n\
Jump to soar high into\n\
the sky.\n\
Use the Control Stick to\n\
guide Mario. Pull back to\n\
to fly up, press forward\n\
to nose down, and press [Z]\n\
to land."))

DEFINE_DIALOG(DIALOG_065, 1, 6, 30, 200, _("\
Swimming Lessons!\n\
Tap [A] to do the breast\n\
stroke. If you time the\n\
taps right, you'll swim\n\
fast.\n\
\n\
Press and hold [A] to do a\n\
slow, steady flutter kick.\n\
Press Up on the Control\n\
Stick to dive, and pull\n\
back on the stick to head\n\
for the surface.\n\
To jump out of the water,\n\
hold Down on the Control\n\
Stick, then press [A].\n\
Easy as pie, right?\n\
\n\
\n\
But remember:\n\
Mario can't breathe under\n\
the water! Return to the\n\
surface for air when the\n\
Power Meter runs low.\n\
\n\
And one last thing: You\n\
can't open doors that\n\
are underwater."))

DEFINE_DIALOG(DIALOG_066, 1, 5, 30, 200, _("\
Mario, it's Peach!\n\
Please be careful! Bowser\n\
is so wicked! He will try\n\
to burn you with his\n\
horrible flame breath.\n\
Run around behind and\n\
grab him by the tail with\n\
the [B] Button. Once you\n\
grab hold, swing him\n\
around in great circles.\n\
Rotate the Control Stick\n\
to go faster and faster.\n\
The faster you swing him,\n\
the farther he'll fly.\n\
\n\
Use the [C] Buttons to look\n\
around, Mario. You have\n\
to throw Bowser into one\n\
of the bombs in the four\n\
corners.\n\
Aim well, then press [B]\n\
again to launch Bowser.\n\
Good luck, Mario! Our\n\
fate is in your hands."))

DEFINE_DIALOG(DIALOG_067, 1, 5, 30, 200, _("\
Tough luck, Mario!\n\
Princess Toadstool isn't\n\
here...Gwa ha ha!! Go\n\
ahead--just try to grab\n\
me by the tail!\n\
You'll never be able to\n\
swing ME around! A wimp\n\
like you won't throw me\n\
out of here! Never! Ha!"))

DEFINE_DIALOG(DIALOG_068, 1, 5, 30, 200, _("\
It's Lethal Lava Land!\n\
If you catch fire or fall\n\
into a pool of flames,\n\
you'll be hopping mad, but\n\
don't lose your cool.\n\
You can still control\n\
Mario--just try to keep\n\
calm!"))

DEFINE_DIALOG(DIALOG_069, 1, 6, 30, 200, _("\
Sometimes you'll bump into\n\
invisible walls at the\n\
edges of the painting\n\
worlds. If you hit a wall\n\
while flying, you'll bounce\n\
back."))

DEFINE_DIALOG(DIALOG_070, 1, 5, 30, 200, _("\
You can return to the\n\
castle's main hall at any\n\
time from the painting\n\
worlds where the enemies\n\
live.\n\
Just stop, stand still,\n\
press Start to pause the\n\
game, then select\n\
『Exit Course.』\n\
\n\
You don't have to collect\n\
all Power Stars in one\n\
course before going on to\n\
the next.\n\
\n\
Return later, when you're\n\
more experienced, to pick\n\
up difficult ones.\n\
\n\
\n\
Whenever you find a Star,\n\
a hint for finding the\n\
next one will appear on\n\
the course's start screen.\n\
\n\
You can, however, collect\n\
any of the remaining\n\
Stars next. You don't\n\
have to recover the one\n\
described by the hint."))

DEFINE_DIALOG(DIALOG_071, 1, 3, 30, 200, _("\
Danger Ahead!\n\
Beware of the strange\n\
cloud! Don't inhale!\n\
If you feel faint, run for\n\
higher ground and fresh\n\
air!\n\
Circle: Shelter\n\
Arrow: Entrance-Exit"))

DEFINE_DIALOG(DIALOG_072, 1, 5, 30, 200, _("\
High winds ahead!\n\
Pull your Cap down tight.\n\
If it blows off, you'll\n\
have to find it on this\n\
mountain."))

DEFINE_DIALOG(DIALOG_073, 1, 4, 95, 200, _("\
Aarrgh! Ahoy, matey. I\n\
have sunken treasure,\n\
here, I do.\n\
\n\
But to pluck the plunder,\n\
you must open the\n\
Treasure Chests in the\n\
right order.\n\
What order is that,\n\
ye say?\n\
\n\
\n\
I'll never tell!\n\
\n\
//--The Cap'n"))

DEFINE_DIALOG(DIALOG_074, 1, 5, 30, 200, _("\
You can grab on to the\n\
edge of a cliff or ledge\n\
with your fingertips and\n\
hang down from it.\n\
\n\
To drop from the edge,\n\
either press the Control\n\
Stick in the direction of\n\
Mario's back or press the\n\
[Z] Button.\n\
To get up onto the ledge,\n\
either press Up on the\n\
Control Stick or press [A]\n\
as soon as you grab the\n\
ledge to climb up quickly."))

DEFINE_DIALOG(DIALOG_075, 1, 5, 30, 200, _("\
Mario!! My castle is in\n\
great peril. I know that\n\
Bowser is the cause...and\n\
I know that only you can\n\
stop him!\n\
The doors in the castle\n\
that have been sealed by\n\
Bowser can be opened only\n\
with Star Power.\n\
\n\
But there are secret\n\
paths in the castle,\n\
paths that Bowser hasn't\n\
found.\n\
\n\
One of those paths is in\n\
this room, and it holds\n\
one of the castle's Secret\n\
Stars!\n\
\n\
Find that Secret Star,\n\
Mario! It will help you\n\
on your quest. Please,\n\
Mario, you have to\n\
help us!\n\
Retrieve all of the\n\
Power Stars in the castle\n\
and free us from this\n\
awful prison!\n\
Please!"))

DEFINE_DIALOG(DIALOG_076, 1, 6, 30, 200, _("\
Thanks to the power of\n\
the Stars, life is\n\
returning to the castle.\n\
Please, Mario, you have\n\
to give Bowser the boot!\n\
\n\
Here, let me tell you a\n\
little something about the\n\
castle. In the room with\n\
the mirrors, look carefully\n\
for anything that's not\n\
reflected in the mirror.\n\
And when you go to the\n\
water town, you can flood\n\
it with a high jump into\n\
the painting. Oh, by the\n\
way, look what I found!"))

DEFINE_DIALOG(DIALOG_077, 1, 2, 150, 200, _("\
It is decreed that one\n\
shall pound the pillars."))

DEFINE_DIALOG(DIALOG_078, 1, 5, 30, 200, _("\
Break open the Blue Coin\n\
Block by Pounding the\n\
Ground with the [Z] Button.\n\
One Blue Coin is worth\n\
five Yellow Coins.\n\
But you have to hurry!\n\
The coins will disappear\n\
if you're not quick to\n\
collect them! Too bad."))

DEFINE_DIALOG(DIALOG_079, 1, 4, 30, 200, _("\
Owwwuu! Let me go!\n\
Uukee-kee! I was only\n\
teasing! Can't you take\n\
a joke?\n\
I'll tell you what, let's\n\
trade. If you let me go,\n\
I'll give you something\n\
really good.\n\
So, how about it?\n\
\n\
//Free him/ Hold on"))

DEFINE_DIALOG(DIALOG_080, 1, 1, 30, 200, _("\
Eeeh hee hee hee!"))

DEFINE_DIALOG(DIALOG_081, 1, 4, 30, 200, _("\
The mystery is of Wet\n\
or Dry.\n\
And where does the\n\
solution lie?\n\
The city welcomes visitors\n\
with the depth they bring\n\
as they enter."))

DEFINE_DIALOG(DIALOG_082, 1, 4, 30, 200, _("\
Hold on to your hat! If\n\
you lose it, you'll be\n\
injured easily.\n\
\n\
If you do lose your Cap,\n\
you'll have to find it in\n\
the course where you\n\
lost it.\n\
Oh, boy, it's not looking\n\
good for Peach. She's\n\
still trapped somewhere\n\
inside the walls.\n\
Please, Mario, you have\n\
to help her! Did you know\n\
that there are enemy\n\
worlds inside the walls?\n\
Yup. It's true. Bowser's\n\
troops are there, too.\n\
Oh, here, take this. I've\n\
been keeping it for you."))

DEFINE_DIALOG(DIALOG_083, 1, 6, 30, 200, _("\
There's something strange\n\
about that clock. As you\n\
jump inside, watch the\n\
position of the big hand.\n\
Oh, look what I found!\n\
Here, Mario, catch!"))

DEFINE_DIALOG(DIALOG_084, 1, 3, 30, 200, _("\
Yeeoww! Unhand me,\n\
brute! I'm late, so late,\n\
I must make haste!\n\
This shiny thing? Mine!\n\
It's mine. Finders,\n\
keepers, losers...\n\
Late, late, late...\n\
Ouch! Take it then! A\n\
gift from Bowser, it was.\n\
Now let me be! I have a\n\
date! I cannot be late\n\
for tea!"))

DEFINE_DIALOG(DIALOG_085, 1, 5, 30, 200, _("\
You don't stand a ghost\n\
of a chance in this house.\n\
If you walk out of here,\n\
you deserve...\n\
...a Ghoul Medal..."))

DEFINE_DIALOG(DIALOG_086, 1, 3, 30, 200, _("\
Running around in circles\n\
makes some bad guys roll\n\
their eyes."))

DEFINE_DIALOG(DIALOG_087, 1, 4, 30, 200, _("\
Santa Claus isn't the only\n\
one who can go down a\n\
chimney! Come on in!\n\
/--Cabin Proprietor"))

DEFINE_DIALOG(DIALOG_088, 1, 5, 30, 200, _("\
Work Elevator\n\
For those who get off\n\
here: Grab the pole to the\n\
left and slide carefully\n\
down."))

DEFINE_DIALOG(DIALOG_089, 1, 5, 95, 200, _("\
Both ways fraught with\n\
danger! Watch your feet!\n\
Those who can't do the\n\
Long Jump, tsk, tsk. Make\n\
your way to the right.\n\
Right: Work Elevator\n\
/// Cloudy Maze\n\
Left: Black Hole\n\
///Underground Lake\n\
\n\
Red Circle: Elevator 2\n\
//// Underground Lake\n\
Arrow: You are here"))

DEFINE_DIALOG(DIALOG_090, 1, 6, 30, 200, _("\
Bwa ha ha ha!\n\
You've stepped right into\n\
my trap, just as I knew\n\
you would! I warn you,\n\
『Friend,』 watch your\n\
step!"))

DEFINE_DIALOG(DIALOG_091, 2, 2, 30, 200, _("\
Danger!\n\
Strong Gusts!\n\
But the wind makes a\n\
comfy ride."))

DEFINE_DIALOG(DIALOG_092, 1, 5, 30, 200, _("\
Pestering me again, are\n\
you, Mario? Can't you see\n\
that I'm having a merry\n\
little time, making\n\
mischief with my minions?\n\
Now, return those Stars!\n\
My troops in the walls\n\
need them! Bwa ha ha!"))

DEFINE_DIALOG(DIALOG_093, 1, 5, 30, 200, _("\
Mario! You again! Well\n\
that's just fine--I've\n\
been looking for something\n\
to fry with my fire\n\
breath!\n\
Your Star Power is\n\
useless against me!\n\
Your friends are all\n\
trapped within the\n\
walls...\n\
And you'll never see the\n\
Princess again!\n\
Bwa ha ha ha!"))

DEFINE_DIALOG(DIALOG_094, 1, 4, 30, 200, _("\
Get a good run up the\n\
slope! Do you remember\n\
the Long Jump? Run, press\n\
[Z], then jump!"))

DEFINE_DIALOG(DIALOG_095, 1, 4, 30, 200, _("\
To read a sign, stand in\n\
front of it and press [B],\n\
like you did just now.\n\
\n\
When you want to talk to\n\
a Koopa Troopa or other\n\
animal, stand right in\n\
front of it.\n\
Please recover the Stars\n\
that were stolen by\n\
Bowser in this course."))

DEFINE_DIALOG(DIALOG_096, 1, 4, 30, 200, _("\
The path is narrow here.\n\
Easy does it! No one is\n\
allowed on top of the\n\
mountain!\n\
And if you know what's\n\
good for you, you won't\n\
wake anyone who's\n\
sleeping!\n\
Move slowly,\n\
tread lightly."))

DEFINE_DIALOG(DIALOG_097, 1, 5, 30, 200, _("\
Don't be a pushover!\n\
If anyone tries to shove\n\
you around, push back!\n\
It's one-on-one, with a\n\
fiery finish for the loser!"))

DEFINE_DIALOG(DIALOG_098, 1, 2, 95, 200, _("\
Come on in here...\n\
...heh, heh, heh..."))

// unused
DEFINE_DIALOG(DIALOG_099, 1, 5, 95, 200, _("\
Eh he he...\n\
You're mine, now, hee hee!\n\
I'll pass right through\n\
this wall. Can you do\n\
that? Heh, heh, heh!"))

DEFINE_DIALOG(DIALOG_100, 1, 3, 95, 200, _("\
Ukkiki...Wakkiki...kee kee!\n\
Ha! I snagged it!\n\
It's mine! Heeheeheeee!"))

DEFINE_DIALOG(DIALOG_101, 1, 3, 95, 200, _("\
Ackk! Let...go...\n\
You're...choking...me...\n\
Cough...I've been framed!\n\
This Cap? Oh, all right,\n\
take it. It's a cool Cap,\n\
but I'll give it back.\n\
I think it looks better on\n\
me than it does on you,\n\
though! Eeeee! Kee keee!"))

DEFINE_DIALOG(DIALOG_102, 1, 5, 30, 200, _("\
Pssst! The Boos are super\n\
shy. If you look them\n\
in the eyes, they fade\n\
away, but if you turn\n\
your back, they reappear.\n\
It's no use trying to hit\n\
them when they're fading\n\
away. Instead, sneak up\n\
behind them and punch."))

DEFINE_DIALOG(DIALOG_103, 1, 4, 95, 200, _("\
Upon four towers\n\
one must alight...\n\
Then at the peak\n\
shall shine the light..."))

DEFINE_DIALOG(DIALOG_104, 1, 5, 30, 200, _("\
The shadowy star in front\n\
of you is a 『Star\n\
Marker.』 When you collect\n\
all 8 Red Coins, the Star\n\
will appear here."))

DEFINE_DIALOG(DIALOG_105, 1, 3, 95, 200, _("\
Ready for blastoff! Come\n\
on, hop into the cannon!\n\
\n\
You can reach the Star on\n\
the floating island by\n\
using the four cannons.\n\
Use the Control Stick to\n\
aim, then press [A] to fire.\n\
\n\
If you're handy, you can\n\
grab on to trees or poles\n\
to land."))

DEFINE_DIALOG(DIALOG_106, 1, 2, 95, 200, _("\
Ready for blastoff! Come\n\
on, hop into the cannon!"))

DEFINE_DIALOG(DIALOG_107, 1, 3, 95, 200, _("\
Ghosts...\n\
...don't...\n\
...DIE!\n\
Heh, heh, heh!\n\
Can you get out of here...\n\
...alive?"))

DEFINE_DIALOG(DIALOG_108, 1, 2, 95, 200, _("\
Boooooo-m! Here comes\n\
the master of mischief,\n\
the tower of terror,\n\
the Big Boo!\n\
Ka ha ha ha..."))

DEFINE_DIALOG(DIALOG_109, 1, 4, 95, 200, _("\
Ooooo Nooooo!\n\
Talk about out-of-body\n\
experiences--my body\n\
has melted away!\n\
Have you run in to any\n\
headhunters lately??\n\
I could sure use a new\n\
body!\n\
Brrr! My face might\n\
freeze like this!"))

DEFINE_DIALOG(DIALOG_110, 1, 5, 95, 200, _("\
I need a good head on my\n\
shoulders. Do you know of\n\
anybody in need of a good\n\
body? Please! I'll follow\n\
you if you do!"))

DEFINE_DIALOG(DIALOG_111, 1, 4, 95, 200, _("\
Perfect! What a great\n\
new body! Here--this is a\n\
present for you. It's sure\n\
to warm you up."))

DEFINE_DIALOG(DIALOG_112, 1, 4, 30, 200, _("\
Collect as many coins as\n\
possible! They'll refill\n\
your Power Meter.\n\
\n\
You can check to see how\n\
many coins you've\n\
collected in each of the\n\
15 enemy worlds.\n\
You can also recover\n\
power by touching the\n\
Spinning Heart.\n\
\n\
The faster you run\n\
through the heart, the\n\
more power you'll recover."))

DEFINE_DIALOG(DIALOG_113, 1, 6, 30, 200, _("\
There are special Caps in\n\
the red, green and blue\n\
blocks. Step on the\n\
switches in the hidden\n\
courses to activate the\n\
Cap Blocks."))

DEFINE_DIALOG(DIALOG_114, 1, 5, 95, 200, _("\
It makes me so mad! We\n\
build your houses, your\n\
castles. We pave your\n\
roads, and still you\n\
walk all over us.\n\
Do you ever say thank\n\
you? No! Well, you're not\n\
going to wipe your feet\n\
on me! I think I'll crush\n\
you just for fun!\n\
Do you have a problem\n\
with that? Just try to\n\
pound me, wimp! Ha!"))

DEFINE_DIALOG(DIALOG_115, 1, 5, 95, 200, _("\
No! Crushed again!\n\
I'm just a stepping stone,\n\
after all. I won't gravel,\n\
er, grovel. Here, you win.\n\
Take this with you!"))

DEFINE_DIALOG(DIALOG_116, 1, 5, 95, 200, _("\
Whaaa....Whaaat?\n\
Can it be that a\n\
pipsqueak like you has\n\
defused the Bob-omb\n\
king????\n\
You might be fast enough\n\
to ground me, but you'll\n\
have to pick up the pace\n\
if you want to take King\n\
Bowser by the tail.\n\
Methinks my troops could\n\
learn a lesson from you!\n\
Here is your Star, as I\n\
promised, Mario.\n\
\n\
If you want to see me\n\
again, select this Star\n\
from the menu. For now,\n\
farewell."))

DEFINE_DIALOG(DIALOG_117, 1, 1, 95, 200, _("\
Who...walk...here?\n\
Who...break...seal?\n\
Wake..ancient..ones?\n\
We no like light...\n\
Rrrrummbbble...\n\
We no like...intruders!\n\
Now battle...\n\
...hand...\n\
...to...\n\
...hand!"))

DEFINE_DIALOG(DIALOG_118, 1, 6, 95, 200, _("\
Grrrrumbbble!\n\
What...happen?\n\
We...crushed like pebble.\n\
You so strong!\n\
You rule ancient pyramid!\n\
For today...\n\
Now, take Star of Power.\n\
We...sleep...darkness."))

DEFINE_DIALOG(DIALOG_119, 1, 6, 30, 200, _("\
Grrr! I was a bit\n\
careless. This is not as I\n\
had planned...but I still\n\
hold the power of the\n\
Stars, and I still have\n\
Peach.\n\
Bwa ha ha! You'll get no\n\
more Stars from me! I'm\n\
not finished with you yet,\n\
but I'll let you go for\n\
now. You'll pay for this...\n\
later!"))

DEFINE_DIALOG(DIALOG_120, 1, 4, 30, 200, _("\
Ooowaah! Can it be that\n\
I've lost??? The power of\n\
the Stars has failed me...\n\
this time.\n\
Consider this a draw.\n\
Next time, I'll be in\n\
perfect condition.\n\
\n\
Now, if you want to see\n\
your precious Princess,\n\
come to the top of the\n\
tower.\n\
I'll be waiting!\n\
Gwa ha ha ha!"))

DEFINE_DIALOG(DIALOG_121, 1, 5, 30, 200, _("\
Nooo! It can't be!\n\
You've really beaten me,\n\
Mario?!! I gave those\n\
troops power, but now\n\
it's fading away!\n\
Arrgghh! I can see peace\n\
returning to the world! I\n\
can't stand it! Hmmm...\n\
It's not over yet...\n\
\n\
C'mon troops! Let's watch\n\
the ending together!\n\
Bwa ha ha!"))

DEFINE_DIALOG(DIALOG_122, 1, 4, 30, 200, _("\
The Black Hole\n\
Right: Work Elevator\n\
/// Cloudy Maze\n\
Left: Underground Lake"))

DEFINE_DIALOG(DIALOG_123, 1, 4, 30, 200, _("\
Metal Cavern\n\
Right: To Waterfall\n\
Left: Metal Cap Switch"))

DEFINE_DIALOG(DIALOG_124, 1, 4, 30, 200, _("\
Work Elevator\n\
Danger!!\n\
Read instructions\n\
thoroughly!\n\
Elevator continues in the\n\
direction of the arrow\n\
activated."))

DEFINE_DIALOG(DIALOG_125, 1, 3, 30, 200, _("\
Hazy Maze-Exit\n\
Danger! Closed.\n\
Turn back now."))

DEFINE_DIALOG(DIALOG_126, 2, 3, 30, 200, _("\
Up: Black Hole\n\
Right: Work Elevator\n\
/// Hazy Maze"))

DEFINE_DIALOG(DIALOG_127, 3, 4, 30, 200, _("\
Underground Lake\n\
Right: Metal Cave\n\
Left: Abandoned Mine\n\
///(Closed)\n\
A gentle sea dragon lives\n\
here. Pound on his back to\n\
make him lower his head.\n\
Don't become his lunch."))

DEFINE_DIALOG(DIALOG_128, 1, 4, 95, 200, _("\
You must fight with\n\
honor! It is against the\n\
royal rules to throw the\n\
king out of the ring!"))

DEFINE_DIALOG(DIALOG_129, 1, 5, 30, 200, _("\
Welcome to the Vanish\n\
Cap Switch Course! All of\n\
the blue blocks you find\n\
will become solid once you\n\
step on the Cap Switch.\n\
You'll disappear when you\n\
put on the Vanish Cap, so\n\
you'll be able to elude\n\
enemies and walk through\n\
many things. Try it out!"))

DEFINE_DIALOG(DIALOG_130, 1, 5, 30, 200, _("\
Welcome to the Metal Cap\n\
Switch Course! Once you\n\
step on the Cap Switch,\n\
the green blocks will\n\
become solid.\n\
When you turn your body\n\
into metal with the Metal\n\
Cap, you can walk\n\
underwater! Try it!"))

DEFINE_DIALOG(DIALOG_131, 1, 5, 30, 200, _("\
Welcome to the Wing Cap\n\
Course! Step on the red\n\
switch at the top of the\n\
tower, in the center of\n\
the rainbow ring.\n\
When you trigger the\n\
switch, all of the red\n\
blocks you find will\n\
become solid.\n\
\n\
Try out the Wing Cap! Do\n\
the Triple Jump to take\n\
off and press [Z] to land.\n\
\n\
\n\
Pull back on the Control\n\
Stick to go up and push\n\
forward to nose down,\n\
just as you would when\n\
flying an airplane."))

DEFINE_DIALOG(DIALOG_132, 1, 4, 30, 200, _("\
Whoa, Mario, pal, you\n\
aren't trying to cheat,\n\
are you? Shortcuts aren't\n\
allowed.\n\
Now, I know that you\n\
know better. You're\n\
disqualified! Next time,\n\
play fair!"))

DEFINE_DIALOG(DIALOG_133, 1, 6, 30, 200, _("\
Am I glad to see you! The\n\
Princess...and I...and,\n\
well, everybody...we're all\n\
trapped inside the castle\n\
walls.\n\
\n\
Bowser has stolen the\n\
castle's Stars, and he's\n\
using their power to\n\
create his own world in\n\
the paintings and walls.\n\
\n\
Please recover the Power\n\
Stars! As you find them,\n\
you can use their power\n\
to open the doors that\n\
Bowser has sealed.\n\
\n\
There are four rooms on\n\
the first floor. Start in\n\
the one with the painting\n\
of Bob-omb inside. It's\n\
the only room that Bowser\n\
hasn't sealed.\n\
When you collect eight\n\
Power Stars, you'll be\n\
able to open the door\n\
with the big star. The\n\
Princess must be inside!"))

DEFINE_DIALOG(DIALOG_134, 1, 5, 30, 200, _("\
The names of the Stars\n\
are also hints for\n\
finding them. They are\n\
displayed at the beginning\n\
of each course.\n\
You can collect the Stars\n\
in any order. You won't\n\
find some Stars, enemies\n\
or items unless you select\n\
a specific Star.\n\
After you collect some\n\
Stars, you can try\n\
another course.\n\
We're all waiting for\n\
your help!"))

DEFINE_DIALOG(DIALOG_135, 1, 5, 30, 200, _("\
It was Bowser who stole\n\
the Stars. I saw him with\n\
my own eyes!\n\
\n\
\n\
He's hidden six Stars in\n\
each course, but you\n\
won't find all of them in\n\
some courses until you\n\
press the Cap Switches.\n\
The Stars you've found\n\
will show on each course's\n\
starting screen.\n\
\n\
\n\
If you want to see some\n\
of the enemies you've\n\
already defeated, select\n\
the Stars you recovered\n\
from them."))

// Chao in basement
DEFINE_DIALOG(DIALOG_136, 1, 3, 30, 200, _("\
Chaaaao....\n\
\n\
\n\
(Henlo miss crem. \n\
Habby... birth... \n\
love u)"))

DEFINE_DIALOG(DIALOG_137, 1, 6, 30, 200, _("\
Thanks, Mario! The castle\n\
is recovering its energy\n\
as you retrieve Power\n\
Stars, and you've chased\n\
Bowser right out of here,\n\
on to some area ahead.\n\
Oh, by the by, are you\n\
collecting coins? Special\n\
Stars appear when you\n\
collect 100 coins in each\n\
of the 15 courses!"))

DEFINE_DIALOG(DIALOG_138, 1, 3, 30, 200, _("\
Down: Underground Lake\n\
Left: Black Hole\n\
Right: Hazy Maze (Closed)"))

DEFINE_DIALOG(DIALOG_139, 1, 6, 30, 200, _("\
Above: Automatic Elevator\n\
Elevator begins\n\
automatically and follows\n\
pre-set course.\n\
It disappears\n\
automatically, too."))

DEFINE_DIALOG(DIALOG_140, 1, 6, 30, 200, _("\
Elevator Area\n\
Right: Hazy Maze\n\
/// Entrance\n\
Left: Black Hole\n\
///Elevator 1\n\
Arrow: You are here"))

DEFINE_DIALOG(DIALOG_141, 1, 5, 150, 200, _("\
You've recovered one of\n\
the stolen Power Stars!\n\
Now you can open some of\n\
the sealed doors in the\n\
castle.\n\
Try the Princess's room\n\
on the second floor and\n\
the room with the\n\
painting of Whomp's\n\
Fortress on Floor 1.\n\
Bowser's troops are still\n\
gaining power, so you\n\
can't give up. Save us,\n\
Mario! Keep searching for\n\
Stars!"))

DEFINE_DIALOG(DIALOG_142, 1, 5, 150, 200, _("\
You've recovered three\n\
Power Stars! Now you can\n\
open any door with a 3\n\
on its star.\n\
\n\
You can come and go from\n\
the open courses as you\n\
please. The enemies ahead\n\
are even meaner, so be\n\
careful!"))

DEFINE_DIALOG(DIALOG_143, 1, 6, 150, 200, _("\
You've recovered eight of\n\
the Power Stars! Now you\n\
can open the door with\n\
the big Star! But Bowser\n\
is just ahead...can you\n\
hear the Princess calling?"))

DEFINE_DIALOG(DIALOG_144, 1, 6, 150, 200, _("\
You've recovered 30\n\
Power Stars! Now you can\n\
open the door with the\n\
big Star! But before you\n\
move on, how's it going\n\
otherwise?\n\
Did you pound the two\n\
columns down? You didn't\n\
lose your hat, did you?\n\
If you did, you'll have to\n\
stomp on the condor to\n\
get it back!\n\
They say that Bowser has\n\
sneaked out of the sea\n\
and into the underground.\n\
Have you finally\n\
cornered him?"))

DEFINE_DIALOG(DIALOG_145, 1, 6, 150, 200, _("\
You've recovered 50\n\
Power Stars! Now you can\n\
open the Star Door on the\n\
third floor. Bowser's\n\
there, you know.\n\
\n\
Oh! You've found all of\n\
the Cap Switches, haven't\n\
you? Red, green and blue?\n\
The Caps you get from the\n\
colored blocks are really\n\
helpful.\n\
Hurry along, now. The\n\
third floor is just ahead."))

DEFINE_DIALOG(DIALOG_146, 1, 6, 150, 200, _("\
You've found 70 Power\n\
Stars! The mystery of the\n\
endless stairs is solved,\n\
thanks to you--and is\n\
Bowser ever upset! Now,\n\
on to the final bout!"))

DEFINE_DIALOG(DIALOG_147, 1, 5, 30, 200, _("\
Are you using the Cap\n\
Blocks? You really should,\n\
you know.\n\
\n\
\n\
To make them solid so you\n\
can break them, you have\n\
to press the colored Cap\n\
Switches in the castle's\n\
hidden courses.\n\
You'll find the hidden\n\
courses only after\n\
regaining some of the\n\
Power Stars.\n\
\n\
The Cap Blocks are a big\n\
help! Red for the Wing\n\
Cap, green for the Metal\n\
Cap, blue for the Vanish\n\
Cap."))

DEFINE_DIALOG(DIALOG_148, 1, 6, 30, 200, _("\
Snowman Mountain ahead.\n\
Keep out! And don't try\n\
the Triple Jump over the\n\
ice block shooter.\n\
\n\
\n\
If you fall into the\n\
freezing pond, your power\n\
decreases quickly, and\n\
you won't recover\n\
automatically.\n\
//--The Snowman"))

DEFINE_DIALOG(DIALOG_149, 1, 3, 30, 200, _("\
Welcome to\n\
Princess Toadstool's\n\
secret slide!\n\
There's a Star hidden\n\
here that Bowser couldn't\n\
find.\n\
When you slide, press\n\
forward to speed up,\n\
pull back to slow down.\n\
If you slide really\n\
fast, you'll win the Star!"))

DEFINE_DIALOG(DIALOG_150, 1, 5, 30, 200, _("\
Waaaa! You've flooded my\n\
house! Wh-why?? Look at\n\
this mess! What am I\n\
going to do now?\n\
\n\
The ceiling's ruined, the\n\
floor is soaked...what to\n\
do, what to do? Huff...\n\
huff...it makes me so...\n\
MAD!!!\n\
Everything's been going\n\
wrong ever since I got\n\
this Star...It's so shiny,\n\
but it makes me feel...\n\
strange..."))

DEFINE_DIALOG(DIALOG_151, 1, 4, 30, 200, _("\
I can't take this\n\
anymore! First you get\n\
me all wet, then you\n\
stomp on me!\n\
Now I'm really, really,\n\
REALLY mad!\n\
Waaaaaaaaaaaaaaaaa!!!"))

DEFINE_DIALOG(DIALOG_152, 1, 3, 30, 200, _("\
Owwch! Uncle! Uncle!\n\
Okay, I give up. Take this\n\
Star!\n\
Whew! I feel better now.\n\
I don't really need it\n\
anymore, anyway--\n\
I can see the stars\n\
through my ceiling at\n\
night.\n\
They make me feel...\n\
...peaceful. Please, come\n\
back and visit anytime."))

DEFINE_DIALOG(DIALOG_153, 1, 4, 30, 200, _("\
Hey! Who's there?\n\
What's climbing on me?\n\
Is it an ice ant?\n\
A snow flea?\n\
Whatever it is, it's\n\
bugging me! I think I'll\n\
blow it away!"))

DEFINE_DIALOG(DIALOG_154, 1, 5, 30, 200, _("\
Hold on to your hat! If\n\
you lose it, you'll be\n\
easily injured. If you\n\
lose it, look for it in the\n\
course where you lost it.\n\
Speaking of lost, the\n\
Princess is still stuck in\n\
the walls somewhere.\n\
Please help, Mario!\n\
\n\
Oh, you know that there\n\
are secret worlds in the\n\
walls as well as in the\n\
paintings, right?"))

DEFINE_DIALOG(DIALOG_155, 1, 6, 30, 200, _("\
Thanks to the power of\n\
the Stars, life is\n\
returning to the castle.\n\
Please, Mario, you have\n\
to give Bowser the boot!\n\
\n\
Here, let me tell you a\n\
little something about the\n\
castle. In the room with\n\
the mirrors, look carefully\n\
for anything that's not\n\
reflected in the mirror.\n\
And when you go to the\n\
water town, you can flood\n\
it with a high jump into\n\
the painting."))

DEFINE_DIALOG(DIALOG_156, 1, 5, 30, 200, _("\
The world inside the\n\
clock is so strange!\n\
When you jump inside,\n\
watch the position of\n\
the big hand!"))

DEFINE_DIALOG(DIALOG_157, 1, 5, 30, 200, _("\
Watch out! Don't let\n\
yourself be swallowed by\n\
quicksand.\n\
\n\
\n\
If you sink into the sand,\n\
you won't be able to\n\
jump, and if your head\n\
goes under, you'll be\n\
smothered.\n\
The dark areas are\n\
bottomless pits."))

DEFINE_DIALOG(DIALOG_158, 1, 6, 30, 200, _("\
1. If you jump repeatedly\n\
and time it right, you'll\n\
jump higher and higher.\n\
If you run really fast and\n\
time three jumps right,\n\
you can do a Triple Jump.\n\
2. Jump into a solid wall,\n\
then jump again when you\n\
hit the wall. You can\n\
bounce to a higher level\n\
using this Wall Kick."))

DEFINE_DIALOG(DIALOG_159, 1, 6, 30, 200, _("\
3. If you stop, press [Z]\n\
to crouch, then jump, you\n\
can perform a Backward\n\
Somersault. To do a Long\n\
Jump, run fast, press [Z],\n\
then jump."))

DEFINE_DIALOG(DIALOG_160, 1, 4, 30, 200, _("\
Press [B] while running\n\
fast to do a Body Slide\n\
attack. To stand while\n\
sliding, press [A] or [B]."))

#ifdef VERSION_EU
#define KEEP_ON_PLAYING ".."
#else
#define KEEP_ON_PLAYING "\n\
We want you to keep on\n\
playing, so we have a\n\
little something for you.\n\
We hope that you like it!\n\
Enjoy!!!"
#endif

DEFINE_DIALOG(DIALOG_161, 1, 4, 30, 200, _("\
Mario!!!\n\
It that really you???\n\
It has been so long since\n\
our last adventure!\n\
They told me that I might\n\
see you if I waited here,\n\
but I'd just about given\n\
up hope!\n\
Is it true? Have you\n\
really beaten Bowser? And\n\
restored the Stars to the\n\
castle?\n\
And saved the Princess?\n\
I knew you could do it!\n\
Now I have a very special\n\
message for you.\n\
『Thanks for playing Super\n\
Mario 64! This is the\n\
end of the game, but not\n\
the end of the fun." \
KEEP_ON_PLAYING "』\n\
\n\
The Super Mario 64 Team"))

DEFINE_DIALOG(DIALOG_162, 1, 4, 30, 200, _("\
No, no, no! Not you\n\
again! I'm in a great\n\
hurry, can't you see?\n\
\n\
I've no time to squabble\n\
over Stars. Here, have it.\n\
I never meant to hide it\n\
from you...\n\
It's just that I'm in such\n\
a rush. That's it, that's\n\
all. Now, I must be off.\n\
Owww! Let me go!"))

DEFINE_DIALOG(DIALOG_163, 1, 5, 30, 200, _("\
Noooo! You've really\n\
beaten me this time,\n\
Mario! I can't stand\n\
losing to you!\n\
\n\
My troops...worthless!\n\
They've turned over all\n\
the Power Stars! What?!\n\
There are 120 in all???\n\
\n\
Amazing! There were some\n\
in the castle that I\n\
missed??!!\n\
\n\
\n\
Now I see peace\n\
returning to the world...\n\
Oooo! I really hate that!\n\
I can't watch--\n\
I'm outta here!\n\
Just you wait until next\n\
time. Until then, keep\n\
that Control Stick\n\
smokin'!\n\
Buwaa ha ha!"))

DEFINE_DIALOG(DIALOG_164, 1, 4, 30, 200, _("\
Mario! What's up, pal?\n\
I haven't been on the\n\
slide lately, so I'm out\n\
of shape.\n\
Still, I'm always up for a\n\
good race, especially\n\
against an old sleddin'\n\
buddy.\n\
Whaddya say?\n\
Ready...set...\n\
\n\
//Go//// Don't Go"))

DEFINE_DIALOG(DIALOG_165, 1, 5, 30, 200, _("\
I take no responsibility\n\
whatsoever for those who\n\
get dizzy and pass out\n\
from running around\n\
this post."))

DEFINE_DIALOG(DIALOG_166, 1, 4, 30, 200, _("\
I'll be back soon.\n\
I'm out training now,\n\
so come back later.\n\
//--Koopa the Quick"))

DEFINE_DIALOG(DIALOG_167, 1, 4, 30, 200, _("\
Princess Toadstool's\n\
castle is just ahead.\n\
\n\
\n\
Press [A] to jump, [Z] to\n\
crouch, and [B] to punch,\n\
read a sign, or grab\n\
something.\n\
Press [B] again to throw\n\
something you're holding."))

DEFINE_DIALOG(DIALOG_168, 1, 5, 30, 200, _("\
Hey! Knock it off! That's\n\
the second time you've\n\
nailed me. Now you're\n\
asking for it, linguine\n\
breath!"))

DEFINE_DIALOG(DIALOG_169, 1, 4, 30, 200, _("\
Keep out!\n\
That means you!\n\
Arrgghh!\n\
\n\
Anyone entering this cave\n\
without permission will\n\
meet certain disaster."))

DEFINE_DIALOG(MWISP_CASTLE, 1, 4, 30, 200, _("\
Hello there, Miss. I'm a\n\
Magenta Wisp sent here as\n\
a guide for the ones above.\n\
\n\
My fellow brethren are all\n\
located in all the main \n\
stages of this castle. \n\
\n\
We will give you the names\n\
of the song in the level \n\
as well as creator credits\n\
if it's certain midis. \n\
There's also the few \n\
White Wisp next to certain\n\
individuals.\n\
\n\
They'll help to explain\n\
the strange fellows they're\n\
next to and why they're\n\
here.\n\
There's another Magenta \n\
Wisp in the basement that\n\
will actually give you the\n\
song info of the castle.\n\
I'm just here to give you \n\
an idea. Keep an eye out,\n\
Miss!"))

//Music Credits, Castle
DEFINE_DIALOG(MWISP_CASTLE2, 1, 6, 30, 200, _("\
Music used:\n\
Title Music:\n\
-Sonic Advance 2-\n\
Leaf Forest Prototype\n\
-- Gameboy Advance\n\
Ori. Midi by: King Meteor\n\
File Select:\n\
-Sonic Jam-\n\
Museum Theme\n\
-- Saturn\n\
Ori. Midi by: \n\
-Name Unknown-\n\
Castle Hub:\n\
-Sonic Advance-\n\
Ice Mountain Act 1\n\
-- Gameboy Advance\n\
Composed by: MrGreenThunder\n\
\n\
Boss Battle: \n\
-Sonic Mania-\n\
Eggman 1 ~ Ruby Delusions\n\
-- Various Platforms\n\
\n\
\n\
Endless Stairs: \n\
-Sonic 2-\n\
Death Egg Zone\n\
-- Genesis-Megadrive\n\
Ori. Midi by: \n\
Hunt 'Sage' Bridges\n\
Vanish/Wing Locket:\n\
-Sonic 3 and Knuckles-\n\
Unused Song\n\
Ori. Midi from:\n\
Sonic and Knuckles \n\
Collection (PC)\n\
Metal Locket:\n\
-Sonic 3 and Knuckles-\n\
Chrome Gadget Zone\n\
--Genesis-MegaDrive\n\
Ori. Midi by:\n\
-Name Unknown-\n\
Star Spawn:\n\
-Sonic Advance-\n\
Chaos Emerald\n\
--Gameboy Advance\n\
Ori. Midi by: Steve1\n\
\n\
Star Get:\n\
-Sonic Advance-\n\
Act 1 Complete\n\
--Gameboy Advance\n\
Ori. Midi by: MaliceX"))

//Music Credits, Bob
DEFINE_DIALOG(MWISP_BOB, 1, 4, 30, 200, _("\
Music used:\n\
-NiGHTS Journey of Dreams-\n\
Eloquent Echo: Fluffy Catch\n\
-- Wii"))

//Music Credits, Wf
DEFINE_DIALOG(MWISP_WF, 1, 4, 30, 200, _("\
Music used:\n\
-Sonic Adventure-\n\
The Air - Windy Valley 3\n\
-- Dreamcast"))

//Music Credits, Jrb
DEFINE_DIALOG(MWISP_JRB, 1, 4, 30, 200, _("\
Music used:\n\
-Sonic CD (EU-JP)-\n\
Tidal Tempest - Present\n\
-- SEGA CD"))

//Music Credits, Ccm
DEFINE_DIALOG(MWISP_CCM, 1, 4, 30, 200, _("\
Music used:\n\
-Sonic Lost World-\n\
Snowball Waltz\n\
-- Wii U"))

//Music Credits, bbh
DEFINE_DIALOG(MWISP_BBH, 1, 5, 30, 200, _("\
Music used:\n\
Main Area: \n\
-Billy Hatcher 'n the Giant Egg-\n\
Odd March\n\
-- Nintendo GameCube\n\
Merry-Go-Round:\n\
-Knuckles' Chaotix-\n\
Child's Song\n\
-- 32X"))

//Music Credits, hmc
DEFINE_DIALOG(MWISP_HMC, 1, 4, 30, 200, _("\
Music used:\n\
-Sonic Adventure-\n\
Dilapidated Way - Casinopolis\n\
-- Dreamcast"))

//Music Credits, lll
DEFINE_DIALOG(MWISP_LLL, 1, 5, 30, 200, _("\
Music used:\n\
Main Area: \n\
-Sonic 3D Blast-\n\
Volcano Valley Act 1\n\
-- Genesis\n\
Volcano:\n\
-Sonic Adventure-\n\
Red Hot Skull - Red Mountain\n\
-- Dreamcast"))

//Music Credits, ssl
DEFINE_DIALOG(MWISP_SSL, 1, 5, 30, 200, _("\
Music used:\n\
Main Area: \n\
-Sonic Lost World-\n\
Desert Ruins - Zone 4\n\
-- Wii U\n\
Pyramid:\n\
-Sonic Adventure 2-\n\
Keys the Ruins - Pyramid Cave\n\
-- Dreamcast"))

//Music Credits, ddd
DEFINE_DIALOG(MWISP_DDD, 1, 4, 30, 200, _("\
Music used:\n\
-Sonic Lost World-\n\
Sea Bottom Segue\n\
-- Wii U"))

//Music Credits, sl
DEFINE_DIALOG(MWISP_SL, 1, 6, 30, 200, _("\
Music used:\n\
-Sonic Advance 2-\n\
Ice Paradise Act 1\n\
-- Gameboy Advance\n\
Remastered by:\n\
SuperChaosControl\n\
Igloo:\n\
-Sonic Adventure-\n\
Limestone Cave - Icecap\n\
-- Dreamcast"))

//Music Credits, wdw
DEFINE_DIALOG(MWISP_WDW, 1, 4, 30, 200, _("\
Music used:\n\
-Sonic Adventure-\n\
Tricky Maze - Lost World 1\n\
-- SEGA Dreamcast"))

//Music Credits, ttm
DEFINE_DIALOG(MWISP_TTM, 1, 5, 30, 200, _("\
Music used:\n\
Main Area: \n\
-Sonic Adventure-\n\
Symbol of Thrill - Red Mountain\n\
-- Dreamcast\n\
Secret Slide:\n\
-M n'S 2014 Winter Olympics-\n\
Slide\n\
-- Wii U"))

//Music Credits, thi
DEFINE_DIALOG(MWISP_THI, 1, 5, 30, 200, _("\
Music used:\n\
Main Area: \n\
-Sonic Lost World-\n\
Juice Archipelago\n\
-- Wii U\n\
Inside Mountain:\n\
-Sonic Mania-\n\
Lava Reef Zone Act 2\n\
-- Various Platforms"))

//Music Credits, ttc
DEFINE_DIALOG(MWISP_TTC, 1, 5, 30, 200, _("\
Music used:\n\
-Sonic Unleashed-\n\
Rooftop Run - Night\n\
-- 360-PS3"))

//Music Credits, rr
DEFINE_DIALOG(MWISP_RR, 1, 5, 30, 200, _("\
Music used:\n\
-Sonic Runners-\n\
End of the Summer\n\
-- Mobile"))

//Music Credits, bowser 1
DEFINE_DIALOG(MWISP_BITDW, 1, 5, 30, 200, _("\
Music used:\n\
Stage: \n\
-Sonic Unleashed-\n\
Eggmanland - Day\n\
-- PS3-XBOX 360\n\
Fight:\n\
-Sonic Adventure-\n\
Theme of Dr.EGGMAN\n\
-- Dreamcast"))

//Music Credits, bowser 2
DEFINE_DIALOG(MWISP_BITFS, 1, 5, 30, 200, _("\
Music used:\n\
Stage: \n\
-Sonic 3D Blast (Sat)-\n\
Volcano Valley Act 1\n\
-- Genesis-Megadrive-Saturn\n\
Fight:\n\
-Sonic Heroes-\n\
Egg Emperor\n\
-- Various Platforms"))

//Music Credits, bowser 3
DEFINE_DIALOG(MWISP_BITS, 1, 5, 30, 200, _("\
Music used:\n\
Stage: \n\
-Sonic Mania-\n\
Titanic Monarch Zone Act 2\n\
-- Various Platform\n\
Fight:\n\
-Sonic Mania-\n\
Final Boss ~ Ruby Illusions\n\
-- Various Platforms"))

//Character Credits, Bob
DEFINE_DIALOG(WWISP_LAYLA_KITTEN, 1, 5, 30, 200, _("\
Get ready cause this \n\
is a long two-fer!\n\
Here we goooooo\n\
\n\
\n\
WHO IS!!\n\
-Kitten Lynn-\n\
Age: 8\n\
creator:\n\
Fudger-Nutter\n\
An orphan wanting to have\n\
fun, even if it means the\n\
expense of her foster\n\
father, Jack. \n\
\n\
While Jack is her primary\n\
caretaker, she lives in a \n\
small town that treats her\n\
like their own daughter. \n\
\n\
While still a pain, she\n\
does start to develop\n\
some skills thanks to her\n\
new 'family' and learns \n\
to settle down...barely.\n\
She meets Mark by chance \n\
while he was exploring \n\
outside her home. Seems\n\
like he was able to deal\n\
with her rowdiness.\n\
Occasionally, he'll \n\
bring her to meet Cream\n\
and Vanilla and have little\n\
playdates, much to \n\
Vanilla's horror.\n\
She does have a tendacy to\n\
follow Tails, whether he \n\
likes it or not. She's a\n\
wiley cat, but deep down\n\
she means well. \n\
When she eventually meets\n\
Layla, the two become\n\
inseparable. A couple\n\
of crazy kids having\n\
fun.\n\
The bond between the 4\n\
children ends up being \n\
a huge headache for Mark, \n\
Vanilla and Jack...\n\
Vanilla mostly. \n\
Dev Talk: Her creator has \n\
done a lot for me for so\n\
long, I've wanted to repay\n\
her with something big.\n\
\n\
WHO IS!!!\n\
-Layla the Fox-\n\
Age: 10\n\
Creator: \n\
Magical Poptarts\n\
A young girl who was found \n\
in the woods one day by \n\
Katalina and Mark. She doesn't \n\
talk much about her family \n\
- if she has any. \n\
Despite being alone in\n\
the woods, she seems to\n\
have a knack to survive\n\
the worst. \n\
\n\
Hell, when they found her\n\
initially, she was seen\n\
eating a flicky. Mark was\n\
very impressed while \n\
Katalina was spooked.\n\
Starts to cling around Mark\n\
and is often mistaken for\n\
his daughter. Still, he does\n\
treat her like one, when\n\
she isn't being a hassle. \n\
Has a very cutesy and \n\
childish way of speaking. \n\
Much like Kitten, finds joy\n\
in messing with Mark by \n\
calling him 'Markie'.\n\
Also seems to have a \n\
very odd and unbalanced\n\
skillset. I mean what 10\n\
year old knows how to work\n\
a cannon but can't read???\n\
When she eventually meets\n\
Kitten, the two become\n\
inseparable. A couple\n\
of crazy kids having\n\
fun.\n\
The bond between the \n\
four children ends being \n\
a huge headache for Mark, \n\
Vanilla and Jack...\n\
Vanilla mostly. \n\
Dev Talk: Look, the creator of\n\
her almost destroyed her voice\n\
doing the extra Cream voices so\n\
it's the least I can do.\n\
\n\
Also truth be told, I have a\n\
very soft spot for these two \n\
characters. So....creator's\n\
bias strikes again. "))

//castle, katalina
DEFINE_DIALOG(WWISP_KATALINA, 1, 6, 30, 200, _("\
WHO IS!!!\n\
-Katalina Tannon-\n\
Age: 7\n\
Creator:\n\
Gamebun\n\
\n\
An orphan found by Mark\n\
in a bunker during a travel\n\
up north of the Sonic World.\n\
She says her parents left \n\
her here to protect her.\n\
\n\
After...well an unfortunate \n\
discovery of her parents \n\
whereabouts, Mark decides to \n\
take her along with her back\n\
home to the Rabbits as his\n\
new adopted daughter.\n\
Though still paranoid of what \n\
had happened, he usually leaves\n\
her with Vanilla, and has now \n\
formed a bond with the Rabbit \n\
family, even going as far as\n\
calling Vanilla, 'Mama'.\n\
Cream and she also share a \n\
bond, with Katalina calling\n\
her' Lil' Sis'. Despite this, \n\
Cream is still the braver \n\
of the two.\n\
\n\
Katalina, or as Mark calls her\n\
'Katty', currently resides with\n\
the Rabbits, with her new Papa \n\
making sure she lives a happy \n\
and safe new life. \n\
\n\
Though after seeing Mark and\n\
Cream fight off bad guys, she\n\
wants to toughen up and be a\n\
hero just like her new papa!\n\
\n\
\n\
The blue rose she holds is \n\
actually a gift from Mark. Says\n\
he got it from a pretty little\n\
town in the mountains.\n\
\n\
\n\
Dev Talk: She's in due to creator\n\
bias but I just love the little \n\
blue bun. Still hoping to fix up\n\
some stuff with her in the \n\
future."))

//castle, mark
DEFINE_DIALOG(WWISP_MARK, 1, 6, 30, 200, _("\
WHO IS!!!\n\
-Mark Tannon-\n\
Age: 26\n\
Creator:\n\
Gamebun\n\
\n\
A human from another world who,\n\
after an incident involving his\n\
own set of Stars, ended up in the \n\
Sonic World barely alive. He was \n\
given a fox body upon his arrival\n\
for strange reasons. \n\
He would end up being found and\n\
saved by Cream and Vanilla, \n\
living with them till he felt\n\
ready to go out and find the\n\
stars that brought him here \n\
in the first place.\n\
In his travels, he would run into \n\
Katalina, a snowbunny from the\n\
north, Layla, a strange feral fox \n\
in the forest and Kitten, a....\n\
well she just be weird.\n\
\n\
He's accepted Katalina but the\n\
others, they just kind of cling \n\
to him whether he likes it or not.\n\
Still, he protects them much the \n\
same as he does his actual  \n\
adopted daughter.\n\
When not adventuring, he heads\n\
back to the Rabbit household to\n\
wind down, still hoping to find \n\
his Stars and return home, now \n\
as a Father as well.\n\
\n\
Dev Talk: He gets special cues for \n\
being my oldest character and \n\
this being his most recent revamp.\n\
Still, wanted to keep him as as \n\
far from the actual game stuff.\n\
\n\
Needless to say I failed huh? \n\
Also if you see this but don't \n\
see him, means you prolly found a \n\
way up here without getting all \n\
120 Star Rings huh?"))

//Blaze, JRB
DEFINE_DIALOG(BLAZE_01, 1, 4, 30, 200, _("\
Cream, how good it is to\n\
you see again. I'm sorry\n\
to ask so suddenly but have\n\
you seen Marine?\n\
...Now that I think about,\n\
you two have never met have\n\
you? She's a lil' raccoon\n\
about your age and height.\n\
More of a troublemaker than\n\
you, that's for sure, but she\n\
does mean a lot to me.\n\
\n\
She disappeared when we arrived\n\
and has been gone for a long\n\
while. \n\
\n\
I've noticed the paintings\n\
act like portals so that makes\n\
finding her harder than it needs\n\
to be.\n\
If you do see her, please let\n\
me know the next time you \n\
see me. Take care, Cream."))

//Marine, JRB
DEFINE_DIALOG(MARINE_01, 1, 4, 30, 200, _("\
Oi, this treasure won't\n\
budge! Curse ye, you\n\
mangy old pirates!\n\
\n\
...Who the heck are you??\n\
Maybe you can figure out\n\
this here puzzle. Get it\n\
wrong and you get shocked!\n\
Don't ask how I know this,\n\
I just know! Wanna show \n\
Blaze I can be a great\n\
pirate one day!\n\
Bet she's lookin' for me\n\
right now, ain't she? If ya\n\
see her, tell her I'm fine!"))

DEFINE_DIALOG(MS_001, 1, 6, 30, 200, _("\
-RADICAL HIGHWAY\n\
CLOSED FOR REPAIRS-\n\
\n\
Please take detour through\n\
downtown Central City\n\
in the meantime.\n\
Thanks to a certain fox\n\
and hedgehog, damages are\n\
far more severe than expected.\n\
We thank you for your patience\n\
while we fix the situation."))

DEFINE_DIALOG(MS_002, 1, 4, 30, 200, _("\
Welcome to the adoption\n\
center but unfortunately,\n\
we're temporary closed while\n\
we do some cleaning up.\n\
The vaporeon in the window\n\
escaped and left a mess\n\
all over the place. So much\n\
soggy bread...\n\
I don't get paid enough to\n\
deal with this. Come back\n\
tomorrow and please take \n\
the wonder bread fan."))

// Pocky
DEFINE_DIALOG(MS_003, 1, 5, 30, 200, _("\
Hey! Welcome to the Emerald\n\
Theater! I bet you're here\n\
to watch the re-release of\n\
Chao in Space huh?\n\
\n\
Sadly, the last ticket just\n\
got bought by that cute lil'\n\
fox over there. Aww he was so\n\
red getting them. Probably\n\
for a playdate. How cute!\n\
Well, there's always my\n\
favorite movie, the Sonic OVA!\n\
Still a few tickets left if\n\
you're interested or even\n\
The Bani!\n\
Sorbet, my chao over there,\n\
can help ya out. Have fun\n\
and enjoy the AC!"))

// Tails
DEFINE_DIALOG(MS_004, 1, 5, 30, 200, _("\
Alright I got the tickets,\n\
just have to go as-WHOA\n\
hey Cream! Why are you\n\
all the way out here? Is\n\
Amy here with you??\n\
I wanted to go find you to\n\
see if you wanted to go see\n\
Chao in Space? It's back\n\
in theaters for a short time\n\
and I know it's your favorite!\n\
Huh? Eggman kidnapped your\n\
mom again?! Man, always busy\n\
being a jerk. I'm sure Sonic\n\
is on his way to take care\n\
of it!\n\
In the mean time, you wanna \n\
go watch the movie? ...Bad\n\
time to ask? Y-yeah, of \n\
course! No need to just wait\n\
on Sonic. Good luck, Cream!\n\
(Stupid stupid aaaagh. And I'm\n\
supposed to be the smart \n\
one...)"))

// Sorbet
DEFINE_DIALOG(MS_005, 1, 4, 30, 200, _("\
(Welcome to the Emerald\n\
Theather, I'll be handling\n\
ticket sales today. Anything\n\
you like in particular?\n\
Hmm, sayin' you need to save\n\
your Mama from that Eggman\n\
fella? Hmm, we love to help\n\
but it's just us here today.\n\
Actually kind of busy today\n\
so we gotta keep things\n\
together. You look tough, kiddo.\n\
Don't think you'll need our help.\n\
You know I think those red rings\n\
may help ya on your adventure.\n\
Go bash that egghead, little \n\
bunny. We're rootin' for ya.)"))

// Tammie
DEFINE_DIALOG(MS_006, 1, 4, 30, 200, _("\
Oh hi, you here to jump on some\n\
cars too? Man, I wish. Ever since\n\
that tunnel closed, it's been \n\
pretty quiet around here.\n\
Why would I jump on moving\n\
cars? Cause it's fun, that's why!\n\
But this spot is a pretty cool\n\
spot to just relax.\n\
No one to bother ya except\n\
the occasional city worker. But\n\
they look at me and know to\n\
not mess with me, haha!"))

// Vending Machine
DEFINE_DIALOG(MS_007, 1, 2, 30, 200, _("\
Oh man, this vending machine\n\
is full of a bunch of...\n\
cool car magazines! You bet\n\
Mr. Vector would love these!\n\
Or even Charmy. He does love\n\
that movie about the talking cars."))

// Sign2
DEFINE_DIALOG(MS_008, 1, 5, 30, 200, _("\
Listen for the sounds of\n\
Sweeps in the area. They seem\n\
to be attracted to the \n\
reflective red rings. So if\n\
they're nearby, so is a ring!"))

//Music Credits, Mission Street
DEFINE_DIALOG(MWISP_MS, 1, 4, 30, 200, _("\
Music used:\n\
-Sonic Adventure 2-\n\
Mission Street\n\
-- Dreamcast"))

//Lurk
DEFINE_DIALOG(KB_000, 1, 6, 30, 200, _("\
Welcome to the Trashpit,\n\
what would it b- Well hello\n\
there, sweetie!\n\
How'd you manage to get in?\n\
Are you lost? ... \n\
\n\
You look just like... Oh! \n\
Is your name Cream? I wouldn't \n\
let minors in usually but as \n\
you're as cute as your Mom,\n\
I'll make an exception for  \n\
you, Sweetie!\n\
You may not know this but\n\
your mom and her friends\n\
are frequent guests here. \n\
Let Auntie Lurk look after \n\
you for awhile.\n\
\n\
A lot of my drinks aren't \n\
for you, Honeybun. Though I \n\
do have some carrot jui- hm? \n\
You need to get back to \n\
the castle to save your \n\
mom?\n\
Oh, Sweetie, this is Central \n\
City. No Castles here. You \n\
must of got off at the train \n\
station at Central Square.\n\
\n\
\n\
Next you're gonna tell me you \n\
'warped' here or something like \n\
those two over there... You did?\n\
Well franky, hun, it's not the\n\
strangest thing I've heard since\n\
taking over the bar.\n\
Anyway darling, why don't you \n\
join in our karaoke night! \n\
I'm sure you'll wow the crowd \n\
as much as your mom does with \n\
her lovely voice~\n\
\n\
Feel free to have a look around \n\
and talk to the patrons, \n\
I'll keep an eye on them \n\
for you sweetie. -wink-\n\
And don't worry, sweetie, I'm \n\
sure your mom is fine!\n\
She keeps those pals of hers\n\
in check and has the patience \n\
of a saint. She's a lot \n\
stronger than you think and\n\
you should be proud of that.\n\
\n\
Make sure you behave yourself \n\
and don't go wondering off. \n\
Check around some objects to\n\
learn a few things!\n\
See ya around honeybun~"))

//Sage - Bar
DEFINE_DIALOG(KB_001, 1, 2, 30, 200, _("\
...\n\
\n\
Don't bother me right\n\
now, Earflops."))

//Bump - Bar
DEFINE_DIALOG(KB_002, 1, 5, 30, 200, _("\
-You listen carefully and \n\
you can kind of make out\n\
some lyrics to various\n\
songs...-\n\
\n\
hold on much longer...\n\
-hic- oneee waay\n\
traaack. Dun dun doooo\n\
do dooo this'll last!\n\
\n\
So many faces...\n\
I've seen them all.\n\
buh buh buh...\n\
as they faaaalllll!!\n\
\n\
I see it, now within my \n\
reach...\n\
it's always been within -hic-\n\
which meeee. \n\
The possibilities...\n\
...\n\
Light the fuse...\n\
da da something...\n\
READY TO BLOW!\n\
\n\
Yeah! I can feel it now!\n\
Just take my hand baybee!!\n\
Gonna reach it!\n\
Reach for those staaaaars..\n\
toooniiiiight. \n\
-Ya know despite everything\n\
she's still having a good time.\n\
And really, for karaoke, that's\n\
all that really matters.- "))

//Marine Goomba - Bar
DEFINE_DIALOG(KB_003, 1, 4, 30, 200, _("\
C'mon, c'mon just a set of\n\ 
sevens pleaaaaase.\n\
...Oh gosh, it's you. How \n\
did you even get here?\n\
Ugh, nevermind that. Look\n\
just don't tell my superiors\n\
that I'm here okay? \n\
\n\
Have you tried dealing with\n\
The Straw Hats?! They don't \n\
mess around!! \n\
\n\
I rather lose my entire bank\n\
account than lose my life...\n\
But I know I gotta go back\n\
out there eventually.\n\
Command says there's three\n\
of them somewhere in these \n\
worlds.\n\
\n\
One in a misty lake,\n\
another in the desert\n\
and one in the sky.\n\
\n\
I know I'll cya later, kid.\n\
Just let me enjoy my time\n\
before I have to deal with\n\
them again... "))

//Marine Goomba 2 - Bar
DEFINE_DIALOG(KB_004, 1, 5, 30, 200, _("\
Aye, child. Do you see the\n\
creature in front of you? \n\
People claim it's a dog\n\
or even some dinosaur...\n\
\n\
...But you would believe \n\
it's a legendary beast living\n\
in the darkness below the ground.\n\
\n\
\n\
I'm grateful the owner here\n\
let me hang up this old \n\
painting of the beast in case\n\
people feel interested in it.\n\
\n\
Only a few have ever seen its\n\
beauty in person, my grandfather\n\
being one of them. The diaries\n\
he left detailing its existance\n\
and beauty.\n\
Sadly he never wrote exactly \n\
where to find the beast but\n\
legend say it's residing in an\n\
underground lake. \n\
\n\
Maybe one day someone will\n\
find the beast and record\n\
their findings for others\n\
to read and discover.\n\
\n\
Till then, I will continue to\n\
spread the tale and maybe\n\
just one day, someone can \n\
witness it for themselves\n\
as well."))

//Bup 1 - Bar
DEFINE_DIALOG(KB_005, 1, 4, 30, 200, _("\
Oh hello there! Strange to see\n\
a kid here but tonight looks\n\
to be a slow one, so the more\n\
the merrier!\n\
It's funny. We were given the\n\
order to leave the castle by\n\
the princess for some party. \n\
Can't beat an early vacation!\n\
But as we were doing one \n\
last inspection in the castle,\n\
this guy and I found a weird\n\
ring in the courtyard.\n\
We got near it and suddenly, we\n\
were in front of this place. \n\
Sure, it's no Isle Defino but\n\
this place is something else.\n\
The barista is nice, the drinks\n\
are great, the locals are \n\
friendly folk and the \n\
atmosphere is incredible!\n\
This deer gal on stage right\n\
now is wonderful!\n\
\n\
\n\
Sure, she's a bit of a  \n\
lightweight and her singing \n\
is iffy but man, she's so cute \n\
and nice. Can't stay mad.\n\
I do wish her pal here wasn't \n\
so ...what's the word for it. \n\
A big meanie? Just be careful\n\
around her.\n\
Anyway, you have fun, kid,\n\
and enjoy your time here!"))

//Bup 2 - Bar
DEFINE_DIALOG(KB_006, 1, 5, 30, 200, _("\
Oh hello! Bet you got here\n\
through some warp ring too huh?\n\
Yeah, no idea when it showed up \n\
but what cha gonna do.\n\
\n\
Oh, did you by chance run into\n\
a Toad with bushy brows in the\n\
basement? Oh man, please don't \n\
tell me he insulted you too?\n\
\n\
Yeah, the rest of us have no\n\
idea why he's that way, even\n\
more so with you furry fellas.\n\
\n\
\n\
Just kind of happened one day\n\
back in London during the\n\
Olympics. When we got back,\n\
he suddenly got real angry\n\
at the rabbits in the garden.\n\
Also would not surprise us\n\
that he stayed at the castle.\n\
He's very committed to his\n\
job.\n\
\n\
The rest of us apologize for\n\
his behavior. We just kind of\n\
leave him to his business. \n\
Maybe he'll relax when we're\n\
all back! Hopefully..."))

//Bait - Bar
DEFINE_DIALOG(KB_007, 1, 3, 30, 200, _("\
Silly rabbit, you won't find \n\
any tricks here. \n\
\n\
Just water, rust, and a \n\
whole lot of nasty, nasty \n\
stuff."))

//Big doll - Bar
DEFINE_DIALOG(KB_008, 1, 3, 30, 200, _("\
~It's a doll of Mr. Big!\n\
Aww, it's so cute and\n\ 
fluffy!!\n\
Wonder how he got one?\n\
I want one of me!!...and\n\
one of Tails and Cheese too!~"))

//Arcade Flvaortext, MVC2 Cab
DEFINE_DIALOG(KB_MVC2, 1, 5, 30, 200, _("\
~Tails took me to an arcade that\n\
had this and I don't know how\n\
he does those crazy moves. Everything\n\
moves so fast, it's exhausting!\n\
\n\
Mr. Mark says he has this in his\n\
world too. But in his own words,\n\
he's 'really awful at figuring\n\
out basic combos'. Still really\n\
likes it though!~"))

//Arcade Flvaortext, CVS2 Cab
DEFINE_DIALOG(KB_CVS2, 1, 5, 30, 200, _("\
~The Chaotix have a machine of \n\
this in their offices. I see Mr.\n\
Espio and Charmy play it all the\n\
time. It looks super complicated\n\
to me.\n\
Mama doesn't want me there when\n\
they play though. Something about\n\
the music being 'dirty'. But it\n\
sounds so cool!~"))

//Arcade Flvaortext, SF3 Cab
DEFINE_DIALOG(KB_SF3, 1, 5, 30, 200, _("\
~Mr. Mark talks about this a lot\n\
oddly enough. Says he 'borrows' a\n\
lot of moves from a character in \n\
this game. Mr. Dudley was his name.\n\
He does look super cool!\n\
He's also weird about it when he \n\
sleeps after playing a bit. Mama \n\
and I sometimes hear him whisper\n\
'Let's go, Justiiiiin' in his sleep.\n\
I need to ask him about that.~"))

//Arcade Flvaortext, Mr. Do Cab
DEFINE_DIALOG(KB_MRDO, 1, 1, 30, 200, _("\
~It's Mr. Do.\n\
...\n\
It's Mr. Do!!~"))

//Arcade Flvaortext, Mappy Cab
DEFINE_DIALOG(KB_MAPPY, 1, 4, 30, 200, _("\
~Oh! Mama loves this game. She\n\
thinks the cats and mouse are\n\
cute. She's also really good at\n\
this. Always get the hi-scores.\n\
I think Pac-Man is a better game\n\
though. Maybe cause I'm just bad \n\
at it. Stupid cute kitties...~"))

//Wisp, Karaoke Bar
DEFINE_DIALOG(MWISP_KB, 1, 5, 30, 200, _("\
Music used:\n\
-Dudley's Theme-\n\
Street Fighter 3:\n\
A New Generation\n\
-- Arcade"))

//Tails Part 2
DEFINE_DIALOG(WP_000, 1, 4, 30, 200, _("\
Cream, good to see ya!! Any\n\
luck with finding your mom?\n\
And I haven't gotten back with\n\
Sonic either, which is strange.\n\
(Glad I found that letter before\n\
calling Sonic. Maybe we can still\n\
have fun but keep the charade.)\n\
\n\
I dunno how you got here but look\n\
at this place! I didn't think they\n\
would be open but we can go ride \n\
some rides and have some sweets!\n\
Maybe even just have a snowball\n\
fight! ...now's not the time? \n\
Right, I understand. I'll go\n\
see what I can do to help you.\n\
(Maybe I can actually help her\n\
without actually getting in the\n\
way. Need to go find Gemerl...)"))

//Jack
DEFINE_DIALOG(WP_001, 1, 4, 30, 200, _("\
Cream? It's nice to see you\n\
but strange to see you all by\n\
yourself. Is your Mom around?\n\
Kidnapped? Really??\n\
(Ahh right...the party...)\n\
\n\
\n\
\n\
Ahh, so you're going out to go\n\
save your mom, huh? She's told me \n\
you've done it before. I have no\n\
doubt you'll save her in no time.\n\
As for me, I wanted to take the \n\
girls to have some fun at the park,\n\
see the Chao races and just relax\n\
in the snowy weather.\n\
When this whole mess is over, \n\
why don't you and Katalina join\n\
us? I know you can use the rest\n\
after this whole journey."))

//Layla-Kitten
DEFINE_DIALOG(WP_002, 1, 4, 30, 200, _("\
-Your friends are having so much\n\
fun in the snow. You wish you could\n\
join them but Mama is still at the\n\
castle!-"))

//Hocus
DEFINE_DIALOG(WP_003, 1, 4, 30, 200, _("\
Man, I had the perfect act planned\n\
but this switch beat me to the \n\
whole disappearing act! Don't \n\
worry, I got a backup plan.\n\
Nothing up my sleeves and nothing\n\
under my hat. With a flick of my \n\
wrist and a tap of my shoes...."))


//Wisp, White Park
DEFINE_DIALOG(MWISP_WP, 1, 4, 30, 200, _("\
Music used:\n\
-Woolen's Theme-\n\
Puzzle Bobble 2\n\
-- Arcade"))

//White Wisp, Jack
DEFINE_DIALOG(WWISP_WP, 1, 4, 30, 200, _("\
Music used:\n\
-Woolen's Theme-\n\
Puzzle Bobble 2\n\
-- Arcade"))

//Sign at Front of Castle
DEFINE_DIALOG(CASTLESIGN, 1, 2, 30, 200, _("\
Welcome!\n\
\n\
To the Castle of\n\
Cream's Mom!\n\
\n\
...and Cream I guess.\n\
I hope you enjoy this little\n\
world I put together.\n\
And the hack of course. \n\
Enjoy -Gamebun"))

//Artist, STAIN GLASS
DEFINE_DIALOG(ARTIST00, 1, 4, 30, 200, _("\
'The Motherly Princess'\n\
Vanilla stain glass\n\
was done by\n\
Zack113"))

//Artist, BOB
DEFINE_DIALOG(ARTIST01, 1, 3, 30, 200, _("\
'Bombs be Marchin' '\n\
This painting was done by\n\
InfiniteBrians"))

//Artist, WF
DEFINE_DIALOG(ARTIST02, 1, 3, 30, 200, _("\
'Jawz of the Tower'\n\
This painting was done by\n\
SketchMeister"))

//Artist, JRB
DEFINE_DIALOG(ARTIST03, 1, 3, 30, 200, _("\
'Utsubo in the Deep'\n\
This painting was done by\n\
InfiniteBrians"))

//Artist, CCM
DEFINE_DIALOG(ARTIST04, 1, 3, 30, 200, _("\
'Chill Chao'\n\
This painting was done by\n\
FlamingGaraco"))

//Artist, LLL
DEFINE_DIALOG(ARTIST05, 1, 3, 30, 200, _("\
'Everburning Empire'\n\
This painting was done by\n\
TheNovika"))

//Artist, WDW
DEFINE_DIALOG(ARTIST06, 1, 3, 30, 200, _("\
'Still in Progress'\n\
This painting was done by\n\
???"))

//Artist, TTM
DEFINE_DIALOG(ARTIST07, 1, 3, 30, 200, _("\
'Ukiki-ing Around'\n\
This painting was done by\n\
TheNovika"))

//Artist, THI
DEFINE_DIALOG(ARTIST08, 1, 3, 30, 200, _("\
'Motobuds'\n\
This painting was done by\n\
GeekofKawaii"))

//Atlas
DEFINE_DIALOG(NTM_000, 1, 4, 30, 200, _("\
Well, you're a new face\n\
around here. Welcome to the\n\
course! I'm simply a trainer\n\
keeping an eye on this hole.\n\
I'm also kind of training \n\
someone but he's up on the third\n\
island. Seems to be alright,\n\
that rookie should be with him.\n\
These motobugs have suddenly\n\
showed up and are causing a mess.\n\
Seems like something you could\n\
take care of no problem.\n\
Just take it easy, kid. Talk to\n\
the fox gal by that cannon and\n\
you'll be on your way. Just don't\n\
forget your Wing Locket.\n\
It's a long way down if you miss. \n\
Thankfully, they set the warps \n\
to bounce you back to the castle, \n\
whatever that means."))

//Tails
DEFINE_DIALOG(NTM_001, 1, 6, 30, 200, _("\
Hey, Cream! I'm still reeling \n\
back from that race we had. I'm\n\
glad Gemerl gave me a chance\n\
to race you.\n\
\n\
\n\
The past day has been really fun\n\
though I do feel a bit bad for\n\
taking time away from your huge\n\
adventure, but I bet you're right\n\
at the very end, aren't you?\n\
\n\
I'll be rooting for you while\n\
you take care of Eggman. I still\n\
don't knoiw why Sonic didn't show \n\
up after I called him but I know\n\
he would've slowed ya down\n\
anyway, hahahaha.\n\
- You're happy that's he's happy, \n\
even if he's being a bit sappy,\n\
but the smiles of your friends\n\
is just as important as saving\n\
Mama.\n\
\n\
You give him a big ol' hug and \n\
a lil' chu~ on the cheek, something\n\
you learned from Amy. That'll\n\
put him in a good mood! Time to\n\
head out and save Mom!-\n\
\n\
\n\
-End of Tails Story-"))

//Floomba NTM
DEFINE_DIALOG(NTM_002, 1, 5, 30, 200, _("\
Oh gosh, I was supposed to\n\
go follow that new guy up there\n\
but he went got there when I\n\
went to the bathroom and I\n\
don't know what to do!\n\
Are motobugs super dangerous?\n\
I've never ran into one myself,\n\
don't see much of them in the\n\
Mushroom Kingdom but I'm but\n\
a lonely floomba...\n\
\n\
Oh gosh..."))

//Johnny
DEFINE_DIALOG(NTM_003, 1, 5, 30, 200, _("\
Man I should've waited for\n\
that yellow goomba. Lost my \n\
ball, don't have extras and\n\
no idea how to get down. Those\n\
'lockets' don't work for me!\n\
Even worse these motobugs just\n\
showed up! I could try and take \n\
them but I wonder they'll \n\
charge me for 'destroying \n\
company equipment'..."))

//Magenta Wisp, Fujiyama
DEFINE_DIALOG(MWISP_NTM, 1, 5, 30, 200, _("\
Music used:\n\
-Fujiyama Oriental\n\ 
Golf Club (Japan)-\n\
Neo Turf Masters\n\
-- Neo Geo"))