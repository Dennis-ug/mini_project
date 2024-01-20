// C++ code using OpenCV to read from the camera

#include <opencv2/opencv.hpp>

int main() {
    // Open the default camera (camera index 0)
    cv::VideoCapture cap(0);

    // Check if the camera opened successfully
    if (!cap.isOpened()) {
        std::cerr << "Error opening the camera!" << std::endl;
        return -1;
    }

    // Create a window to display the camera feed
    cv::namedWindow("Camera Feed", cv::WINDOW_NORMAL);

    // Main loop to continuously capture and display frames
    while (true) {
        cv::Mat frame;
        
        // Capture frame from the camera
        cap >> frame;

        // Display the frame
        cv::imshow("Camera Feed", frame);

        // Break the loop if 'ESC' key is pressed
        if (cv::waitKey(1) == 27)
            break;
    }

    // Release the camera and close the window
    cap.release();
    cv::destroyAllWindows();

    return 0;
}
// Use the following comand to compile
// g++ your_cpp_file.cpp -o camera_reader -lopencv_core -lopencv_highgui -lopencv_videoio
