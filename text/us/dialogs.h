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

// BoB, Opening.
DEFINE_DIALOG(DIALOG_000, 1, 6, 30, 200, _("\
Holy crud, you're right in \n\
the middle of a battlefield!\n\
Wait, where's the bob-ombs?  \n\
Eh, whatever, check around \n\
for the Star Rings Eggman \n\
stole inside the paintings.\n\
First, talk to the purple\n\
fox gal (press [B] to talk).\n\
She'll clue ya in in what's\n\
happening, and so will her\n\
friend right next to her. \n\
\n\
To read signs: stop, face them\n\
and press [B]. Press [A] or [B]\n\
to scroll ahead. \n\
You can talk to some other\n\
characaters by facing them and\n\
pressing [B]"))

DEFINE_DIALOG(DIALOG_001, 1, 4, 95, 200, _("\
Cream, look out! Layla and I\n\
thought this place would be fun,\n\
but those nasty bombs keeps\n\
on shooting water bombs at us!\n\
And their king is a total jerk!\n\
This whole meadow doesn't belong \n\
to him! Think he owns the whole\n\
dang place...\n\
This meadow's all muddy now\n\
ever since he got his grubby\n\
hands on that Star Ring.\n\
\n\
Bleh, might need another shower\n\
after today. Can you PLEEEEASE\n\
take care of that grumpy bomb?\n\
We'd really apprecaite it!\n\
Just be careful crossing that\n\
bridge. He's on top of the\n\
mountain, can't miss him!"))

// Bob, Layla 1
DEFINE_DIALOG(DIALOG_002, 1, 6, 95, 200, _("\
Hi, Cream, it's been a while.\n\
It's me, Layla, remember? We \n\
met only a few times but I \n\
ate a flicky once!...Oh \n\
Marky told me not to bring that\n\
up anymore.\n\
Anyway, Kitten and I were just\n\
playing here but this mean bomb\n\
guy wanted us off his mountain\n\
like a grumpy grandpa!\n\
\n\
\n\
Just be careful, okay? He's huge\n\
and his bomb army can be just \n\
as nasty. I got hit by one of \n\
those water bombs and it still\n\
hurts! Please, take care okay?"))

//BoB, Kitten 2
DEFINE_DIALOG(DIALOG_003, 1, 4, 95, 200, _("\
YAY! I knew you could do it!!\n\
No more mean nasty grandpa\n\
bomb! We can finally play\n\
in peace!\n\
Though I heard him mention\n\
other big and scary people\n\
in the other lands, each with\n\
Star Rings of their own!\n\
But they're no match for your\n\
bunny-bunness. You'll beat them\n\
down in no time! \n\
\n\
Oh yeah, go talk to Layla.\n\
She's setting up the cannons\n\
for you to use. Then you can\n\
really go WOOSH!! Bye, Cream!"))

//bob, Layla Act 2+
DEFINE_DIALOG(DIALOG_004, 1, 5, 95, 200, _("\
Hehe, I knew you could\n\
get rid of that mean grandpa\n\
bomb! Now Kitten and I can\n\
play again!\n\
\n\
I do have something that can\n\
help you...tadaa!! I can operate\n\
the cannons for you! I can ready \n\
them so you can go WHOOOOOOSH\n\
and pretend you're flying!\n\
Just make sure you're wearing\n\
a helmet or something...but\n\
cats land on their feet and\n\
foxes uhhh...something something\n\
it'll be fine!"))

//Bob, Gemerl before race
DEFINE_DIALOG(DIALOG_005, 1, 5, 30, 200, _("\
Well well, nice to see you're\n\
doing good, Cream and Cheese.\n\
Heard you defeated the King\n\
Bob-omb with ease, nicely \n\
done!\n\
I figure I check out this place\n\
to see if I can find a lead on\n\
Eggman but it got me thinking:\n\
How about we have a little \n\
race to the top of the mountain?\n\
Think of it as a little test.\n\
I know you two are good but\n\
if you can't beat me in a simple\n\
race, how good are you against\n\
Eggman?\n\
When I say go, the race begins.\n\
What do you say?\n\
\n\
\n\
//Go!////Don't Go"))

//bob, Gemerl catches you cheating
DEFINE_DIALOG(DIALOG_006, 1, 4, 30, 200, _("\
I never thought you stooped to\n\
that level. Your Mom would be\n\
very upset if she ever learned\n\
about this..."))

//bob, Beating Gemerl
DEFINE_DIALOG(DIALOG_007, 1, 4, 30, 200, _("\
You two never cease to \n\
impress me. Your mom would be\n\
proud! Speaking of, I know\n\
you'll save her in no time!\n\
I'll keep scouting around the\n\
other levels. I'm sure we'll \n\
bump into each other down the\n\
line, so don't worry.\n\
In the meantime, Take this \n\
Star Ring I found for besting\n\
me. You've earned it!!"))

// bob, Sign before chain chomp/moon mech
DEFINE_DIALOG(DIALOG_008, 1, 4, 30, 200, _("\
HEY, KEEP AWAY FROM\n\
MY MOON MECH!! Get \n\
a better gaze by pressing \n\
[C]^ at a distance.\n\
Yeah, beautiful ain't he?\n\
My pride and joy but \n\
even my baby needs a \n\
time out! \n\
Biting me in the bum like\n\
that...THINK YOU WERE GONNA\n\
JUST GET AWAY WITH THAT \n\
HUH??!?! \n\
Whoever reads this: think\n\
you can grab that number\n\
ring on the stake? Haha...\n\
good luck there buddy. \n\
Have fuuun...\n\
\n\
\n\
---Zazz"))

//thi, Tails Part 3, before race 2
DEFINE_DIALOG(DIALOG_009, 1, 5, 30, 200, _("\
Haha, didn't expect me did\n\
ya, Cream? I asked Gemerl if\n\
I could take his place for this\n\
race! Think you can beat me?\n\
\n\
I promise not to hold back\n\
either! First one around the \n\
corner and past the winds is\n\
the winner!\n\
\n\
The goal is in\n\
Windswept Valley.\n\
Ready?\n\
\n\
//Go//// Don't Go"))

//totwc, hitting red switch
DEFINE_DIALOG(DIALOG_010, 1, 4, 30, 200, _("\
You've stepped on the\n\
Wing Locket Switch. Wearing\n\
the Wing Locket, you can\n\
soar through the sky.\n\
Now Wing Lockets will pop\n\
out of all the red capsules\n\
you find.\n\
\n\
Would you like to Save?\n\
\n\
//Yes////No"))

//cotmc, hitting green switch
DEFINE_DIALOG(DIALOG_011, 1, 4, 30, 200, _("\
You've just stepped on\n\
the Metal Locket Switch!\n\
The Metal Locket makes\n\
Cream invincible.\n\
Now Metal Lockets will\n\
pop out of all of the\n\
green capsules you find.\n\
\n\
Would you like to Save?\n\
\n\
//Yes////No"))

//vcutm, hitting green switch
DEFINE_DIALOG(DIALOG_012, 1, 4, 30, 200, _("\
You've just stepped on\n\
the Vanish Locket Switch.\n\
The Vanish Locket makes\n\
Cream disappear.\n\
Now Vanish Lockets will pop\n\
from all of the blue\n\
capsules you find.\n\
\n\
Would you like to Save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_013, 1, 5, 30, 200, _("\
You've collected 100\n\
rings! Cream gains more\n\
courage from the castle.\n\
Do you want to Save?\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_014, 1, 4, 30, 200, _("\
Wow! Another Red Star Ring!\n\
Cream gains more courage\n\
from the power of the\n\
castle.\n\
Do you want to Save?\n\
\n\
//You Bet//Not Now"))

//bob, Wooden Signpost #1
DEFINE_DIALOG(DIALOG_015, 1, 4, 30, 200, _("\
I know you're not one\n\
for violence, but they\n\
will try to hurt you. \n\
Show them your strength!\n\
\n\
\n\
[A] to jump, [B] to punch,\n\
[A] then [B] to kick butt \n\
Also remember to hold back \n\
while in the air to kick, \n\
otherwise you'll go into \n\
a dive!\n\
To pick stuff up, press [B]\n\
when next to it. To throw, \n\
simply press [B] again. \n\
\n\
Show them that strength that\n\
let you carry a chonky \n\
purple cat!"))

//ssl, lll, sl, by the turtle shell
DEFINE_DIALOG(DIALOG_016, 1, 3, 30, 200, _("\
Tell that turtle to shove it,\n\
steal their shell and go\n\
shredding on these poor fools!"))

//bob, bob-omb king before fight
DEFINE_DIALOG(DIALOG_017, 1, 4, 30, 200, _("\
I'm the Big Bob-omb, lord\n\
of all blasting matter,\n\
king of ka-booms the\n\
world over!\n\
...Oh it's just not the same \n\
since that Eggman fellow \n\
replaced my entire army with \n\
these faceless bombs. \n\
I mean they do get the job  \n\
done, I can't complain too\n\
much. I just miss my old army.\n\
My proud and noble troops!\n\
(All this for a child's  \n\
birthday party...) \n\
\n\
\n\
Still, this mountain and Star  \n\
Ring are mine to claim as king  \n\
and no child will tell me\n\
otherwise.\n\
To earn these, you must best \n\
me in battle. Do know that I \n\
will not hold back and I hope \n\
you won't either. \n\
Can you pick me up from\n\
the back and hurl me to\n\
this royal turf? I think\n\
that you cannot!"))

//wf, by plant by spawn
DEFINE_DIALOG(DIALOG_018, 1, 4, 30, 200, _("\
Beanstalks are annoying. When\n\
awake, they are invincible.\n\
Quickly, and quietly, kill them\n\
before they wake up!"))

//castle interior, wall sign on the 2nd floor, Sonic's letter
DEFINE_DIALOG(DIALOG_019, 1, 4, 30, 200, _("\
Hey, Cream! Long time no see.\n\
If you're reading this, I've\n\
already left the castle \n\
sometime ago. \n\
Would've loved to stay and\n\
relax but something had came up\n\
and needed to get it taken care \n\
of. Never a dull day, huh?\n\
Tails told me the situation\n\
and now I'm regreting not \n\
looking around for your mom\n\
but I know you'll find her!\n\
But I'm dragging on and that's\n\
not my style so good luck,\n\
Cream! I'll be rootin' for ya.\n\
-- Sonic T. Hedgehog"))

//Opening Letter
DEFINE_DIALOG(DIALOG_020, 1, 6, 95, 150, _("\
Dear Cream:\n\
Please come to the\n\
castle. I've baked\n\
a cake for you.\n\
Your loving mother--\n\
Princess Vanilla"))

//Eggman Notice at start of game
DEFINE_DIALOG(DIALOG_021, 1, 5, 95, 200, _("\
Welcome all.\n\
This castle is\n\
now property of Eggman\n\
Enterprises.\n\
Now " SCRAM "! "))

DEFINE_DIALOG(DIALOG_022, 1, 2, 95, 200, _("\
You need a key to open\n\
this door."))

DEFINE_DIALOG(DIALOG_023, 1, 3, 95, 200, _("\
This key doesn't fit!\n\
Maybe it's for the\n\
basement..."))

DEFINE_DIALOG(DIALOG_024, 1, 5, 95, 200, _("\
You need Star Ring power to\n\
open this door. Recover a\n\
Star Ring from an enemy\n\
inside one of the castle's\n\
paintings."))

DEFINE_DIALOG(DIALOG_025, 1, 4, 95, 200, _("\
It takes the power of\n\
3 Star Rings to open this\n\
door. You need [%] more\n\
Star Rings."))

DEFINE_DIALOG(DIALOG_026, 1, 4, 95, 200, _("\
It takes the power of\n\
8 Star Rings to open this\n\
door. You need [%] more\n\
Star Rings."))

DEFINE_DIALOG(DIALOG_027, 1, 4, 95, 200, _("\
It takes the power of\n\
30 Star Rings to open this\n\
door. You need [%] more\n\
Star Rings."))

DEFINE_DIALOG(DIALOG_028, 1, 4, 95, 200, _("\
It takes the power of\n\
50 Star Rings to open this\n\
door. You need [%] more\n\
Star Rings."))

DEFINE_DIALOG(DIALOG_029, 1, 5, 95, 200, _("\
To open the door that\n\
leads to the 『endless』\n\
stairs, you need 70\n\
Star Rings.\n\
Bwa ha ha!"))

//wf, act 1 opener with Omochao
DEFINE_DIALOG(DIALOG_030, 1, 6, 30, 200, _("\
Hello! Omochao here,\n\
cutting in with a live\n\
update on Cream's\n\
progress.\n\
\n\
\n\
After conquering the nasty\n\
Big Bob-omb, she continues\n\
exploring the castle\n\
to find her missing mother!\n\
Time for a reminder of\n\
Cream's core mechanic: Flying!\n\
You're able to go into flight \n\
out of the single, double and\n\
triple jump as well as a wall\n\
kick, the sideflip and long jump.\n\
Just press [A] excpet after a \n\
long jump, in which you press [B].\n\
Also remember you can access\n\
your alternate outfits while\n\
in the pause menu. Simply use\n\
the [C] left and right buttons \n\
to change your outfit. \n\
\n\
Remember, you can use the [C]\n\
buttons to handle the camera,\n\
or however you have it.\n\
If the view can't move any\n\
further, you'll hear a \n\
texan go nope at you. \n\
Good luck, Cream! This is \n\
Omochao here, signing off!"))

//thi, Tails Part 3, after beating him
DEFINE_DIALOG(DIALOG_031, 1, 5, 30, 200, _("\
Aww, I lost! Maybe I was just\n\
going easy on you, haha! That\n\
was a lot of fun, Cream. You've\n\
really outdone yourself on this\n\
adventure.\n\
Here's a Star Ring for beating\n\
me. I know you're super close to\n\
saving your Mom, just keep at \n\
it! I'll be seeing ya later."))

//bob, ssl - how to fly
DEFINE_DIALOG(DIALOG_032, 1, 6, 30, 200, _("\
With the Wing Locket, you\n\
regain the ability to fly!\n\
Put it on, then do a \n\
Triple Jump (either when\n\
moving or at a stand-still)\n\
and take off!!\n\
You can get a bigger boost\n\
if you use a cannon when\n\
wearing the Wing Locket!\n\
Use the [C] Buttons to look\n\
around while flying, and\n\
press [Z] to land."))

//opening message on new file
DEFINE_DIALOG(DIALOG_033, 1, 6, 30, 200, _("\
Chao!..err Ciao! You've reached\n\
Princess Peach's castle\n\
via a warp ring. Looks like\n\
it got a bit of a makeover.\n\
\n\
\n\
On the eve of your birthday,\n\
your mom went through all the\n\
effort to organize this whole \n\
event and here you are\n\
blissfully unaware of everything \n\
going on.\n\
Your friends in the castle are\n\
aware and trying to keep the \n\
facade, as best as they can at\n\
least. Still, be wary of the \n\
dangers that lay in front of you.\n\
\n\
The sign in front of you\n\
also has a list of credits\n\
for this hack if you wish\n\
to check it out!\n\
\n\
\n\
Head toward the bridge and\n\
talk to Omochao. Your\n\
adventure in the Mushroom\n\
Kingdom finally begins!"))

//Omochao at the bridge
DEFINE_DIALOG(DIALOG_034, 1, 6, 30, 200, _("\
Hello there, Cream! I see\n\
you're doing fine this morning.\n\
I'll be your camera for\n\
this adventure through the castle.\n\
Just use the [C] buttons to guide\n\
me around!\n\
You can fly like you usually\n\
can. Just press [A] after any\n\
of the three jumps, the side\n\
flip and wall kick. For the\n\
long jump, use [B] then [A].\n\
That way you can still BLJ!\n\
You also have a lot of neat\n\
outfits you can pick from. You\n\
need to come to a complete stop\n\
to swap outfits. Follows the \n\
instructions in the pause menu.\n\
\n\
Most enemies, music, objects \n\
and of course, dialog have been  \n\
updated to fit the theme.\n\
You'll find out more as you\n\
explore the castle. Otherwise,\n\
this is still a vanilla hack.\n\
Your friends are waiting inside\n\
to assist you as they can. But\n\
for the most part, this is\n\
all on you, and they believe\n\
in you, as do I! Good luck,\n\
Cream, and have fun!!"))

//bob, signpost at beginning
DEFINE_DIALOG(DIALOG_035, 1, 5, 30, 200, _("\
There are four camera, or\n\
『[C],』 Buttons. Press [C]^\n\
to look around using the\n\
Control Stick.\n\
\n\
Let's just get this out of\n\
the way: this will be your \n\
worst enemy in this entire\n\
game. Not even Eggman is \n\
this strong.\n\
You can press [R] to center\n\
it behind Cream then press\n\
[C]| to get a wider view. \n\
It's not the best method but\n\
may prove a bit helpful.\n\
Press [R] to return back to\n\
Omochao-cam, and use the [C] \n\
buttons as best as you can.\n\
It's really all I can say. \n\
Best of luck!"))

//wf, on stone platform
DEFINE_DIALOG(DIALOG_036, 1, 5, 30, 200, _("\
OBSERVATION PLATFORM\n\
Press [C]^ to take a look\n\
around. Don't miss\n\
anything!\n\
\n\
Press [R] to switch to\n\
Cream's camera. It\n\
always follows Cream.\n\
Press [R] again to switch\n\
to Omochao's camera.\n\
Pause the game and\n\
switch the mode to 『fix』\n\
the camera in place while\n\
holding [R]. Give it a try!"))

//ccm, chao beats you
DEFINE_DIALOG(DIALOG_037, 1, 2, 30, 200, _("\
(I win! You lose!\n\
Ha ha ha ha!\n\
You're no slouch, but I'm\n\
a better sledder!\n\
Better luck next time!)"))

DEFINE_DIALOG(DIALOG_038, 1, 3, 95, 200, _("\
Reacting to the Star Rings\n\
power, the door slowly\n\
opens."))

//bob, by gates
DEFINE_DIALOG(DIALOG_039, 1, 4, 30, 200, _("\
No visitors allowed,\n\
by decree of\n\
the Big Bob-omb.\n\
\n\
I shall never surrender my\n\
Star Rings, for they hold \n\
the power of the castle in\n\
their glow.\n\
They were a gift from\n\
Eggman, the fine Genius\n\
himself, and they lie well\n\
hidden within my realm.\n\
Not a whisper of their\n\
whereabouts shall leave\n\
my lips. Oh, all right,\n\
perhaps one hint:\n\
Heed the Star Ring names at\n\
the beginning of the\n\
course.\n\
//--The Big Bob-omb"))

//ccm, signs nexts to pits
DEFINE_DIALOG(DIALOG_040, 1, 3, 30, 200, _("\
Warning!\n\
Giant, cold pit below.\n\
Jump at your own risk!"))

//bob, gemerl wins race
DEFINE_DIALOG(DIALOG_041, 1, 3, 30, 200, _("\
Huh, didn't expect to win\n\
that honestly. You going\n\
easy on me, Cream?\n\
Well, either way, I'm always\n\
up for a rematch!! \n\
Better luck next time!"))

//wf, narrow bridges
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
direction of Cream's back.\n\
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

//wf, waking the owl
DEFINE_DIALOG(DIALOG_044, 1, 5, 95, 200, _("\
Whooooo...hey Sonic,\n\
long time no see!\n\
You're looking a bit\n\
creamed colored and smaller\n\
than I last saw you!\n\
I've changed too and I\n\
can even help you fly\n\
up high! Just Press and \n\
hold [A] to grab on! \n\
\n\
Just release [A] when you\n\
wanna drop! I'll take you\n\
wherever you need to go\n\
so long as I can hang\n\
in there. \n\
Watch my shadow! and \n\
grab on, Sonic!"))

DEFINE_DIALOG(DIALOG_045, 1, 6, 95, 200, _("\
Oh gosh, I didn't think\n\
I'd get so tired. Please\n\
lay off the snacks, Sonic.\n\
Press [A] to let go and I'll\n\
be by the tree where you saw\n\
me the first time."))

//inside castle #1
DEFINE_DIALOG(DIALOG_046, 1, 5, 30, 200, _("\
Alright listen up: in this \n\
game there's three types of\n\
jumps that you wanna figure\n\
out. First being: the\n\
Triple Jump.\n\
Run, then jump three times in\n\
a row. Time your jumps. \n\
Think of it like a \n\
hop, skip and then whooooo. \n\
\n\
Also note that you don't have \n\
to have your jump hit the \n\
peak to count. Short jumps\n\
will also count. This will\n\
help on smaller platforms.\n\
Next: the Long Jump. Great\n\
for traversing long distances.\n\
Get a good run and press [Z]\n\
to crouch then [A] to jump\n\
really far. \n\
People have done some big\n\
shenanigans with this \n\
technique. The mightly BLJ\n\
as they call it. \n\
\n\
Requires long jumping backwards\n\
against a specific slope while\n\
mashing [A]. Your velocity will\n\
sky rocket and let you clip \n\
through once solid walls. \n\
Finally: the Wall Kick. Jump\n\
toward a wall then jump again\n\
when you hit said wall. Will \n\
take some practice so don't fret\n\
if you can't get it right away.\n\
Remember: Practice these as you\n\
explore the castle otherwise the\n\
later half is gonna kick your\n\
ass...No really!!"))

//layla, preparing cannon
DEFINE_DIALOG(DIALOG_047, 1, 3, 95, 200, _("\
Hey, you want a turn?\n\
Okay I'll set up the \n\
cannon for you!"))

//ccm, opening stage dialog
DEFINE_DIALOG(DIALOG_048, 1, 4, 30, 200, _("\
Snow Mountain Summit\n\
To the right, a broken\n\
bridge with a teleport.\n\
\n\
To the left: a nice \n\
cottage that leads toward\n\
the bottom of the mountain."))

//ccm, by the wall kick star
DEFINE_DIALOG(DIALOG_049, 1, 5, 30, 200, _("\
Remember that tricky Wall\n\
Kick jump? Well it's finally\n\
time to try it out. Hope \n\
you're ready, otherwise there's \n\
a handy heart pretty close. \n\
Use it to jump from wall to\n\
wall. Press the stick in the \n\
direction you want to bounce\n\
to gain momentum. \n\
Practice makes perfect!"))

//uhhhh
DEFINE_DIALOG(DIALOG_050, 1, 4, 30, 200, _("\
The [Z] button does a lot\n\
of special things. Hold [Z]\n\
while on a slope to slide. \n\
\n\
Pressing [Z] while jumping\n\
to perform a ground pound!\n\
Useful to come to a complete\n\
stop.\n\
Crouching [Z] and then pressing\n\
[A] while at a standstill, \n\
you'll perform a backwards\n\
somersault!\n\
Running while pressing [Z]\n\
then [A] will let you\n\
perform a Long Jump!\n\
\n\
See? It's pretty great!\n\
There's also crawling I \n\
guess. Crouch [Z] and then\n\
just walk. Have fun!"))

//jrb, castle inside, by the pillars
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
through a ring loop or\n\
find a secret point in a\n\
course, a red number will\n\
appear.\n\
If you trigger five red\n\
numbers, a secret Star Ring\n\
will show up."))

//ccm, before the snow slide
DEFINE_DIALOG(DIALOG_054, 1, 5, 30, 200, _("\
Welcome to the snow\n\
slide! Hop on! To speed\n\
up, press forward on the\n\
Control Stick. To slow\n\
down, pull back."))

//ccm, chao in the cottage
DEFINE_DIALOG(DIALOG_055, 1, 4, 30, 200, _("\
(Hey-ey, little buddy,\n\
howzit goin'? Step right\n\
up. You look like a fast\n\
sleddin' kind of gal.\n\
I know speed when I see\n\
it, yes siree--I'm the\n\
world champion sledder,\n\
you know. Whaddya say?\n\
How about a race?\n\
Ready...)\n\
\n\
//Go//// Don't Go"))

//ccm, beating the penguin chao
DEFINE_DIALOG(DIALOG_056, 1, 6, 30, 200, _("\
(You brrrr-oke my record!\n\
Unbelievable! I knew\n\
that you were the coolest.\n\
Now what's your name? Cream?\n\
Well, Cream, you've proven that\n\
you're the fastest around!\n\
I can't award you a gold\n\
medal, but here, take this\n\
Star Ring instead. You've\n\
earned it!)"))

//ccm, mama penguin
DEFINE_DIALOG(DIALOG_057, 1, 4, 30, 200, _("\
Egad! My baby!! Have you\n\
seen my chao??? She's\n\
the most precious chao in\n\
the whole wide world.\n\
(They say she has my\n\
eyes...) I just can't\n\
remember where I left\n\
her.\n\
Let's see...I stopped\n\
for herring and ice cubes,\n\
then I...oohh! I just\n\
don't know!"))

//ccm, mama penguin after getting new chao
DEFINE_DIALOG(DIALOG_058, 1, 4, 30, 200, _("\
You found my precious,\n\
precious chao! Where\n\
have you been? How can\n\
I ever thank you, Cream?\n\
Oh, I do have this...\n\
...Star Ring. Here, take it\n\
with my eternal\n\
gratitude."))

//ccm, mama penguin after getting wrong pengu
DEFINE_DIALOG(DIALOG_059, 1, 4, 30, 200, _("\
That's not my chao! She\n\
looks nothing like her!\n\
Her parents must be\n\
worried sick!"))

//jrb, start of level
DEFINE_DIALOG(DIALOG_060, 1, 5, 30, 200, _("\
Currently the pillars above\n\
the water may cause you to\n\
just die. Did managed to find\n\
what may be causing it so\n\
it may be fixed, not fully sure.\n\
If you wanna play it safe,\n\
I'd recommend just flying to \n\
the star from the boat\n\
when it rises to the surface"))

//sl
DEFINE_DIALOG(DIALOG_061, 1, 5, 30, 200, _("\
Hey, this water is really\n\
REALLY cold! You don't get\n\
health back and you lose\n\
health twice as fast. \n\
Careful!!"))

//hmc, before the smoke pit
DEFINE_DIALOG(DIALOG_062, 1, 3, 30, 200, _("\
The Green Capsule contains an\n\
incredible item called the \n\
Metal Locket.\n\
Holding it, you become immune \n\
to fire, enemy attacks and\n\
then some. \n\
Plus you'll be immune to\n\
the poison gas right in \n\
that pit.\n\
You're still not 100 percent\n\
invincible, as you'll still\n\
take fall damage.\n\
Then There's just\n\
one last problem:\n\
YOU CAN'T SWIM IN IT!!"))

//bbh
DEFINE_DIALOG(DIALOG_063, 1, 5, 30, 200, _("\
Blue Capsules contain the\n\
Vanish Locket, making you\n\
temporary invisible. Use\n\
this to surprise the mean\n\
ol' Red Eye!\n\
Even King Boom Boo will be\n\
fooled--and you can walk\n\
through secret walls like\n\
the blue boo paintings as\n\
well!"))

//bob
DEFINE_DIALOG(DIALOG_064, 1, 5, 30, 200, _("\
Red Capsules contain the \n\
Wing Locket, which let\n\
you fly till its ability\n\
runs out!\n\
\n\
Do a Triple Jump, either\n\
by running or at a stand\n\
still, to soar into the \n\
sky.\n\
\n\
Use the Control Stick to\n\
guide Cream. Pull back to\n\
to fly up, press forward\n\
to nose down, and press [Z]\n\
to land."))

//castle grounds
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
Cream can't breathe under\n\
the water! Return to the\n\
surface for air when the\n\
Power Meter runs low.\n\
\n\
And one last thing: You\n\
can't open doors that\n\
are underwater."))

//bowser stage 1: before pipe
DEFINE_DIALOG(DIALOG_066, 1, 5, 30, 200, _("\
Well, well you've made it\n\
this far, kiddo. In front of \n\
you leads to your first bout\n\
against Eggman. Can't simply \n\
jump on him like before.\n\
Run around him and grab the \n\
mech's tail with the [B] \n\
button. Once you do, grab\n\
hold and swing him around\n\
as hard as you can. \n\
Rotate the Control Stick to\n\
go faster and faster.\n\
The faster you swing him,\n\
the farther he'll fly. \n\
\n\
Use the [C] buttons to look\n\
around. You just need to \n\
throw Eggman into one of the \n\
bombs in the four corners.\n\
\n\
Aim well, then press [B] \n\
again to launch Eggman. \n\
May take some practice but \n\
you'll get the hang of it.\n\
Good luck, Cream!"))

//Eggman 1 Before Defeat
DEFINE_DIALOG(DIALOG_067, 1, 5, 30, 200, _("\
Ohohoho, You've finally arrived!\n\
Trying to save your precious\n\
mommy? Hahahaaa, good luck with\n\
that you little brat!\n\
\n\
(Hmm, should I add more energy\n\
to that? She told me to ham it\n\
up if neccessary, and I DO love\n\
doing that...)\n\
\n\
Meet my latest invention: \n\
The Egg Koopa Mk. 2!!!\n\
Carefully crafted to deal\n\
with runts such as yourself.\n\
\n\
You'll never be able to\n\
swing ME around! A wimp\n\
and coward such as yourself\n\
will never throw me out of here!\n\
Never! Ha!"))

//lll
DEFINE_DIALOG(DIALOG_068, 1, 5, 30, 200, _("\
Oh, God, it's freaking\n\
hot. Fire indeed hot. Touch\n\
the lava or the fire and \n\
you'll be running around\n\
like a mad bun.\n\
But don't fret! You still\n\
have control of Cream--err\n\
mostly. Just try and stay\n\
calm..."))

//castle inside
DEFINE_DIALOG(DIALOG_069, 1, 6, 30, 200, _("\
Yo this game is an N64\n\
game. Can only handle so \n\
much land. So yeah, expect\n\
weird invisible walls. \n\
Not even the PC port can \n\
fix this mess...I think."))

//castle inside
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
all Star Rings in one\n\
course before going on to\n\
the next.\n\
\n\
Return later, when you're\n\
more experienced, to pick\n\
up difficult ones.\n\
\n\
\n\
Whenever you find a Star Ring,\n\
a hint for finding the\n\
next one will appear on\n\
the course's start screen.\n\
\n\
You can, however, collect\n\
any of the remaining\n\
Star Rings next. You don't\n\
have to recover the one\n\
described by the hint."))

//hmc, before the pit
DEFINE_DIALOG(DIALOG_071, 1, 3, 30, 200, _("\
A foul gas fills the dark\n\
chambers belows. Be \n\
careful when navigating.\n\
If you're losing health,\n\
heed for higher ground\n\
to catch your breath.\n\
Circle: Higher ground\n\
Arrow: Entrance-Exit\n\
\n\
Some shelters have doors\n\
that lead to the rest of\n\
the cave."))

//ttm
DEFINE_DIALOG(DIALOG_072, 1, 6, 30, 200, _("\
High winds ahead!\n\
Don't get blown off or you'll \n\
have to climb back up the  \n\
mountain! Don't worry, you \n\
won't lose anything! Not \n\
like you got a hat to lose!!"))

//jrb, by the chests
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

//bob
DEFINE_DIALOG(DIALOG_074, 1, 5, 30, 200, _("\
You can grab on to the\n\
edge of a cliff or ledge\n\
with your fingertips and\n\
hang down from it.\n\
\n\
To drop from the edge,\n\
either press the Control\n\
Stick in the direction of\n\
Cream's back or press the\n\
[Z] Button.\n\
To get up onto the ledge,\n\
either press Up on the\n\
Control Stick or press [A]\n\
as soon as you grab the\n\
ledge to climb up quickly."))

//castle inside, by the PSS
DEFINE_DIALOG(DIALOG_075, 1, 5, 30, 200, _("\
Cream!! This castle is in\n\
great peril. I know that\n\
Eggman is the cause...and\n\
I know that only you can\n\
stop him!\n\
The doors in the castle\n\
that have been sealed by\n\
Eggman can be opened only\n\
with Red Star Rings.\n\
\n\
But there are secret\n\
paths in the castle,\n\
paths that Eggman hasn't\n\
found.\n\
\n\
One of those paths is in\n\
this room, and it holds\n\
one of the castle's Secret\n\
Star Rings!\n\
\n\
Find that Secret Star Ring,\n\
Cream! It will help you\n\
on your adventure. Please,\n\
Cream, you have to\n\
help us!\n\
Retrieve all of the\n\
Red Star Rings in the castle\n\
and free us from this\n\
awful termoil!\n\
Please!"))

//Silver, first time talking to
DEFINE_DIALOG(DIALOG_076, 1, 6, 30, 200, _("\
Aha, there you are!\n\
I was wondering when you\n\
would come running by. It's\n\
been a long while hasn't it,\n\
Cream? Glad to see you're \n\
doing great!\n\
The others have already told\n\
me what's going on and no, I\n\
haven't seen your Mom. But\n\
knowing Eggman, he may have\n\
her at the very top. You're\n\
very close!\n\
Man, I'd love to help but\n\
I wouldn't even know where \n\
to look in this place. It's\n\
huge and I bet you've already \n\
done your fair share of\n\
snooping around.\n\
I can at least give you these\n\
hints from the Toads:\n\
In the room with\n\
the mirrors, look carefully\n\
for anything that's not\n\
reflected in the mirror.\n\
And when you go to the\n\
water town, you can flood\n\
it with a high jump into\n\
the painting.\n\
\n\
\n\
It is nice to see you without\n\
having to trouble you of\n\
the future. When you stop\n\
Eggman, we can just relax.\n\
Oh right! I found this when I \n\
got here. Take it!"))

//castle inside, the pillars
DEFINE_DIALOG(DIALOG_077, 1, 2, 150, 200, _("\
It is decreed that one\n\
shall pound the pillars."))

//wf, by blue ring switch
DEFINE_DIALOG(DIALOG_078, 1, 5, 30, 200, _("\
Break open the Blue Ring\n\
Block by Pounding the\n\
Ground with the [Z] Button.\n\
One Blue Ring is worth\n\
five Yellow Rings.\n\
But you have to hurry!\n\
The rings will disappear\n\
if you're not quick to\n\
collect them! Too bad."))

//ttm, monkey act 2 capture
DEFINE_DIALOG(DIALOG_079, 1, 4, 30, 200, _("\
Owwuuu! Let me go you\n\
rude rabbit! I was only \n\
teasing! Can't you take\n\
a joke?\n\
I'll tell you what, let's\n\
trade. If you let me go,\n\
I'll give you something\n\
really good.\n\
So, how about it?\n\
\n\
//Free him/ Hold on"))

//ttm, monkey act 2 before opening cage
DEFINE_DIALOG(DIALOG_080, 1, 1, 30, 200, _("\
Eeeh hee hee hee!"))

//wdw
DEFINE_DIALOG(DIALOG_081, 1, 4, 30, 200, _("\
The mystery is of Wet\n\
or Dry.\n\
And where does the\n\
solution lie?\n\
The city welcomes visitors\n\
with the depth they bring\n\
as they enter.\n\
In layman's terms\n\
that means check, hit and\n\
push objects to find the \n\
secrets. Have fuuun. "))

//Rude toad, 1st time taking to
DEFINE_DIALOG(DIALOG_082, 1, 6, 30, 200, _("\
Oh...it's you. The one \n\
who just takes over this \n\
castle and changes it to fit \n\
your dumb little theme.\n\
Didn't think there would \n\
still be a toad left but nope!\n\
I'm still here and ain't \n\
leaving. The Princess may rent \n\
the castle as she wishes\n\
but this is what I trained\n\
for!\n\
\n\
I'm not giving up my spot\n\
for some weird jiggly blue\n\
thing or to a pair of freaky \n\
rabbits like yourselves! Just\n\
looking at you makes me sick!\n\
Bleh!!\n\
Here, take this stupid thing\n\
I found here and get out of\n\
my sight. You disgust me. \n\
Go eat a carrot or something,\n\
ugly."))

//Katalina, 1st time taking to
DEFINE_DIALOG(DIALOG_083, 1, 6, 30, 200, _("\
Lil' Sis!! You're finally \n\
here!! I was worried something\n\
had happened to you! I'm glad\n\
you and Cheese are doing \n\
alright.\n\
\n\
I didn't see Mama anywhere\n\
but I saw this strange door\n\
up the stairs. She may be in\n\
there, but I think you may\n\
need a lot of Star Rings.\n\
\n\
...Mr. Mark? OH, you mean \n\
Papa! I think he said he was\n\
on the roof. I'm not sure \n\
why but maybe he thought\n\
Mama would be up there.\n\
\n\
Well I did hear somethings\n\
from the nice Toads:\n\
The minute hand on the\n\
big clock changes the\n\
speed. It rounds to the\n\
nearest quarter hour!\n\
12 stops it completely,\n\
3 moves slowly,\n\
6 makes everything go \n\
crazy,\n\
and 9 goes quickly.\n\
Time your jump!\n\
Good luck, Lil' Sis! I\n\
know you can save Mama!\n\
Here, I found this Star\n\
Ring up here. I know you'll\n\
find a good use for it!"))

//castle inside, pocky pt 1
DEFINE_DIALOG(DIALOG_084, 1, 3, 30, 200, _("\
AAAaaa! Help me, please!\n\
...Thank you very much...\n\
Cream was it??\n\
Eggman stuck this thing\n\
on me and it made me go \n\
crazy.\n\
I don't know how you big\n\
fellas can handle so many\n\
of these things.\n\
So please, take it off my \n\
non-existent hands and\n\
let me relax a bit."))

//bbh
DEFINE_DIALOG(DIALOG_085, 1, 5, 30, 200, _("\
Bunch of spoops hanging \n\
in this here house. Leave \n\
now or deal with the spoops \n\
personally.\n\
Have fuuuuun."))

//bbh
DEFINE_DIALOG(DIALOG_086, 1, 3, 30, 200, _("\
Red Eye can be defeated\n\
by running around it. This\n\
also works against snowmen!"))

//ccm, by the cottage
DEFINE_DIALOG(DIALOG_087, 1, 5, 30, 200, _("\
Come down to enjoy a \n\
nice sled down the mountain!\n\
There's a nice chao waiting\n\
for you down here. \n\
/--Cabin Proprietor"))

//hmc, before the elevator 
DEFINE_DIALOG(DIALOG_088, 1, 5, 30, 200, _("\
Work Elevator\n\
For those who get off\n\
here: Grab the pole to the\n\
left and slide carefully\n\
down."))

//hmc, at the start
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
Ooohohoho!\n\
Welcome to my domain now!\n\
Time to toughen up and \n\
prepare for the worst!\n\
Better watch your step,\n\
Friend!"))

DEFINE_DIALOG(DIALOG_091, 2, 2, 30, 200, _("\
Danger!\n\
Strong Gusts!\n\
But the wind makes a\n\
comfy ride."))

//Eggman 2, before fight
DEFINE_DIALOG(DIALOG_092, 1, 6, 30, 200, _("\
Persistent, aren't you??\n\
No matter, I've made more \n\
improvements to the Egg Koopa.\n\
It's gonna take more than one\n\
bomb to get rid of me!\n\
Bwa ha ha ha!"))

//Eggman 3, before fight
DEFINE_DIALOG(DIALOG_093, 1, 6, 30, 200, _("\
Ha ha ha ha....\n\
Don't think this will be\n\
like last time.\n\
\n\
\n\
\n\
I'm done messing \n\
around. Time to show you\n\
the real power of my \n\
genius! And your little blue \n\
friend is not here to help \n\
you this time, either! \n\
I've made final modifications\n\
and can withstand four strikes\n\
before going down.\n\
O ho ho ho ho!! Better hope your\n\
aim is good, you little runt!\n\
\n\
It's just you and me.\n\
Get ready for the final act.\n\
If you care about your mommy\n\
so much, show me everything\n\
you got!!"))

//ccm, ttm
DEFINE_DIALOG(DIALOG_094, 1, 4, 30, 200, _("\
Get a good run up the\n\
slope! Do you remember\n\
the Long Jump? Run, press\n\
[Z], then jump!"))

//bob
DEFINE_DIALOG(DIALOG_095, 1, 5, 30, 200, _("\
If you've always struggled\n\
in the past, always remember\n\
you have the power to fly!\n\
Can get you out of most \n\
situations!\n\
Though be careful if you slip\n\
or jump off slippery surfaces,\n\
you won't be able to fly from\n\
that. "))

//wf
DEFINE_DIALOG(DIALOG_096, 1, 4, 30, 200, _("\
Remember, you can kill\n\
the beanstalks with a quick\n\
punch or a dive before they\n\
wake up!\n\
The path up ahead is a bit \n\
narrow, so tread ahead \n\
carefully. \n\
\n\
Move slowly,\n\
tread lightly."))

//lll, start of act 1
DEFINE_DIALOG(DIALOG_097, 1, 6, 30, 200, _("\
Crawls are all over the\n\
place, shoving any poor\n\
sap in their path. Show \n\
no mercy, punch back and\n\
try not to burn your butt\n\
in the process!"))

//bbh, start of act 1
DEFINE_DIALOG(DIALOG_098, 1, 3, 95, 200, _("\
-You feel as if hundreds\n\
of eyes are suddenly\n\
glazing at you...-"))

//no idea
DEFINE_DIALOG(DIALOG_099, 1, 5, 95, 200, _("\
Eh he he...\n\
You're mine, now, hee hee!\n\
I'll pass right through\n\
this wall. Can you do\n\
that? Heh, heh, heh!"))

//ttm, monkey at the bottom, first grab
DEFINE_DIALOG(DIALOG_100, 1, 3, 95, 200, _("\
Ukkiki...Wakkiki...kee kee!\n\
Ha! I snagged it!\n\
...Wait what did I snag???"))

//ttm, monkey at the bottom, second grab
DEFINE_DIALOG(DIALOG_101, 1, 4, 95, 200, _("\
Ackk! Let...go...\n\
I don't have your cap or\n\
your locket!! Darn thing\n\
seems to be stuck to you."))

//bbh, sign up front
DEFINE_DIALOG(DIALOG_102, 1, 5, 30, 200, _("\
These ghosts may look nasty, \n\
but they're still a shy bunch. \n\
Give them a good glare back \n\
and they'll fade away. They'll\n\
reappear when you turn back.\n\
You can't hurt them when\n\
they're invisible, so sneak\n\
behind them and give them a \n\
good punch! Ground pound also\n\
works. "))

//ssl
DEFINE_DIALOG(DIALOG_103, 1, 4, 95, 200, _("\
Upon four towers\n\
one must alight...\n\
Then at the peak\n\
shall shine the light..."))

DEFINE_DIALOG(DIALOG_104, 1, 5, 30, 200, _("\
The shadowy star in front\n\
of you is a 『Star Ring\n\
Marker.』 When you collect\n\
all 8 Number Rings, the Star\n\
Ring will appear here."))

// Pink Bob-Omb after opening cannon in BOB
DEFINE_DIALOG(DIALOG_105, 1, 4, 95, 200, _("\
Ready for blastoff! Come\n\
on, hop into the cannon!\n\
\n\
\n\
Oh! I saw a shiny red thing\n\
somewhere high up, you can aim \n\
with the control stick and then\n\
press [A] to nyoom to go get it!\n\
If you're grabby you can\n\
grab on to trees or poles\n\
to land.\n\
Good luck!!\n\
\n\
Oh, and if you see Markie,\n\
tell him I said :3c...\n\
he'll know what it means!"))

//Layla, after opening cannon elsewhere
DEFINE_DIALOG(DIALOG_106, 1, 4, 95, 200, _("\
Ready to fly? Please keep your \n\
arms, legs, and ears inside the \n\
ride at all times.\n\
Have a safe trip!"))

//bbh, defeating a ghost hunt boo
DEFINE_DIALOG(DIALOG_107, 1, 4, 95, 200, _("\
-Laughter fills the \n\
halls after disposing \n\
of the boo. Something\n\
waiting for you?-"))

///bbh, defeating the final ghost hunt boo
DEFINE_DIALOG(DIALOG_108, 1, 3, 95, 200, _("\
-A horrible laugh echos\n\
through the manor. He's\n\
here...-"))

//ccm, snowman's head at bottom of mountain
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

//ccm, snowman's body at top
DEFINE_DIALOG(DIALOG_110, 1, 5, 95, 200, _("\
I need a good head on my\n\
shoulders. Do you know of\n\
anybody in need of a good\n\
body? Please! I'll follow\n\
you if you do!"))

//ccm, snowman complete
DEFINE_DIALOG(DIALOG_111, 1, 4, 95, 200, _("\
Perfect! What a great\n\
new body! Here--this is a\n\
present for you. It's sure\n\
to warm you up."))

//bob
DEFINE_DIALOG(DIALOG_112, 1, 4, 30, 200, _("\
Dying is prolly not a \n\
good idea. Remember to collect\n\
rings to refill your Power \n\
Meter!\n\
The amount you've collected is\n\
displayed on the upper left. \n\
Number Rings collected are \n\
displayed on the pause screen.\n\
You can also recover health by\n\
touching the Spinning Heart.\n\
\n\
\n\
The faster you run through\n\
it, the more health you'll\n\
recover. "))

DEFINE_DIALOG(DIALOG_113, 1, 6, 30, 200, _("\
There are special Lockets in\n\
the red, green and blue\n\
capsules. Step on the\n\
switches in the hidden\n\
courses to activate the\n\
Locket Capsules."))

//wf, big whomp before fight
DEFINE_DIALOG(DIALOG_114, 1, 5, 95, 200, _("\
...ok so when you see the \n\
rabbit girl, make sure t-\n\
OH CRAP, she's here! Gotta\n\
go!!....\n\
...ahem.\n\
Greetings fool! The great\n\
Dr. Eggman has sent we \n\
Eggrobos to find and dispose \n\
of you. The first to do so\n\
will be rewarded greatly.\n\
Hahahaha...man, I'm glad I\n\
commandeered this big one. \n\
There's no way I can lose. \n\
I'm sure to be promoted \n\
for this!\n\
Alright, all systems go.\n\
Prepare yourself!"))

//wf, big whomp after
DEFINE_DIALOG(DIALOG_115, 1, 5, 95, 200, _("\
Oh no...I lost. badly.\n\
Ooooooh, the doctor's not\n\
gonna like this. Star Ring\n\
please help m-"))

//bob, big bob-omb after defeat
DEFINE_DIALOG(DIALOG_116, 1, 5, 95, 200, _("\
N-Noooooo!\n\
Can it be that a\n\
pipsqueak like you has\n\
defused the Bob-omb\n\
king????\n\
You've impressed me, little\n\
rabbit, but you need to \n\
improve fast if you wish to \n\
defeat Eggman and save the \n\
princess.\n\
Though from your glance, I\n\
feel this isn't your first\n\
time dealing with the \n\
mustachioed man.\n\
\n\
I wish thee well on your\n\
journey. Here is the Star \n\
Ring, as promised. Good luck, \n\
little one. You'll need it.\n\
\n\
If you want to see me\n\
again, select this Star Ring\n\
from the menu. For now,\n\
farewell."))

//ssl, wiseman before fight
DEFINE_DIALOG(DIALOG_117, 1, 6, 95, 200, _("\
Who dares summon me to\n\
this realm? And who dares\n\
step in front of me? A \n\
mere child yet again...\n\
\n\
\n\
My name is Wizeman the Wicked,\n\
God of Nightopia and future\n\
ruler of both the dream and\n\
waking world. How I arrived\n\
here is but a minor \n\
set back.\n\
What you're seeing is only\n\
a small taste of my real form.\n\
No need to use my full power\n\
to destroy such an insect.\n\
Now...BEGONE!!"))

//ssl, wiseman after fight
DEFINE_DIALOG(DIALOG_118, 1, 6, 95, 200, _("\
URGH!!\n\
What power inside this\n\
child... Did NiGHTS have a \n\
hand in this as well? No\n\
matter. \n\
\n\
You've piqued my\n\
interest on both this world\n\
and yourself.\n\
Mark my words, child, I \n\
will return. And next time,\n\
I won't hold back."))

//bowser 1, after the fight
DEFINE_DIALOG(DIALOG_119, 1, 6, 30, 200, _("\
Gah! What strength! I \n\
clearly miscalculated this\n\
encounter. Never the less, I\n\
still have the princess\n\
and the Star Rings!!\n\
\n\
Next time, you won't be as\n\
lucky. I'll make the needed\n\
improvements and return \n\
stronger! Until then, \n\
farewell! Gwa ha ha !!"))

//bowser 2, after the fight
DEFINE_DIALOG(DIALOG_120, 1, 4, 30, 200, _("\
Again??!! This hunk of junk\n\
must be on the fritz. This\n\
is what I get for using\n\
old parts.\n\
I will return at full\n\
power, Star Rings giving\n\
me their strength. \n\
\n\
If you wish to seal your \n\
fate, meet me at the top of\n\
the castle. Bring everything\n\
you got!!\n\
I'll be waiting!\n\
Gwa ha ha ha!"))

//bowser 3 less than 120 stars, after the fight
DEFINE_DIALOG(DIALOG_121, 1, 5, 30, 200, _("\
No, I can't believe it!\n\
How could I be defeated like\n\
this?. Bah, no matter.\n\
Don't think this is the\n\
end, little rabbit!\n\
My badniks...defeated yet\n\
again. My mighty mechs\n\
thwarted once more...\n\
I can't stand it!\n\
Hmm...\n\
It's not over yet....\n\
I still have some Rings,\n\
the battle is never truly \n\
over. Till next time, \n\
bwa ha ha ha!!!\n\
\n\
\n\
\n\
\n\
(Oh and...umm...\n\
Happy Birthday...)"))

DEFINE_DIALOG(DIALOG_122, 1, 4, 30, 200, _("\
The Black Hole\n\
Right: Work Elevator\n\
/// Cloudy Maze\n\
Left: Underground Lake"))

DEFINE_DIALOG(DIALOG_123, 1, 4, 30, 200, _("\
Metal Cavern\n\
Right: To Waterfall\n\
Left: Metal Locket Switch"))

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

DEFINE_DIALOG(DIALOG_128, 1, 5, 95, 200, _("\
My dear child, surely you\n\
have some honor! It is against\n\
the royal rules to toss the \n\
king out of the ring! Now\n\
then, En garde!!"))

DEFINE_DIALOG(DIALOG_129, 1, 5, 30, 200, _("\
Welcome to White Park Zone,\n\
home to one of many amusement\n\
parks along with the annual\n\
Chao Races held at the Grand\n\
Chateau!\n\
Don't worry, the Vanish Switch\n\
is still here and hard to miss!\n\
Take your time exploring the\n\
park, enjoy the music and have\n\
fun!"))

DEFINE_DIALOG(DIALOG_130, 1, 5, 30, 200, _("\
Welcome to the Metal Locket\n\
Switch Course! Once you\n\
step on the Locket Switch,\n\
the green capsules will\n\
become solid.\n\
When you turn your body\n\
into metal with the Metal\n\
Locket, you can walk\n\
underwater! Try it!"))

DEFINE_DIALOG(DIALOG_131, 1, 5, 30, 200, _("\
Welcome to the Wing Locket\n\
Course! Step on the red\n\
switch at the top of the\n\
tower, in the center of\n\
the rainbow ring.\n\
When you trigger the\n\
switch, all of the red\n\
capsules you find will\n\
become solid.\n\
\n\
Try out the Wing Locket! Do\n\
the Triple Jump to take\n\
off and press [Z] to land.\n\
\n\
\n\
Pull back on the Control\n\
Stick to go up and push\n\
forward to nose down,\n\
just as you would when\n\
flying an airplane."))

//ccm, racing pengu
DEFINE_DIALOG(DIALOG_132, 1, 4, 30, 200, _("\
(Whoa, Cream, pal, you\n\
aren't trying to cheat,\n\
are you? Shortcuts aren't\n\
allowed.\n\
Now, I know that you\n\
know better. You're\n\
disqualified! Next time,\n\
play fair!)"))

//castle, Chocola
DEFINE_DIALOG(DIALOG_133, 1, 6, 30, 200, _("\
(Cream, you're finally here!!\n\
Mama's been locked up by\n\
Eggman somewhere in the castle.\n\
Everyone is kind of scattered\n\
but we're all doing fine.\n\
\n\
Please recover the Star Rings!\n\
Eggman has most of the castle\n\
sealed but you can use them\n\
to open up doors and passages.\n\
\n\
\n\
The first floor has four rooms,\n\
but they're all locked. Check \n\
out the one next to me since\n\
Eggman didn't lock that one. \n\
Should have a painting of\n\
some bombs. \n\
There's a big door upstairs\n\
with a Star Ring on it. I\n\
think you need eight Star\n\
Rings to open it. Mama\n\
should be in there! You\n\
can do it, Cream!)"))

// Chao by JRB
DEFINE_DIALOG(DIALOG_134, 1, 4, 30, 200, _("\
(Hello, Miss Cream! Just\n\
reminding you of how the\n\
flying ability works in this\n\
game!\n\
Pressing [A] after a single,\n\
double or triple jump will\n\
give you flight! Simply\n\
hold the button to fly!\n\
You can fly as long as you like\n\
till you travel a certain\n\
amount, then you'll gently \n\
float back down.\n\
You can also fly out of a \n\
wall kick and long jump, though\n\
you must press [B] first then\n\
[A] after a long jump.\n\
It's done so you can still\n\
perform the BLJ whenever you\n\
like.\n\
\n\
Also important: flying might\n\
break the set camera in certain\n\
rooms, but triggering a new \n\
camera zone will fix it.\n\
You'll find out exactly what I\n\
mean by flying in this room.\n\
Anyway, have fun messing around\n\
with that, Miss Cream!)"))

DEFINE_DIALOG(DIALOG_135, 1, 2, 30, 200, _("\
(I showed you my Emote \n\
Ball, answer me)"))

DEFINE_DIALOG(DIALOG_136, 1, 3, 30, 200, _("\
(Henlo miss crem. \n\
Habby... birth... \n\
love u)"))

DEFINE_DIALOG(DIALOG_137, 1, 6, 30, 200, _("\
(Thanks, Cream! The castle\n\
is recovering its energy\n\
as you retrieve Star\n\
Rings, and you've chased\n\
Eggman right out of here,\n\
on to some area ahead.\n\
Oh, by the by, are you\n\
collecting rings? Special\n\
Star Rings appear when you\n\
collect 100 rings in each\n\
of the 15 courses!\n\
\n\
Also remember! The strange\n\
rabbit in the basement has two\n\
stars, so make sure to catch it\n\
if you see it again!)"))

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

//when you collect 3 star ring
DEFINE_DIALOG(DIALOG_141, 1, 5, 150, 200, _("\
Congratulations, you found\n\
your first set of Star Rings!\n\
Not too bad for a start, kiddo.\n\
This leave the entire lobby\n\
opened up to ya.\n\
You still have that large door\n\
that's inaccessable, but keep\n\
at it! The world is your \n\
oyster, take whichever path\n\
that feels comfortable with you."))

//when you collect 8 star rings
DEFINE_DIALOG(DIALOG_142, 1, 6, 150, 200, _("\
Good job, Creamio, you found\n\
eight Star Rings! The big \n\
door is finally accessable!\n\
Eggman's waiting for ya...\n\
hold on, do your hear your\n\
mother calling?"))

//when you collect 30 star rings
DEFINE_DIALOG(DIALOG_143, 1, 6, 150, 200, _("\
And that makes thirty\n\
Star Rings! Nicely done, kid,\n\
the big door by the basement\n\
entrance is now open. But\n\
before you go in, how's \n\
things been?\n\
You managed to enter White\n\
Park Zone without any \n\
trouble? Found the Metal \n\
Locket? How's your friend, \n\
Cheese, been? He doing\n\
alright?\n\
Anyway, I heard that Eggman\n\
snuck out to sea and is\n\
hiding underground. \n\
Have you finally\n\
cornered him?"))

//when you collect 50 star rings
DEFINE_DIALOG(DIALOG_144, 1, 6, 150, 200, _("\
Very nice, that's fifty Star\n\
Rings! The top floor is finally\n\
accessable! One final step\n\
before reaching the Egghead\n\
himself.\n\
\n\
Now then, you did find all\n\
the switches for the lockets\n\
did you? They'll come in \n\
handy for those few remaining\n\
Rings.\n\
\n\
The third floor awaits you.\n\
Whenever you feel ready, of\n\
course."))

//when you collect 70 star rings
DEFINE_DIALOG(DIALOG_145, 1, 6, 150, 200, _("\
And here we are, seventy\n\
Star Rings! The endless stairs\n\
are now vanquished, thank to\n\
you! Eggman, better watch out,\n\
here come the bun! Now, on to\n\
the final bout!"))

//when you collect 120 star rings
DEFINE_DIALOG(DIALOG_146, 1, 6, 150, 200, _("\
Well I'll be damned, you\n\
did it! You got all 120\n\
Red Star Rings. Congrats,\n\
little bunny, you really did\n\
leave an impression on me.\n\
\n\
Better to congratulate ya in\n\
person than through this \n\
intercom. I'll be on the roof,\n\
waiting for ya. Cya then, \n\
Cream~"))

DEFINE_DIALOG(DIALOG_147, 1, 5, 30, 200, _("\
Are you using the Locket\n\
Capsules? You really should,\n\
you know.\n\
\n\
\n\
To make them solid so you\n\
can break them, you have\n\
to press the colored Locket\n\
Switches in the castle's\n\
hidden courses.\n\
You'll find the hidden\n\
courses only after\n\
regaining some of the\n\
Red Star Rings.\n\
\n\
The Locket Capsules are a big\n\
help! Red for the Wing\n\
Locket, green for the Metal\n\
Locket, blue for the Vanish\n\
Locket."))

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
Princess Vanilla's\n\
secret slide!\n\
There's a Star Ring hidden\n\
here that Eggman couldn't\n\
find.\n\
When you slide, press\n\
forward to speed up,\n\
pull back to slow down.\n\
If you can slide below \n\
21 seconds, you can earn\n\
another Star Ring!"))

//Wiggler, before fight
DEFINE_DIALOG(DIALOG_150, 1, 5, 30, 200, _("\
Whoa, hey hey what are\n\
you doing!? Can't a former \n\
Eggman goon get some peace?\n\
Just a simple catakiller with\n\
legs now. No spikes!\n\
Ugh, the ceiling's ruined,\n\
the floor is wet, what to do,\n\
what to do...Hey wait a minute,\n\
you're supposed to be that nice \n\
rabbit!\n\
Why you gotta ruin my home!?\n\
Is it cause of this Ring? \n\
I mean it's very nice and \n\
shiny...but it makes me \n\
feel...strange..."))

//wiggler, first hit
DEFINE_DIALOG(DIALOG_151, 1, 4, 30, 200, _("\
Hey, knock it off! Now\n\
you're the one being rude \n\
here. Messing up my house\n\
and now stepping on me!\n\
Time to come out of \n\
retirement, here I come!\n\
Hyaaaaaaaaaaaah!!!"))

DEFINE_DIALOG(DIALOG_152, 1, 3, 30, 200, _("\
Owwch! Uncle! Uncle!\n\
Okay, I give up. Take this\n\
Ring!\n\
I didn't mean to cause \n\
trouble, honest! It's just\n\
hard to break old habits.\n\
But man, I feel so much better.\n\
Something about that Ring...\n\
ugh, just keep it away from me.\n\
Ya know. Maybe the new hole \n\
in the roof isn't such a bad\n\
idea.\n\
I can see the stars at night\n\
now. Feels nice. \n\
\n\
I'm sorry for being so rude.\n\
Please come back and visit \n\
anytime!"))

//sl, snowman who notice you
DEFINE_DIALOG(DIALOG_153, 1, 4, 30, 200, _("\
Hey! Who's there?\n\
What's climbing on me?\n\
Is it an ice ant?\n\
A snow flea?\n\
Whatever it is, it's\n\
bugging me! I think I'll\n\
blow it away!"))

//rude toad, second time talking to
DEFINE_DIALOG(DIALOG_154, 1, 4, 30, 200, _("\
Hey hey, what did I say???\n\
Get lost, you weebaboo\n\
rabbit!! I already gave you\n\
that dumb thing, go bugger off."))

//Silver, second time talking to
DEFINE_DIALOG(DIALOG_155, 1, 6, 30, 200, _("\
Well, it's been a bit quiet\n\
around here but that probably\n\
means you've been kicking \n\
butt, has it? Yeah that's \n\
probably it!\n\
\n\
Here's a little refresher\n\
about the castle that'll\n\
help you: In the room with\n\
the mirrors, look carefully\n\
for anything that's not\n\
reflected in the mirror.\n\
And when you go to the\n\
water town, you can flood\n\
it with a high jump into\n\
the painting.\n\
Keep at it, Cream. You'll\n\
find your mom in no time!"))

//katalina, second time talk to
DEFINE_DIALOG(DIALOG_156, 1, 5, 30, 200, _("\
I know you'll find Mama, \n\
Lil' Sis!! Papa, me and \n\
everyone else believe in you!!\n\
But I can at least try to\n\
help you with that giant clock.\n\
The minute hand on the\n\
big clock changes the\n\
speed. It rounds to the\n\
nearest quarter hour!\n\
\n\
12 stops it completely,\n\
3 moves slowly,\n\
6 moves crazy,\n\
and 9 goes quickly.\n\
Time your jump!"))

//ssl, by the quicksand
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
Dev Talk: The various Cream\n\
Models.\n\
\n\
\n\
\n\
\n\
The original model for Cream\n\
before making an original\n\
model was her Heroes model.\n\
While it did work, after\n\
lowering the poly count, it\n\
just looks...weird. \n\
The current version is based of\n\
a ref image of the current model\n\
used nowadays. Funny enough,\n\
the head model is taken from \n\
her Chronicles model, just\n\
retexured.\n\
Later on, there was talk of\n\
using Marine's rush head but\n\
left the model as is. The \n\
fixed up head is now applied\n\
to Katalina, the bunny by \n\
TTC.\n\
The Alt Creams came in after\n\
just being bored one day and\n\
wanting to give Cream some\n\
extra costumes for the player.\n\
I will admit I did go\n\
overboard with it..."))

DEFINE_DIALOG(DIALOG_159, 1, 6, 30, 200, _("\
Dev Talk: The chosen set of\n\
characters among other things.\n\
\n\
\n\
\n\
\n\
The original set of characters\n\
were chosen mainly due to their\n\
connection to Cream (in my own\n\
AU) as well as just who I \n\
personally wanted to use. \n\
\n\
I wanted to make sure I got\n\
everyone from the Rabbit family\n\
(Cream, Cheese, Vanilla, Chocola,\n\
and Gemerl) and anyone else was\n\
just extra.\n\
\n\
Blaze and Marine for the Rush\n\
connections as well as Mark and \n\
Katalina cause of AU stuff.\n\
The design of the Egg Koopa was \n\
a 'what-if' that I'm glad \n\
came out great. \n\
Course, now there's many more\n\
characters hanging around here,\n\
including guest characters\n\
from friends. Since they're just\n\
visiting, no need to add a White\n\
Wisp for them.\n\
There's a lot of ideas I'd love\n\
to add but don't wanna go too\n\
crazy right now.\n\
I'm hoping to fix up and carry\n\
those into a custom hack where\n\
they can serve a better purpose."))

DEFINE_DIALOG(DIALOG_160, 1, 6, 30, 200, _("\
Dev Talk: Streaming Audio and\n\
the power of self control.\n\
\n\
\n\
\n\
\n\
Streaming audio was a \n\
relatively late addition to the\n\
hack, given the release of\n\
audio-manager v0.1. I did kind of \n\
go a bit crazy with the new \n\
addition, so there were problems.\n\
There was plans to have more \n\
streaming audio but I had appear\n\
to hit the vanilla hard cap so I\n\
had to stop otherwise the game\n\
would crash on start. \n\
\n\
This particular build can now \n\
handle much more .m64 (sequence\n\
files) without it crashing so\n\
there's a bit more variety in\n\
places now. Still a few repeats\n\
as an emergency.\n\
Then there was the other problem\n\
of it being too large. It wouldn't\n\
run on certain emulators and that\n\
needed fixing, hence going back \n\
and changing some songs back to\n\
midis.\n\
The goal was getting it back \n\
under 64 MBs, so that it would \n\
run on retroarch. PJ64 had no\n\
issue but I wanted it running on.\n\
Parallel The end result was what \n\
we have now.\n\
Later turns out that I could\n\
avoid this with not using the\n\
highest possible compression\n\
for each new track. This version,\n\
with more songs, should be smaller\n\
than v1 for example.\n\
For the port to the PC version,\n\
I ran into another weird bug with\n\
streaming audio. The castle inside\n\
music had a strange crackle that\n\
I couldn't figure out. \n\
\n\
Endless Mines was a last minute\n\
decision, though I did picked \n\
a different track for later versions.\n\
Hoping it fits better in the \n\
long run."))

#ifdef VERSION_EU
#define KEEP_ON_PLAYING ".."
#else
#define KEEP_ON_PLAYING "\n\
\n\
We want you to keep on\n\
playing, so we have a\n\
little something for you.\n\
We hope that you like it!\n\
\n\
Enjoy!!!"
#endif

//Mark
DEFINE_DIALOG(DIALOG_161, 1, 5, 30, 200, _("\
Heeey, it's the birthday bun!\n\
If you made it up here, that\n\
means the party is just about \n\
to start!\n\
\n\
Well since you're at the end,\n\
I'm sure you realized this\n\
whole thing has been setup just\n\
for you. \n\
\n\
Though I have a feeling that\n\
Eggman fella wasn't messing \n\
around at the end. But that \n\
didn't stop you, did it??\n\
\n\
The stuff your Mom told\n\
me about you made me a\n\
little skeptic.\n\
\n\
\n\
I know you've done some stuff\n\
with Sonic and pals but you've\n\
never really shown it to me \n\
while I've been here on this.\n\
world.\n\
Like saving your mom before\n\
from Eggman, dealing with\n\
something called the Metal \n\
Overlord...\n\
\n\
...having to fight another bot\n\
like Gemerl and even going head\n\
to head with something called\n\
a Zeti! Man, you kind of done\n\
a lot, haven't ya, kid?\n\
And here we are, you beating his\n\
mechs with ease, and not even\n\
with Cheese, who I thought was\n\
your main muscle. I'm proud \n\
of ya, kid. We all are.\n\
Don't ever change, ya hear?\n\
We need more people like\n\
you in this crazy world.\n\
Oh I'm just dragging on\n\
so let me give you this:\n\
『Thanks for playing Super\n\
Cream 64! This is the\n\
end of the game, but not\n\
the end of the fun. \n\
\n\
The last few years on and\n\
off with this has been special:\n\
from the support to the help\n\
I've gotten. Cannot thank\n\
everyone enough.\n\
I wanna do a big ol' special\n\
thanks to all I can name and\n\
fit in this dialog box so \n\
prepare yourself:\n\
\n\
Wanna give a special thanks to\n\
rom-hack-discussion on the\n\
Simpleflips discord specifically\n\
to the following: \n\
\n\
Cheezepin, Wiseguy, furyiousfight,\n\
anonymousmoose, PablosCorner, \n\
kurethedead, The Sour OG, Rovert,\n\
Arthurtilly, Thodds, CowQuack,\n\
Kaze, Mishu and so much more!!\n\
Also special thanks to the \n\
Sonic specific discords I'm\n\
in for also giving me suggestions \n\
and feedback.\n\
\n\
FlamingGaraco, Vote4Waifu, \n\ 
System509, JohnnyHedgewolf and \n\ 
more for streaming and givin'\n\ 
feedback and suggestions for \n\
later versions.\n\
and ANOTHER special thanks to\n\
my good friends MagicalPoptarts,\n\
Catti, FudgerNutter and the \n\
Roys Boys for all the support!\n\
And also...\n\
Paps, Alonwolf, Sweet Sawft,\n\
GeekofKawaii, Zack113, Blazy,\n\
CuteyTCat, Nullify, Brin,\n\
Toad900, BlueStarGal, MSP169,\n\
BerkStorm1 (I guessssss),\n\
Sketch, Lali, Poodle, Wiz,\n\
Wawaluigi99, RobBoss, Simple\n\
and much MUCH more holy crap.\n\
Whoever I forgot, you know who\n\
you are! Thaaaank yoooou.\n\
It's been a crazy ride and\n\
I'm glad to have this finally\n\
completed, especially with the\n\
additional changes, for real this\n\
time.\n\
I'm gonna take a well needed\n\
break and, hopefully at some\n\
point, I'll use these new assets\n\
to create that custom hack."\
KEEP_ON_PLAYING "』\n\
\n\
Gamebun~\n\
\n\
\n\
As for you, kid, looks like you\n\
have one last thing left to do.\n\
Show that Egghead what you're \n\
made of! You got this, Cream!\n\
Good luck, little bunny-bun!"))

//pocky, second grab
DEFINE_DIALOG(DIALOG_162, 1, 4, 30, 200, _("\
Oh thank goodness you\n\
got me again!! I keep falling\n\
for his schemes like the dum\n\
dum I am.\n\
Please, take this Star Ring\n\
and get it away from me. \n\
I need to get out of this\n\
basement...\n\
I'll make sure to see you\n\
later, Cream! I won't forget \n\
your generousity!! "))

//bowser 3, with 120 stars and defeated
DEFINE_DIALOG(DIALOG_163, 1, 5, 30, 200, _("\
No! Noooo I can't believe \n\
it! Gah, stupid piece of\n\
junk. Ugh, defeated by a \n\
child. And a small one to\n\
boot.\n\
My worthless badniks...giving\n\
up all my Star Rings! WHAT?!\n\
There was more out there?!?\n\
\n\
\n\
That clever princess, hiding\n\
more in the castle itself. \n\
Clearly I should've looked\n\
harder...\n\
\n\
You may have won this fight\n\
but I'll be back! Just you\n\
wait and see what I'll come\n\
up with next. Sayonara, \n\
Cream the Rabbit!\n\
Ho ho, just you wait. Until\n\
then, keep those processors\n\
blastin'!\n\
Bwa ha ha ha!!\n\
\n\
\n\
\n\
\n\
(Oh and...umm...\n\
Happy Birthday...)"))


//ccm, penguin chao at 120 stars
DEFINE_DIALOG(DIALOG_164, 1, 4, 30, 200, _("\
(Cream! What's up, pal?\n\
I haven't been on the\n\
slide lately, so I'm out\n\
of shape.\n\
Still, I'm always up for a\n\
good race, especially\n\
against an old sleddin'\n\
buddy.\n\
Whaddya say?\n\
Ready...set...)\n\
\n\
//Go//// Don't Go"))

//thi
DEFINE_DIALOG(DIALOG_165, 1, 5, 30, 200, _("\
I take no responsibility\n\
whatsoever for those who\n\
get dizzy and pass out\n\
from running around\n\
this post."))

//thi
DEFINE_DIALOG(DIALOG_166, 1, 4, 30, 200, _("\
Meet me on the huge \n\
side of the island. \n\
I'll be waiting!\n\
//--Miles 'Tails' Prower"))

// Game Credits
DEFINE_DIALOG(DIALOG_167, 1, 6, 30, 200, _("\
Welcome to Super Cream 64!\n\
This sign exists purely to act\n\
as the credits so not to include \n\
a huge readme in the file.\n\
\n\
\n\
Asset-Code Creations:\n\
\n\
Getting this one out of the\n\
way:\n\
\n\
\n\
Most assets grabbed from the\n\
Sounds, Models and Textures\n\
Resource\n\
\n\
Red Star Ring sprite:\n\
Fiery\n\
OG HUD sprites by:\n\
EggInk\n\
\n\
Updated HUD sprites, Ring, Power\n\
Meter and other sprites by:\n\
SketchMeister\n\
Various Midis from:\n\
VGMusic.com\n\
\n\
Edited for in-game use:\n\
Gamebun\n\
\n\
Streamed audio originally possible\n\
thanks to sm64-audio-manager\n\
by Arthurtilly\n\
Current files now thanks to \n\
STRM64 by ArcticJaguar725\n\
\n\
Cheese Follow ori. code possible\n\
thanks to Cheezepin and Wiseguy\n\
\n\
Updated Cheese Follow code by:\n\
Alonwoof\n\
\n\
Flight code and mechanics\n\
along with various extra\n\
bits of code by: Alonwoof\n\
\n\
Other minor changes in code \n\
by: Gamebun\n\
External Data for PC port help \n\
by: PeachyPeach\n\
(though this will definitely go\n\
unused, still wanna say thanks)\n\
\n\
\n\
Costume Switch Code only possible\n\
thanks to:\n\
CowQuack\n\
\n\
\n\
\n\
Various Pokemon pics seen in the\n\
castle and Mission Street from:\n\
Gigaboots\n\
\n\
Cream Wanted Poster\n\
by: Nim\n\
New Paintings by: InfiniteBrians,\n\
SketchMeister, FlamingGaraco, \n\
FudgerNutter, TheNovika, \n\
GeekofKawaii And Zack113\n\
\n\
\n\
End cake pic by:\n\
MagicalPoptarts\n\
(Magipoptarts on Twitter)\n\
\n\
\n\
\n\
\n\
Character Thanks:\n\
\n\
\n\
\n\
\n\
Layla the Fox is by:\n\
MagicalPoptarts\n\
\n\
Kitten Lynn and Jack the\n\
Hedgehog by: \n\
FudgerNutter\n\
Pocky the Deer and Sorbet\n\
the Chao by:\n\
GeekofKawaii\n\
\n\
Sweet the Frog by:\n\
Sweet Sawft\n\
Hocus the Hedgehog by:\n\
BadComicDork\n\
\n\
Johnny the Hedgewolf by:\n\
JohnnyHedgewolf\n\
\n\
Bump, Sage, and Lurk \n\
by a bunch of Anons\n\
\n\
Bait the Betta Fish by:\n\
SketchMeister\n\
\n\
Mark and Katalina\n\
Tannon by:\n\
Gamebun\n\
\n\
Tammie (the Imp) by:\n\
FlamingGaraco\n\
I like to thank everyone\n\
whose supported me these \n\
last few years that I've been\n\
on this as well as the other\n\
stuff I've worked on in between.\n\
\n\
Seriously, this means a lot to\n\
me and I'm glad you've enjoyed\n\
this little project of mine. \n\
Enjoy~\n\
\n\
//--Thank You--"))

//wiggler, second hit
DEFINE_DIALOG(DIALOG_168, 1, 5, 30, 200, _("\
Hey! Knock it off! That's\n\
the second time you've\n\
nailed me. Now you're\n\
asking for it, short\n\
stuff!"))

//jrb, cave
DEFINE_DIALOG(DIALOG_169, 1, 4, 30, 200, _("\
Keep out!\n\
That means you!\n\
Arrgghh!\n\
\n\
-there's a bit of scribble\n\
on this sign-\n\
\n\
\n\
'To get the Eel out of the \n\
ship, swim in front of him,\n\
leave then return. He should\n\
be gone'"))

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
File Select:\n\
-Sonic Jam-\n\
Museum Theme\n\
-- Saturn\n\
Ori. Midi by: \n\
-Name Unknown-\n\
Castle Hub:\n\
-One Piece-\n\
Treasure Room\n\
-- Gameboy Advance\n\
\n\
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
Wing Locket:\n\
-Sonic 3 and Knuckles-\n\
Unused Song\n\
Ori. Midi from:\n\
Sonic and Knuckles \n\
Collection (PC)\n\
Vanish Locket:\n\
-Sonic Drift 2-\n\
Rainy Savannah\n\
Ori. Midi by:\n\
-Name Unknown-\n\
\n\
Metal Locket:\n\
-Sonic 3 and Knuckles-\n\
Chrome Gadget Zone\n\
Ori. Midi from:\n\
Sonic and Knuckles \n\
Collection (PC)\n\
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
Ori. Midi by: MaliceX\n\
\n\
Ending Theme:\n\
-Sonic Advance 3-\n\
Ending A\n\
--Gameboy Advance\n\
Ori. Midi by:\n\
-Name Unknown-"))

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
-Sonic Heroes-\n\
Mystic Mansion\n\
-- Various Platforms\n\
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
Ice Paradise Act 2\n\
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
-Sonic 3D Blast-\n\
Rusty Ruins Act 2\n\
-- SEGA Saturn"))

//Music Credits, ttm
DEFINE_DIALOG(MWISP_TTM, 1, 5, 30, 200, _("\
Music used:\n\
Main Area: \n\
-Sonic Adventure-\n\
Symbol of Thrill - Red Mountain\n\
-- Dreamcast\n\
Secret Slide:\n\
-Sonic Generations-\n\
Challenge- Mission 2\n\
-- 360-PS3"))

//Music Credits, thi
DEFINE_DIALOG(MWISP_THI, 1, 5, 30, 200, _("\
Music used:\n\
Main Area: \n\
-Sonic 06-\n\
Wave Ocean\n\
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
-Shadow the Hedgehog-\n\
The Ark\n\
-- Various Systems\n\
Fight:\n\
-Sonic Adventure-\n\
Theme of Dr.EGGMAN\n\
-- Dreamcast"))

//Music Credits, bowser 2
DEFINE_DIALOG(MWISP_BITFS, 1, 5, 30, 200, _("\
Music used:\n\
Stage: \n\
-Sonic 3D Blast\n\
Volcano Valley Act 1\n\
-- Saturn\n\
Fight:\n\
-Sonic Heroes-\n\
Egg Emperor\n\
-- Various Platforms"))

//Music Credits, bowser 3
DEFINE_DIALOG(MWISP_BITS, 1, 5, 30, 200, _("\
Music used:\n\
Stage: \n\
-M & S London 2012-\n\
Koopa Road\n\
-- Wii U\n\
Fight:\n\
-Sonic Mania-\n\
Final Boss ~ Ruby Illusions\n\
-- Various Platforms\n\
\n\
Well, you made it to the\n\
end. It's been nice helping\n\
you out, Miss! Go bash that\n\
Eggman!"))

//Character Credits, Bob
DEFINE_DIALOG(WWISP_LAYLA_KITTEN, 1, 6, 30, 200, _("\
Get ready cause this \n\
is a long two-fer!\n\
Here we goooooo\n\
\n\
\n\
\n\
-Kitten Lynn-\n\
By: FudgerNutter\n\
Age: 7\n\
~A small wiley cat who\n\
causes trouble but means\n\
well~\n\
An orphan wanting to have\n\
fun, even if it means the\n\
expense of her foster\n\
father, Jack, and father-\n\
in-spirit, Mark. \n\
\n\
She, alongside Layla, Katalina\n\
and Cream (on occasion) get \n\
along like long lost sisters\n\
and hang out when they can.\n\
She also has the tedency to\n\
follow Tails around too.\n\
While still a pain, she\n\
does start to develop\n\
some skills thanks to her\n\
new 'family' and learns \n\
to settle down...barely.\n\
Again, she does mean well.\n\
-Layla the Fox-\n\
By: MagicalPoptarts\n\
Age: 8\n\
~A Chao turned Fox who wanted\n\
to live like a person. Still\n\
acts very Chao-ish~\n\
Originally a Chao, she wished\n\
upon a falling star to be\n\
like the people she would see\n\
come to the Chao Garden. Her\n\
wish transformed her into the\n\
purple fox you see before you.\n\
She did end up keeping her \n\
wings, hidden by her hoodie, and\n\
emote ball which only appears\n\
under high emotions. Her friends\n\
help her get by and understand\n\
this new world opened to her.\n\
While her guardians are two dark\n\
chao, she also sees Mark as her\n\
adopted father, clinging to him\n\
when he's around, much to his\n\
annoyance. They get along \n\
pretty well beyond that. "))

//castle, katalina
DEFINE_DIALOG(WWISP_KATALINA, 1, 6, 30, 200, _("\
-Katalina Tannon-\n\
By: Gamebun\n\
Age: 7\n\
~An orphan from the cold \n\
north adopted by Mark, ever so\n\
sweet and helpful~\n\
A scared snow rabbit who\n\
only wants to be loved.\n\
And while she does feel\n\
at home at the orphanage,\n\
she still waits for a\n\
real family.\n\
After being found by Mark\n\
alone in the orphanage, \n\
they travel together to\n\
find out what's happening \n\
in this part of the world,\n\
a story for another day.\n\
After the situation has \n\
been cleared, Mark adopts\n\
her and takes her along \n\
back to Vanilla and Co to\n\
live in peace with her\n\
new family and friends.\n\
Happy with her new life,\n\
she oftens called Vanilla \n\
'Mama' and Cream 'Lil Sis'\n\
like she was always part\n\
of her family.\n\
\n\
A part of her still unknown\n\
to everyone, she too can \n\
use fire magic just like \n\
her foster dad. How she\n\
obtain this power, is still \n\
a mystery.\n\
The blue rose she holds is\n\
a gift from Mark. She says\n\
he got it from a pretty\n\
little town in the\n\
mountains."))

//castle, mark
DEFINE_DIALOG(WWISP_MARK, 1, 6, 30, 200, _("\
-Mark Tannon-\n\
By: Gamebun\n\
Age: 26\n\
~A human from another world, \n\
turned into a fox when arriving\n\
here. Now searching for stars~\n\
A pyromancer who ended up\n\
in this world after chasing a \n\
crook who stole a powerful\n\
set of stars, activating a \n\
portal here and dumping \n\
him into a Chao Garden lake.\n\
He would eventually be saved \n\
by Vanilla and out of her\n\
generousity, is currently \n\
living with her family till \n\
he feels ready to go out \n\
and find those stars.\n\
His eventual travels would\n\
lead him down many roads,\n\
meeting new friends and \n\
discovering what he wants \n\
to do after this whole\n\
ordeal is over.\n\
For what felt like a freak\n\
accident, ending up on this\n\
world would end up doing\n\
wonders for him.\n\
\n\
\n\
If you however don't see anyone\n\
up here, then that means you\n\
got up here without finding\n\
all the Star Rings. In his\n\
own words, 'nice job learning\n\
how to fly, lil' rabbit!' "))

// Amy Dialogue in wf
DEFINE_DIALOG(AMY_01, 1, 5, 30, 200, _("\
Cream, it's good to see\n\
you! I don't supposed I can\n\
ask you a bit of a favor now,\n\
can I?\n\
\n\
See, a little flicky told me\n\
a blue fellow was around here.\n\
And you know what that means\n\
right??\n\
\n\
My darling, Sonic, has to be\n\
around here! And wherever he\n\
goes, I'm right behind him!\n\
You haven't seen him, \n\
have you?\n\
I've kind of ran into \n\
everyone else but not him. \n\
He's always one to showboat \n\
so it's a bit unusual. \n\
\n\
But I'll find him in no time!\n\
Let me know if you see him \n\
somewhere. You take care \n\
little creamy and I'll \n\
see ya later!\n\
(Amy is set to appear only\n\
in certains acts on certain\n\
levels. There is a \n\
pattern so keep an eye \n\
out!)"))

//Amy Dialogue in bbh pt 1
DEFINE_DIALOG(AMY_02, 1, 4, 30, 200, _("\
Cream, why are you here\n\
of all places?! Heck, why\n\
am I even here!?!\n\
\n\
Ooooh, curse you Sonic for\n\
dragging me to this place\n\
like this!\n\
\n\
I dunno about you but I get\n\
this awful feeling of \n\
deja vu and I don't know\n\
why...\n\
The sooner I find him, the\n\
sooner I can get the heck out\n\
of here! I'm hoping you join\n\
me soon..."))

//Amy Dialogue in bbh pt 2
DEFINE_DIALOG(AMY_03, 1, 4, 30, 200, _("\
...Cream, please tell me\n\
you found Sonic cause I \n\
want out of here pronto! \n\
\n\
I think something happened\n\
to me but I can't remember\n\
anything...\n\
\n\
Please say yes....you\n\
haven't?!?! Ok, that's\n\
good enough for me, I'm\n\
getting out of here!\n\
Have fun in this spook\n\
hole, Cream...as soon\n\
as I do one last check."))

//Amy Dialogue in ssl
DEFINE_DIALOG(AMY_04, 1, 5, 30, 200, _("\
Wew, it's hot here. I'd hide\n\
under the shade of this\n\
building but have you seen\n\
what's around here? Not \n\
taking any chances.\n\
My never ending search\n\
continues but with no luck\n\
here either. I assume it's\n\
the same with you huh? Yea,\n\
I'd figured. \n\
He's a crafty hog, that \n\
Sonic, but even he needs to\n\
take a break. And that's \n\
when I'll get him! Ehehehe...\n\
\n\
Hmm? I should take a break\n\
myself? C'mon, Cream, you \n\
know better than that. You\n\
can do that if you want, but \n\
I must continue. \n\
Catch ya later, as always!\n\
And don't forget to bring\n\
some water!"))

//Amy Dialogue in wdw
DEFINE_DIALOG(AMY_05, 1, 5, 30, 200, _("\
This place is weird. The\n\
water level seems to change\n\
at random. I have seen these\n\
weird diamond things around\n\
here.\n\
I...honestly wonder why I'm \n\
here considering Sonic hates\n\
water...\n\
I didn't think this through \n\
didn't I?\n\
It is some weird ruins so\n\
it seemed like a good idea\n\
at the time. Sonic does tend\n\
to go for those places.\n\
The search continues...Hmm.\n\
From the looks of things, \n\
you still haven't seen him \n\
either, huh? You saw something\n\
like Sonic? That doesn't \n\
count, Cream and you know it.\n\
Next spot has to be it, I'm\n\
sure of it! You go on ahead,\n\
I need to figure out where\n\
to go next..."))

//Amy Dialogue in ttc pt 1
DEFINE_DIALOG(AMY_06, 1, 5, 30, 200, _("\
......\n\
\n\
\n\
\n\
\n\
I feel like the biggest\n\
dummy right now. \n\
\n\
\n\
\n\
The little bunny outside \n\
the clock told me everything.\n\
And now I feel like a dumb\n\
stupid moron. \n\
\n\
Cream, I'm so sorry for\n\
getting you invovled in my\n\
wild goose chase. When I\n\
heard about a blue guy \n\
here, I just figured...\n\
Cream, can you forgive me\n\
for making a jerk of myself\n\
on this big adventure \n\
for you?? I understand if \n\
you aren't willing to...\n\
......\n\
\n\
\n\
\n\
\n\
-You don't like seeing your\n\
friends upset so you give her\n\
a big ol' hug and tell her\n\
everything's gonna be okay!-\n\
\n\
.....\n\
\n\
\n\
\n\
\n\
I swear when we're back home,\n\
I'm going to do something \n\
special for you. Just you\n\
wait and see! \n\
\n\
But thank you, Cream, and \n\
again I'm so sorry. Just \n\
give me some time alone\n\
to clear out my head. I'll\n\
talk to you in a bit."))

//Amy Dialogue in ttc pt 2
DEFINE_DIALOG(AMY_07, 1, 5, 30, 200, _("\
Hey, Cream, I'm glad \n\
you're doing alright. And \n\
yeah, I'm feeling much better \n\
now. Again, thank you so \n\
much. \n\
You'd be surprised how much \n\
the sounds of gears turning \n\
and clocks ticking kind of \n\
helps. That and that blue  \n\
bunny. Such a good listener.\n\
I'm just gonna chill here for  \n\
the moment but I'll be there  \n\
for your big moment later, ok? \n\
Do what you gotta do, ya big \n\
ol' hero you!"))

//Blaze, JRB
DEFINE_DIALOG(BLAZE_01, 1, 4, 30, 200, _("\
Cream, how good it is to\n\
you see again. I'm sorry\n\
to ask so suddenly but have\n\
you seen Marine?\n\
...Now that I think about it,\n\
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
see me. Take care, Cream.\n\
\n\
(Blaze and Marine are usually\n\
found together, so if you see\n\
one, the other can't be too far.\n\
Keep an eye out!"))

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

//Blaze, HMC
DEFINE_DIALOG(BLAZE_02, 1, 5, 30, 200, _("\
Oh, Cream, I didn't think\n\
I see you so soon. You saw \n\
Marine?? She says she's doing\n\
okay then. Well, that's good\n\
to hear.\n\
I've heard weird stories \n\
about a beast lurking in an\n\
underground lake so I figure \n\
she would be around here\n\
searching for it.\n\
Even if I head down, chances\n\
are she already move onto\n\
something else. Never the one\n\
to just sit idly by.\n\
\n\
So I hate to ask again, but\n\
if you see her, let her \n\
know I'm at the entrance\n\
of this maze. Thank you,\n\
Cream."))

//Marine, HMC
DEFINE_DIALOG(MARINE_02, 1, 5, 30, 200, _("\
Yes, yes! The stories are\n\
true! Look at its beauty!\n\
I knew that weird goomba\n\
with the hat was telling\n\
the truth!\n\
So strange that it looks like\n\
Sonic but it doesn't matter,\n\
she's a beaut! I should try\n\
and ride it but I don't \n\
trust those quills.\n\
...Blaze still lookin' for\n\
me? Such a worry wart! I\n\
told ya, I'm fine! Not \n\
like I'm gonna get myself\n\
into trouble.\n\
Well, if I can't ride that\n\
thing, I'll find something\n\
else! Just you wait!!"))

//Blaze, DDD
DEFINE_DIALOG(BLAZE_03, 1, 5, 30, 200, _("\
...I don't know how she\n\
did it, but she actually\n\
did it. You saw her right?\n\
In the previous area riding\n\
a SHARK????\n\
I don't know what to do\n\
with her but at the same\n\
time maybe she's right. \n\
I do tend to be on her more\n\
than I probably should.\n\
Is it wrong to be too\n\
worried about a friend? She\n\
has been doing fine this\n\
whole time.\n\
\n\
Hopefully the next time I\n\
find her, we'll have a \n\
little chat and go from \n\
there. Thank you for letting\n\
me know she's ok, Cream."))

//Blaze, RR
DEFINE_DIALOG(BLAZE_04, 1, 5, 30, 200, _("\
Why do you constantly\n\
wander off like that when \n\
I invite you to places???\n\
Always making me worried\n\
sick!\n\
The most important thing is\n\
that I found you and you're\n\
safe and sound. Just please,\n\
when you wander off, just \n\
let me know in advance.\n\
Sorry to get you involved\n\
in this mess, Cream, but \n\
thank you none the less. \n\
I'll talk to you in a bit."))

//Marine, RR
DEFINE_DIALOG(MARINE_03, 1, 5, 30, 200, _("\
Oi, I knew she would do this\n\
but what's the fun without\n\
a little danger?? Ha ha...\n\
but yeah I get what she\n\
means.\n\
Honestly, I'm glad she found\n\
me here cause I have noooo\n\
idea how to get out of here!\n\
Well, Creamy, it's been fun\n\
to get to know you!\n\
I can see why Blaze talks \n\
a lot of good things about\n\
cha. You have fun doing\n\
the adventure thing!"))

//Blaze, RR 2
DEFINE_DIALOG(BLAZE_05, 1, 6, 30, 200, _("\
Cream, glad to see you!\n\
Well I've gone ahead and\n\
taken Marine back to the\n\
castle. Looks like this\n\
whole thing just worn her\n\
out.\n\
And honestly I should do\n\
the same. The worlds in\n\
these paintings can be\n\
a bit much all at once. \n\
Don't be afraid to take\n\
a break, either.\n\
But whichever you choose,\n\
we'll be rooting for you\n\
to save your mom. Good\n\
luck, Cream, we know\n\
you can do it!"))

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

// Gardevoir
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

// Tails Part 1
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
one...)\n\
\n\
\n\
(Oh, poor Tails, does he try.\n\
Tails is usually seen at the\n\
start of new areas so you'll\n\
see him right away!"))

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
You know I think those green rings\n\
may help ya on your adventure.\n\
Go bash that egghead, little \n\
bunny. We're rootin' for ya.)"))

// Tammie
DEFINE_DIALOG(MS_006, 1, 5, 30, 200, _("\
Oh hi! You here to jump \n\
on the vroom-vrooms too? \n\
I wish. Since they closed \n\
that tunnel it's been \n\
too quiet.\n\
Why am I jumping on moving \n\
cars? Because it's fun, \n\
that's why! This spot is \n\
a nice place to nap too.\n\
\n\
No one comes here except \n\
a worker or two, but they \n\
usually run away like a \n\
lil screaming baby when \n\
they see me, hyeheh!\n\
What do they think a \n\
tiny imp like me is \n\
gonna do? I'm only a teeny \n\
bit pointy! You take it \n\
easy, good furry furball."))

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
reflective number rings. So if\n\
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
You say you're unsure how\n\
you exactly got here but you \n\
really need to get back to \n\
the castle to save your mom?\n\
\n\
\n\
Oh, Sweetie, this is Central \n\
City. No Castles here. You \n\
must have got off at the train \n\
station at Central Square.\n\
\n\
\n\
Next you're gonna tell me you \n\
'warped' here or something like \n\
those two over there... You did?\n\
Well franky, hun, it's not the\n\
strangest thing I've heard since\n\
taking over the bar.\n\
Hmm, you look oddly similar to\n\
one of my regulars. Is Vanilla\n\
your mom by any chance? Yea, she\n\
comes here twice a month with\n\
friends. Don't worry, she's only\n\
here to sing and be with her pals.\n\
Anyway darling, why don't you\n\
join in our karaoke night! \n\
I'm sure you'll wow the crowd \n\
as much as your mom does with \n\
her lovely voice~\n\
\n\
Though if you do need to get\n\
back to your little adventure,\n\
a warp ring did also appear\n\
in the restrooms around the same\n\
time. Think it'll get you back\n\
to your castle.\n\
Otherwise, feel free to have \n\
a look around and talk to \n\
the patrons. They shouldn't be\n\
a bother as long as I'm around.\n\
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
...Oh hey, it's you. How \n\
did you even get here?\n\
Ya know, funny story. HQ\n\
sent me here to warn you\n\
about Luffio and the Straw\n\
Hat pirates.\n\
But I just got word that\n\
they have left the region \n\
and are heading back to the\n\
Grand Line.\n\
So me and my pal over there\n\
are told to come back and\n\
basically pretend this\n\
whole thing never happened.\n\
It's strange, it's like they\n\
were just removed from this\n\
whole thing. Oh well, means\n\
less death for me.\n\
I'm just gonna take it easy\n\
here before heading home. \n\
You take it easy too, \n\
little bunny. "))

//Marine Goomba 2 - Bar
DEFINE_DIALOG(KB_004, 1, 4, 30, 200, _("\
Aye, child. Have you by\n\
chance heard the tale of\n\
the loch ness beast? \n\
\n\
Only a few have ever seen\n\
it in person, a creature\n\
so mysterious and divine.\n\
\n\
All we have this is lone\n\
picture of the beast to\n\
go by. They said it lurks\n\
in underwater lakes.\n\
I've told another child\n\
like yourself earlier but\n\
maybe you'll be able to find\n\
it just as well!"))

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
Sure, her singing is iffy but\n\
man, she's so friendly and cute.\n\
I do wish her sloth pal here \n\
wasn't so ...what's the word for \n\
it. A big meanie? Just be careful\n\
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
DEFINE_DIALOG(KB_007, 1, 5, 30, 200, _("\
Hehe, gotchya! Instead of\n\
a secret item, all you got \n\
was me, Bait the Betta Fish!\n\
I bet you feel pretty silly \n\
right now. \n\
Hey, at least you won't \n\
leave empty-handed. Listen \n\
up!\n\
\n\
\n\
In the castle lobby, there's\n\
a lone ring that'll give \n\
you the power of \n\
invincibility super early. \n\
This isn't bait!\n\
In order to find it,\n\
look at the princess first.\n\
Or don't. That would also\n\
be fun to watch. You, a\n\
bunny, just being useless.\n\
Anyways, have fun out there!\n\
I'll be watching ya, kid."))

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
he does those crazy moves. \n\
Everything moves so fast, it's \n\
exhausting!\n\
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
this game. Mr. Dudley was his \n\
name. He does look super cool!\n\
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

//Sweet
DEFINE_DIALOG(WP_004, 1, 3, 30, 200, _("\
Seems the silly frog in the\n\
dunk tank left a sign here for\n\
anyone willing to try. Let's see:\n\
'Wus poppin? Sweet here~ \n\
Try 'n dunk me,  brother. Good\n\
luck, it's frozen lol.'\n\
Such a strange silly frog..."))

//Magenta Wisp, White Park
DEFINE_DIALOG(MWISP_WP, 1, 4, 30, 200, _("\
Music used:\n\
-Step Skip Go Go! (BGM1)-\n\
Puzzle Bobble 2\n\
-- Arcade"))

//White Wisp, Jack
DEFINE_DIALOG(WWISP_JACK, 1, 6, 30, 200, _("\
-Jack the Hedgehog-\n\
By: FudgerNutter\n\
Age: Late 30s\n\
~A former bounty-hunter\n\
who finally settled down\n\
upon finding a wiley kitten~\n\
A pyrokinetic who settled on\n\
bounty-hunting to make a living.\n\
Due to his left eye being the \n\
focus of his magic, he who would\n\
end up blind, retiring from the\n\
profession.\n\
Trying to find a relationship, and\n\
failing, he runs into a young child\n\
named Kitten who clings to him like\n\
...well like a lost kitten.\n\
\n\
\n\
Overtime, their time together grew\n\
and he eventually accepted the role\n\
of being a Dad. Now a few years \n\
later, he has no regrets in his \n\
decision, even making friends with\n\
Kitten's friend's parents. "))

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
'Sweepin the Ocean'\n\
This painting was done by\n\
InfiniteBrians"))

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

//Artist, Vanilla and Eggman
DEFINE_DIALOG(ARTIST09, 1, 3, 30, 200, _("\
The Vanilla and Eggman\n\
portraits were done by\n\
FudgerNutter"))

//Vector
DEFINE_DIALOG(NTM_000, 1, 6, 30, 200, _("\
Hey, hey! I didn't think\n\
I see you around here!\n\
Would you believe I'm a \n\
trainer at this joint?\n\
I get free snacks at the\n\
snack bar!\n\
And before you ask, Espio's\n\
told me everything! Charmy and\n\
he are already searchin' for\n\
your mom. Haven't heard back\n\
from them in a while though.\n\
\n\
Me? My job here is just to keep\n\
an eye on anything going on at\n\
this hole. There's this other\n\
guy on the third island\n\
but he seems fiiine...motobugs\n\
aside that is.\n\
If you are gonna explore, go\n\
talk to that purple fox gal\n\
over there to ride the \n\
cannons. And don't forget your\n\
Wing Locket!\n\
\n\
It's a long way down ya hear?\n\
But don't worry, the death warps\n\
are set that you just land back\n\
in the castle rather than outside\n\
like before, whatever that means!"))

//Tails Part 4
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
don't know why Sonic didn't show \n\
up after I called him but I know\n\
he would've slowed ya down\n\
anyway, hahahaha.\n\
-You're happy that's he's happy, \n\
even if he's being a bit sappy,\n\
but the smiles of your friends\n\
is just as important as saving\n\
your Mom.\n\
\n\
You give him a big ol' hug and \n\
a lil' chu~ on the cheek. That'll\n\
put him in a good mood! You save \n\
your goodbyes and head out once\n\
more. Time to go and save Mama!\n\
\n\
And honestly, when this whole \n\
ordeal is completely done, taking \n\
his offer to go see Chao in Space\n\
doesn't sound like a bad idea\n\
right now.-"))

//Floomba NTM
DEFINE_DIALOG(NTM_002, 1, 5, 30, 200, _("\
Oh gosh, I was supposed to\n\
go follow that new guy up there\n\
but he got there when I\n\
went to the bathroom and I\n\
don't know what to do!\n\
Are motobugs super dangerous?\n\
I've never ran into one myself,\n\
don't see much of them in the\n\
Mushroom Kingdom but I'm just\n\
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
them but I wonder if they'll \n\
charge me for 'destroying \n\
company equipment'..."))

//Magenta Wisp, Fujiyama
DEFINE_DIALOG(MWISP_NTM, 1, 5, 30, 200, _("\
Music used:\n\
-Fujiyama Oriental\n\ 
Golf Club (Japan)-\n\
Neo Turf Masters\n\
-- Neo Geo"))

//Gemerl at THI
DEFINE_DIALOG(EX_001, 1, 6, 30, 200, _("\
He really wanted to race ya,\n\
I couldn't say no to the\n\
guy. It's fine, you've made\n\
it this far without any\n\
trouble so why test you\n\
again.\n\
I can give you a small\n\
hint for the last section:\n\
Your flying is unaffected\n\
by the wind. Take advantage\n\
of that!"))

//JRB Pillar Warning
DEFINE_DIALOG(EX_002, 1, 5, 30, 200, _("\
Currently the pillars above\n\
the water may cause you to\n\
just die. Seems to be linked\n\
to a plugin used in this\n\
sm64 build.\n\
To get the BLAST TO THE\n\
PILLAR star, I'd recommend just\n\
flying to the star from the boat\n\
when it rises to the surface."))

