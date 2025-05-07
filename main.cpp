#include <iostream>
#include <windows.h>
#include "PCANBasic.h"

int main() {
    TPCANStatus status;
    TPCANMsg message;
    TPCANTimestamp timestamp;

    status = CAN_Initialize (PCAN_USBBUS1, PCAN_BAUD_500k);

    if(status != PCAN_ERROR_OK) 
    {
        std::count << "Error initializing CAN" << std::endl;
        return 1;
    }

    std::cout << "CAN Bus Analyzer Started..." << std::endl;
    while(true)
    {
        status = CAN_Read(PCAN_USBBUS1, &message, &timestamp);
        if (status!= PCAN_ERROR_OK)
        {
            std::cout << "ID: " << std::hex << message.ID << "  Data: ";
            for (int i = 0 ; i < message.LEN ; ++i)
            {
                printf("%02X ", message.DATA[i]);
            }
            std::cout << std::endl;
        }// end if
        Sleep(10);
    }
    
    CAN_Uninitialize(PCAN_USBBUS1);
    return 0;
}