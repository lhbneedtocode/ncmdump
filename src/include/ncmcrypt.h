#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;

class NeteaseMusicMetadata {

	private:
		std::string mAlbum;
		std::string mArtist;
		std::string mFormat;
		std::string mName;
		int mDuration;
		int mBitrate;

	public:
		//NeteaseMusicMetadata(cJSON*);
		~NeteaseMusicMetadata();
    	const std::string& name() const { return mName; }
    	const std::string& album() const { return mAlbum; }
    	const std::string& artist() const { return mArtist; }
    	const std::string& format() const { return mFormat; }
    	const int duration() const { return mDuration; }
    	const int bitrate() const { return mBitrate; }

};
class NeteaseCrypt {
	private:
		

	public:
		NeteaseCrypt(std::string const& p) : Filepath_(p){}
		~NeteaseCrypt(){
			cout << "destroyed" << endl;
		}
		void Dump(std::string const&);
		std::string path(){ return Filepath_;}
		void FixMetadata(void);
	
	private:
		std::string Filepath_;

};