<h1>Learning C++ Builder</h1>
This repository is where I explore C++ Builder by working on GUI projects inspired by tutorials, particularly from CodeBeauty's Youtube Playlist. While I follow along with the tutorials, I take things a step further by adding my own features and customizations, making the applications unique and a true part of my learning journey.

<h2>Project 1: Shopping List Application</h2>
A simple and interactive shopping list application built using C++ Builder. The app allows users to:

* Add Items: Type an item into the list.
* Strike Through Items: Click on an item to mark it as "done."
* Clear All Items: Reset the list with a single click.

> This project was inspired by a [To-Do App tutorial](https://youtu.be/FxQTXyR4mjs?si=JMzFywNS6dVXPtAg) from [CodeBeauty's C++ Builder Playlist](https://www.youtube.com/watch?v=FxQTXyR4mjs&list=PL43pGnjiVwgQakzRxpt2amqN9f7-tRtc_). While the tutorial served as a starting point, I adapted the concept into a shopping list and added features to make it more functional and unique.

<h2>Project 2: Pop Quiz Application</h2>
A fun and interactive pop quiz application with multiple-choice questions, built using C++ Builder. The application features:

* Dynamic Questions: Three questions loaded with their respective answers and a system to evaluate correctness.
* Scoring System: Each question awards different points based on its difficulty.
* Restart Quiz: A restart button allows users to retake the quiz at any point.
* Answer Feedback: After selecting an answer and hitting the "Confirm" button, the app shows whether the answer was correct or not.
* Improved User Flow: A timer introduces a brief delay between questions, during which the "Confirm" button is disabled and displays "Wait." At the end of the quiz, the button updates to "Game Over."

> Inspired by a[ CodeBeauty tutorial](https://www.youtube.com/watch?v=EGCuStJyuVE&pp=ygVBWW91ciBmaXJzdCBDKysgR1VJIEdhbWUgKHN0ZXAgYnkgc3RlcCkgQnVpbGQgR2FtZSBHVUkgYXBwcyBpbiBDKys%3D), this project expands significantly on the original by adding scoring, feedback, and better usability for a more polished experience.

<h2>Project 3: Login and Registration</h2>
A user-friendly login and registration system built with C++ Builder. This application allows users to register accounts and log in with their credentials while maintaining robust error handling and additional features for an improved user experience.

<h3>Features</h3>

* Registration System: Users can create accounts with a username and password.
* Login System: Users can log in with their credentials, with error handling for incorrect attempts.

**Bug Fixes and Enhancements:**
1. Disabled Login Button: The login button is disabled when no username or password is entered to prevent unnecessary processing.
2. Login Attempts Limit: Users have 3 attempts to log in before access is restricted.
3. Form Reset: Upon closing the login form, all input fields are cleared to ensure no residual information remains when the form is reopened.
4. Optimized Search Logic: The program stops searching the file once a successful login is detected, enhancing performance.

**How It Works:**
- The system checks a file storing user credentials for validation.
- If the login is successful, the loop terminates, and the user proceeds to the next step.
- If the login fails after 3 attempts, the program restricts further login attempts.

> Inspired by [CodeBeauty tutorial](https://www.youtube.com/watch?v=nxHnnQToy5o&t=1679s), this project fixes the bugs that were pointed out in the video.

1. Clone the Repository:
```bash
   git clone https://github.com/your-username/learning-c-builder.git
```
2. Open the Project in C++ Builder IDE:
* Open Embarcadero C++ Builder.
* Navigate to File > Open, and select the project file (.cbproj or .cpp).

3. Build the Project:
* Click Build or press F9 to compile the project.

4. Run the Application:
* After building, click Run or press Ctrl + F9 to launch the application.
