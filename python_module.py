import subprocess

# Run the C++ program as a separate process
cpp_process = subprocess.Popen("./camera_reader", shell=True)

# Wait for the user to press 'Enter' to exit
input("Press Enter to exit...")

# Terminate the C++ process
cpp_process.terminate()
