# About Me
My name is Eugenio Morales, this is my repository for the assignments given in the laboratories for Game Engines Design & Implementations.

My student ID is 100943481.

# The Project
This silly little project is going to be called Dwarven Riches. 

The TL;DR of what I seek to accomplish and its core game loop is to have a game in which the player collects gemstones 
in an old dwarven mine/stronghold to accumulate more wealth and fight off the eventual odd monster or two walking through your mines. 
Eventually, as you amass more and more wealth (represented through a total score), you get access to more amazing tools and skills.

# IMPORTANT SECTION (READ ME)
As to make the compression of large files easier, Unreal Engine removes several important folders from a build. Most important would be folders of the following names: "Binaries", Intermediate", and "Saved".

In order to access a .uproj file (and by extent an Unreal Engine build), one must perform the following process: 

- After unzipping the .zip file containing the project build, right-click the .uproj file
- Select "Show more options"
- Select the Unreal Engine option of "Generate Visual Studio Project Files"

Without this process being performed, a build will be inaccessible and unable to be evaluated.

<img width="427" height="687" alt="image" src="https://github.com/user-attachments/assets/4b178fa0-20b0-478e-842e-765ef4da1daf" />

<img width="360" height="135" alt="image" src="https://github.com/user-attachments/assets/e8d571d3-d2a6-4a7a-956e-567b0cc939ad" />


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

# In-Lab Activity 2
The game still maintains  rudamentary form, but now has more features implemented into the previously super rudamentary build. Now, with the help of the implemented Factory design
pattern, the player will have to constantly walk around the base level area to find the gems they must collect to gain ever-higher scores (which is still a basic plane with walls as it is still out of scope to make a ful fledged map for this minautre game). Additionally, I added multiple different collectible items; each having a unique amount of points given when collected and different colors to properly distinguish them between one another. The list of collectibles would be as follows: pyrite (-10 points), coal (+10 points), gold (+100 points), sapphires (+500 points), rubies (+700 points), and diamonds (+1000 points). The implemented Factory pattern allows for them to be randomly selected from an array and placed within the level area. The Factory design pattern was implemented through a set of blueprints based-off of (but not entirely identical) to Professor Alvaor's instructional example on how to implement the Factory design pattern in Unreal Engine (see images below).

SpawnManager
<img width="1102" height="502" alt="image" src="https://github.com/user-attachments/assets/4930080b-e080-4669-b89d-0bb5a2a50e4b" />

Spawner
<img width="1135" height="576" alt="image" src="https://github.com/user-attachments/assets/276814d7-54d6-41a3-80da-ee5e327b43f7" />

Overall, this design pattern was immensely benefical as it allowed for me to easily and endlessly spawn a myriad of collectibles through one single pair of game objects. Instead of having to make several scripts and blueprints for each collectible, I simply had to design one main pair of blueprints to handle spawning and execute spawning. I will certainly be utilizing this design pattern in the future as it is immensely useful and versatile.

Now below lies the illustration/diagram of how I implemented Factory and my thought behind what I did.

<img width="1890" height="1417" alt="GED-Lab-2-Illustration" src="https://github.com/user-attachments/assets/4fd68f5d-b86b-4c53-a3ba-f4f7a9f3b7a6" />
