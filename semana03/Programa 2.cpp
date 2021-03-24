#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<fcntl.h>
#include<unistd.h>
int main(int argc,char* argv[]) {
    // cmd : cp file1 file2

    if ( argv[1] == nullptr || argv[2] == nullptr ){
        std::cout << "missing arguments: moderncp file1 file2 ";
        return 0;
    }
    const std::string input{argv[1]};
    const std::string output{argv[2]};

    // create a vector with 1024 byte allocated 
    std::vector<char> buf(1024);
    // input file descriptor 
    int infd = open(input.c_str(),O_RDONLY);
    // output file descriptor
    int outfd = open(output.c_str(),O_WRONLY|O_CREAT|O_EXCL,0664);

    while(true){
        auto count = read(infd,buf.data(),buf.size());
        if (count == 0) break;

        auto num_written = 0;
        auto num_to_write = count;
        while(num_written < num_to_write){
            num_written += write(outfd,buf.data()+num_written,count-num_written);

        }
    }
    close(infd);
    close(outfd);

    std::cout << input << '\t' << output ;
}