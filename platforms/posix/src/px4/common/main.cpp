#include <px4_platform_common/defines.h>
#include "PosixPx4Common.h"

using namespace std;

int main(int argc, char **argv){
    cout << "Main du px4" << endl;

    bool is_client = false;
	bool pxh_off = false;
	bool server_is_running = false;

    /* Symlinks point to all commands that can be used as a client with a prefix. */
	const char prefix[] = PX4_SHELL_COMMAND_PREFIX;
    cout << "PX4_SHELL_COMMAND_PREFIX=" << PX4_SHELL_COMMAND_PREFIX << endl;
    int path_length = 0;
    
    string absolute_binary_path; // full path to the px4 binary being executed

    int returnValue = PX4_OK;
    cout << "returnValue=" << returnValue << endl;
	int instance = 0;

    if(argc>0) {
        /* The executed binary name could start with a path, so strip it away */
		const string full_binary_name = argv[0];
        cout << "full_binary_name=" << full_binary_name ;
        const string binary_name = ExtractLastPathComponent(full_binary_name);
        cout << "binary_name=" << binary_name ;        
    }

}

