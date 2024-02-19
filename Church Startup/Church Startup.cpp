#include <cstdlib>

int main() {
    // Replace the file paths with your actual paths
    const char* chromePath = R"(C:\Users\Jeorge\AppData\Roaming\Microsoft\Internet Explorer\Quick Launch\User Pinned\TaskBar\chrome.exe)";
    const char* streamDeckPath = R"(C:\Users\Jeorge\AppData\Roaming\Microsoft\Internet Explorer\Quick Launch\User Pinned\TaskBar\StreamDeck.exe)";
    const char* streamlabsOBSPath = R"(C:\Users\Jeorge\AppData\Roaming\Microsoft\Internet Explorer\Quick Launch\User Pinned\TaskBar\Streamlabs OBS.exe)";
    const char* videoPsalmPath = R"(C:\Users\Jeorge\AppData\Roaming\Microsoft\Internet Explorer\Quick Launch\User Pinned\TaskBar\VideoPsalm.exe)";

    // Run the executable files
    system(chromePath);
    system(streamDeckPath);
    system(streamlabsOBSPath);
    system(videoPsalmPath);

    return 0;
}