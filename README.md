# hello-rpc

This is a sample application that demonstrates the function of Remote Procedure Calls (RPC). 

## Prerequisites

**rpcbind** needs to be installed in the system to run the application. 

Run, 

```
rpcinfo;
```

To verify that rpcbind in installed in the system. If it is not, follow the installation instructions to install it in your system. 

## Installation instructions

Execute the following commands to install rpcbind in your system.

### MacOS
Homebrew can be used to install rpcbind on MacOS environment. 
```
brew install rpcbind
```

### Linux
```
sudo apt-get install rpcbind
```

## Running
1. Deploy the server using,
    ```
    sudo ./sqr-server
    ```
2. To test the remote method, 
    ```
    sudo ./sqr-client <server_address> <number>
    ```
    **<server_address>** - Address of the server  
    **<number>** - Number to be squared  
    