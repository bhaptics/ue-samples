### Implementing bHaptics SDK2 in Your Application
### 1. Project Setup

#### a. Generate App ID and API Key
Visit the [bHaptics Developer Portal](https://developer.bhaptics.com) and create your appId and apiKey. These unique identifiers are essential for integrating bHaptics services into your application.

#### b. Link App ID and API Key to Your Project
Embed the appId and apiKey within your project's configuration file or settings to establish a connection between your application and bHaptics services.



### 2. Initialization

#### a. Import bHaptics SDK
Ensure that the SDK is correctly imported into your project. Refer to the official documentation to understand the required dependencies and import statements.

<img width="724" alt="image" src="https://github.com/bhaptics/ue-samples/assets/1837913/bfa63df1-d671-4959-867f-f2f3a499358c">


#### b. Initialize bHaptics SDK
Initiate the SDK by calling the appropriate initialization function.

<img width="409" alt="image" src="https://github.com/bhaptics/ue-samples/assets/1837913/11488612-0c06-4572-9cc2-db9998e6bdfd">


### 3. Implementing Haptic Feedback

#### a. Identify Haptic Patterns
Choose the appropriate haptic patterns that align with your application’s requirements. You can customize the intensity, duration, and pattern of vibrations.

#### b. Play Haptic Feedback
Integrate the ‘play haptic’ function within the desired sections of your application. This function triggers the haptic feedback, providing a real-time sensory experience to users.
The example below illustrates how to incorporate haptic feedback when a player picks up a weapon.

<img width="453" alt="image" src="https://github.com/bhaptics/ue-samples/assets/1837913/afe0df8a-3feb-44ac-90d1-f155d9c96d4c">


### 4. Adding Rotation to the Haptic Event
You can employ the 'Custom Project To Vest' function to calculate the angle between the contact point and the player component. 

<img width="874" alt="image" src="https://github.com/bhaptics/ue-samples/assets/1837913/d520062e-a634-4e2c-8413-65e92a0a0514">


### Conclusion

By following these steps, you can effectively integrate bHaptics SDK and enhance your application with refined haptic feedback. Ensure to refer to the official [bHaptics documentation](https://bhaptics.notion.site/Plug-in-deployed-events-to-Unreal-2b0d692e30b342ffb6db0ba3625fc482) for in-depth information and troubleshooting.
