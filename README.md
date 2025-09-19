# About Me
My name is Eugenio Morales, this is my repository for the assignments given in the laboratories for Game Engines Design & Implementations.

My student ID is 100943481.

# The Project
This silly little project is going to be called Dwarven Riches. 

The TL;DR of what I seek to accomplish and its core game loop is to have a game in which the player collects gemstones 
in an old dwarven mine/stronghold to accumulate more wealth and fight off the eventual odd monster or two walking through your mines. 
Eventually, as you amass more and more wealth (represented through a total score), you get access to more amazing tools and skills.

# In-Lab Assignment 1
In its present state, the project is extremely rudamentary and simple. With the player being still the default Unreal Engine player model and the only interactibility being the player
walking around the default area. But I am here to talk not about the lack of complexity in the present state of the "game", but to explain my use of the Singleton design pattern. And 
I achieved use of this design pattern through the use of a simple ScoreManager. My singleton (aka as a GameInstance in the UnrealEngine) is a simple C++ class file that indicates for 
the game to constantly track a score. This score is completely detached from both the Player and the pickups found across the level, allowing for both utilize and call upon the GameInstance
to increase or decrease the total score. 

This pattern was greatly beneficial as it skimmed down the total time I'd require to make the main bulk of the game, allowing me to make more with less and ensuring that there would be 
smoother gameplay (as instead of making several bulky scripts with many references throughout the files, I only had to make one main file and call upon it only a handful of times for the same result.

Now below lies an illustration of my thought process on how I'd use the singleton and its interactions with other files/game actors:

<img width="1890" height="1417" alt="GED-Lab-1-Illustration" src="https://github.com/user-attachments/assets/29b69a1e-5662-4805-81a8-1b16c5f2911a" />

Now, that's not to say that it was all fun and games. There were several issues that I had to troubleshoot and deal with first before getting to the meat and potatoes of the assignment 
(as is usually the case with Unreal Engine). Throughout my construction of my C++ class, there were severa issues entirely with the tool of Visual Studio; several plug-ins are 
required to work within Unreal, a dire contrast to Unity. But after dealing with them, I had to deal with faulty error-flagging slowing me down, since one of the plug-ins didn't install 
properly, leading to all of my work being locked behind error screens for a handful of hours as I had to reinstall all of Visual Studio and its many plug-ins for Unreal Engine. But after 
all of that was said and done, everything was smooth sailing.

Images to backup my mad ramblings here:
<img width="1906" height="1020" alt="Screenshot 2025-09-19 183400" src="https://github.com/user-attachments/assets/d8a926f3-185e-46f6-a410-46ccedbc5ff1" />
<img width="1919" height="1012" alt="Screenshot 2025-09-19 183443" src="https://github.com/user-attachments/assets/ddd5bad8-c5e1-42b5-98f1-6f2efb0868b1" />
<img width="1919" height="1023" alt="Screenshot 2025-09-19 183509" src="https://github.com/user-attachments/assets/e7eb7da3-68e9-49d7-aa8b-9311a892029c" />
