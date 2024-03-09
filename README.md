# Build Your Own wc Tool

This challenge is to build your own version of the Unix command line tool wc!

The Unix command line tools are a great metaphor for good software engineering and they follow the Unix Philosophies of:

    Writing simple parts connected by clean interfaces - each tool does just one thing and provides a simple CLI that handles text input from either files or file streams.
    Design programs to be connected to other programs - each tool can be easily connected to other tools to create incredibly powerful compositions.

Following these philosophies has made the simple unix command line tools some of the most widely used software engineering tools - allowing us to create very complex text data processing pipelines from simple command line tools. There’s even a Coursera course on Linux and Bash for Data Engineering.

## How To
- Go to root directory
- To compile : `Make ccwc`
- To run : `./ccwc test.txt`, 
- To get total of lines in a file : `./ccwc -l test.txt`
- To get total of words in a file : `./ccwc -w test.txt`
- To get total of bytes in a file : `./ccwc -c test.txt`