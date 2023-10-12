# ue-samples

## Bug Reproduction Project: Test521

We have included a project named `Test521` to demonstrate the recurring bug encountered during the Android packaging process. This project serves as a practical example to reproduce the issue for further investigation and troubleshooting.

### Project Structure:
- Location: `Test521`
- Unreal Engine Version: 5.2.1
- Target Platform: Android (ASTC)

### Reproduction Steps:
1. Open the `Test521` project in Unreal Engine 5.2.1.
2. Navigate to `File > Package Project > Android (ASTC)`.
3. Observe the error in the output log during the packaging process.

### Expected Outcome:
The project should be packaged successfully without any errors.

### Actual Outcome:
An error occurs during the `:app:processDebugResources` task, as indicated in the output log.
