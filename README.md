# Introduction

This demo is for folks who want to use Helpshift plugin in a unreal engine project which is written in C++. This contains the core Messaging module for the Helpshift plugin which is created in the Helpshift runtime environment/ Project Runtime.

# Project Structure
<img width="290" alt="Screenshot 2022-01-09 at 11 09 57 PM" src="https://user-images.githubusercontent.com/97083239/148693849-0339e581-fe84-4ffd-8866-29e5a16c3278.png">


# Project Setup

1. Clone the project
2. Open Unreal Engine (> version 4)
3. Download [Helpshift Demo Plugin](https://drive.google.com/drive/folders/1_MoV3m23jfo2JspbndZQrWQBH7B5P6vc?usp=sharing) 
4. Update this in the Plugins folder
5. Compile the project

    <img width="440" alt="Screenshot 2022-01-05 at 4 57 23 PM" src="https://user-images.githubusercontent.com/97083239/148210386-7fc49c2e-c62f-4e36-93b7-c3fb9acdd4a0.png">
    
4. Run it on a Mobile(IOS/Android) Device


# Creating your first C++ Unreal Project with Helpshift plugin 

1. Open new project in unreal engine
2. Select C++ in project setting

    <img width="562" alt="Screenshot 2022-01-09 at 9 46 08 PM" src="https://user-images.githubusercontent.com/97083239/148690877-7b8aa561-127c-414b-a50a-e7f70daf6c4f.png">
    
3. Download [Helpshift plugin](https://d3e51fp79zp4el.cloudfront.net/library/latest/sdkx/helpshift-plugin-sdkx-unreal.zip)

5. Add Helpshift to your unreal project
	
    Unzip the Helpshift Unreal SDK package.
    Copy the plugin (helpshift-sdk-ue4) directory into [YOUR_PROJECT]/Plugins directory
    After that, once you reopen your project, the plugin should appear in the Plugins section
  
5. Create any component( example character, pawn etc) in the Helpshift runtime environment/ Project Runtime.

  <img width="212" alt="Screenshot 2022-01-09 at 11 02 22 PM" src="https://user-images.githubusercontent.com/97083239/148693610-c9f487d9-97f8-4589-b6f9-1440fb4b0441.png">
  
  <img width="906" alt="Screenshot 2022-01-09 at 11 02 50 PM" src="https://user-images.githubusercontent.com/97083239/148693604-31d0a6cc-2351-4d10-b5fc-9cbc7e787e87.png">
  <img width="974" alt="Screenshot 2022-01-14 at 7 00 12 PM" src="https://user-images.githubusercontent.com/97083239/149523088-0a03a45c-3c3b-4ca8-a379-8173ce5901f2.png">


6. Add the config Tmap 

    ```
      TMap<FString, FHelpshiftConfigParameter> Parameters;
    ```

7. Initialise the Helpshift library

    ```
      UHelpshiftLibrary::Init(Parameters);
    ```
    
8. Now you can use any functions from the Helpshift library in Helpshift runtime.
  for example:
      ```
       UHelpshiftLibrary::ShowFrequentlyAskedQuestions(Parameters);
      ```
 
 
 #
