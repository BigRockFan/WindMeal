# WindMeal
Project from MHACKS 12 (dump)


## Inspiration
The trivial problem of accidentally swallowing extremely hot food. Numerous times we've had this issue: taking a bite into a meal and burning our tongues. But no more.

## What it does
Introducing Wind-meal. Our creation is designed to solve this very problem. We created a product that allows you to know the exact temperature of your food so you're always informed about potential burns. With excessively hot food, there is a buzzing noise and our LCD display flashes "VERY HOT" in red. With relatively hot food, our LCD displays a constant red warning message to continue cooling the food. Finally, when the food is in an edible temperature range, the LCD display turns green and informs the user that their food is ready to eat (along with three buzzing noises to indicate this). Additionally, we created a fan that would speed up the cooling process, and you can see its effect on the temperature on the display.

## How we built it
We built this product primarily out of 2 arduino UNO chips and multiple accompanying components. The temperature was recorded using a temperature sensor, and the fan was made out of cut out cardboard and a motor. As for the frame of the design, we cut out cardboard scraps and stapled/taped them together. 

## Challenges we ran into
Since we came in with simply an arduino and some wires, we had a hard time finding materials to build our product out of. Also, the lack of experience with arduino's external libraries played a role in our difficulties. Calculating the temperature of the environment using a single chip proved to be quite difficult. A small team proved efficient but more time consuming than a larger team would've been.

## Accomplishments that we're proud of
Milestones include figuring out an algorithm that correlated resistance in a circuit (from a single chip) to ambient temperature, and fitting all devices compactly into a single handheld unit. Finally, work efficiency over the last 24 hours.

## What we learned
Arduino basics, importing libraries, usage of arduino components, effective team cooperation, an understanding of semiconductors and how they operate in chips, and the usage of multiple arduinos in a single project are all valuable lessons from this experience.

## What's next for Wind-meal
We plan on developing the product to consist of metal rather than cardboard and learning how to make a more effective fan.
