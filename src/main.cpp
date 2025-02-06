#include "include/cxxopts.hpp"
#include "include/main.hpp"
#include "include/version.h"
#include <filesystem>
namespace fs = std::filesystem;
void process_file(const fs::path filepath){
	cout << filepath << endl;
}

int main(int argc, char** argv){
	
	cxxopts::Options options("ncmdump");
	options.add_options()
	("h,help", "Print usage")
    ("d,directory", "Process files in a folder (requires folder path)", cxxopts::value<std::string>())
    ("r,recursive", "Process files recursively (requires -d option)", cxxopts::value<bool>()->default_value("false"))
    ("o,output", "Output folder (default: original file folder)", cxxopts::value<std::string>())
    ("v,version", "Print version information", cxxopts::value<bool>()->default_value("false"))
    ("filenames", "Input files", cxxopts::value<std::vector<std::string>>());

    options.positional_help("<files>");

    options.parse_positional({"filenames"});

    options.allow_unrecognised_options();
// Parse options the usual way
    cxxopts::ParseResult result;
    try {
        result = options.parse(argc, argv);
    } catch(cxxopts::exceptions::parsing const& e) {
        std::cout << options.help() << std::endl;
        return 1;
    }
	if (result.unmatched().size() > 0)
	{
		std::cout << options.help() << std::endl;
		return 1;
	}

	if (result.count("help"))
	{
		std::cout << "helping you! helping you!" << endl;
		std::cout << options.help() << std::endl;
	}

	if (result.count("version")){
		cout << "version!!! is !!!" << VERSION_MAJOR<<VERSION_MINOR<<endl;
	}

	if (result.count("filenames")){
	       std::vector<std::string> filenames = result["filenames"].as<std::vector<std::string>>();	
	       for(auto& filename : filenames){
				fs::path p = filename;
				process_file(p);
			}
	}


	
}
