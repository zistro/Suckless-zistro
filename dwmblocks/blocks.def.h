// Modify this file to change what commands output to your statusbar, and recompile using the make command.                                  
static const Block blocks[] = {                                                                                                             
    /*Icon*/        		    /*Command*/ /*Interval*/ /*Signal*/                   
 
    {"^c#a3be8c^   ",      "sb-update",    3600,   0},
    {"^c#bf6a6a^ CPU ",     "sb-loadavg",   2, 		  0},                                             
    {"^c#d08770^  ",       "sb-memory", 		2, 		  0}, 
    {"^c#b48ead^  ",       "sb-network",   1,		  0},
    {"^c#81a1c1^ VOL ",     "sb-volume",    0, 		  5},                                                               
    {"^c#8fbcbb^  ",       "sb-date",      60, 		0},                                                                            
};                                                                                                                                          

// sets delimiter between status commands. NULL character ('\0') means no delimiter.                                                         
static char delim[] = " ";                                                                                                                  
static unsigned int delimLen = 5; 

