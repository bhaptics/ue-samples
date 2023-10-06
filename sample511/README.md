### Project Title: Implementing bHaptics SDK2 in Your Application

This guide provides step-by-step instructions on how to migrate from bHaptics SDK1 to SDK2 and incorporate enhanced haptic feedback into your application. The official [migration manual](https://bhaptics.notion.site/How-to-migrate-from-SDK1-old-to-SDK2-new-007c00b65129404287d9175b71fa029c) provides comprehensive information.

### 1. Project Setup

#### a. Generate App ID and API Key
Visit the [bHaptics Developer Portal](https://developer.bhaptics.com) and create your appId and apiKey. These unique identifiers are essential for integrating bHaptics services into your application.

#### b. Link App ID and API Key to Your Project
Embed the appId and apiKey within your project's configuration file or settings to establish a connection between your application and bHaptics services.

### 2. Initialization

#### a. Import bHaptics SDK
Ensure that the SDK is correctly imported into your project. Refer to the official documentation to understand the required dependencies and import statements.

#### b. Initialize bHaptics SDK
Initiate the SDK by calling the appropriate initialization function and passing the appId and apiKey as parameters. This process establishes a secure connection to bHaptics services, enabling your application to send and receive data.

### 3. Implementing Haptic Feedback

#### a. Identify Haptic Patterns
Choose the appropriate haptic patterns that align with your application’s requirements. You can customize the intensity, duration, and pattern of vibrations.

#### b. Play Haptic Feedback
Integrate the ‘play’ function within the desired sections of your application. This function triggers the haptic feedback, providing a real-time sensory experience to users.

### 4. Adding Rotation to the Haptic Event

#### a. Identify Rotation Parameters
Determine the angles and axes of rotation that correspond to the haptic feedback. These parameters control the direction and orientation of the vibrations.

#### b. Integrate Rotation Function
Incorporate the rotation function alongside the ‘play’ function. Ensure that the rotation parameters are accurately passed to generate the desired haptic experience.

### Conclusion

By following these steps, you can effectively migrate from SDK1 to SDK2 and enhance your application with refined haptic feedback. Ensure to refer to the official [bHaptics documentation](https://bhaptics.notion.site/How-to-migrate-from-SDK1-old-to-SDK2-new-007c00b65129404287d9175b71fa029c) for in-depth information and troubleshooting.
