### **Unit 1: Introduction (8 Questions)**
1. Assume six devices are arranged in a **mesh topology**; how many ports are needed for each device, and how many physical links are needed in full duplex mode?
2. For each of the following four networks, discuss the consequences if a connection fails: (i) Five devices arranged in a mesh topology (ii) Five devices arranged in a bus topology (iii) Five devices arranged in a ring topology.
3. Map the following to a suitable **layer of the OSI model**: (i) Route determination (ii) Interface to transmission media (iii) Provides access to the end user.
4. Match the following to one or more **layers of the TCP/IP model**: (i) Transmission of bit stream across physical medium (ii) Defines frames (iii) Reliable process-to-process message delivery (iv) Route Selection (v) Provides user services such as email and file transfer.
5. Briefly state the functionality of the following **devices/protocols** and mention the layer(s) on which each operates: (i) TCP, (ii) IP, (iii) UDP, (iv) ICMP, (v) DNS, (vi) SMTP, (vii) Switch, (viii) Router, (ix) HTTP, (x) ARP, (xi) Hub, (xii) RARP.
6. Draw the layered architecture of the **TCP/IP model** explaining the services provided by each layer; given an example network, if we change the LAN technology, which layers need to be changed?
7. A system has an *n*-layer protocol hierarchy where applications generate messages of length *M* bytes, and at each layer, an *h*-byte header is added; what fraction of the network bandwidth is filled with headers?
8. Explain **simplex, half-duplex, and full-duplex** modes of communication.

### **Unit 2: Physical Layer (11 Questions)**
9. Compute the **Nyquist Sampling rate** for a signal with a bandwidth of 200 KHz if the lowest frequency is 100 KHz.
10. State **Shannon's theorem**, and determine the maximum achievable data rate for a channel with a bandwidth of 5 MHz and an SNR of 40 dB.
11. What is the bandwidth of an analog signal that can be decomposed into five sine waves with frequencies at 10, 210, 100, 130 and 150 Hz?
12. What are the different types of **transmission impairment**, and how are they handled?
13. Explain the principle behind the working of **optical fiber cable**.
14. Five channels each with a 100 KHz bandwidth are to be multiplexed together; what is the minimum bandwidth of the link if there is a need for a **guard band** of 10 KHz bandwidth between the channels?
15. Consider a synchronous **TDM system** with *n* input lines where the duration of the input frame is *T*; explain the working of this system with a diagram.
16. In a given modulation scheme, there are 4 amplitude levels and 16 phase levels, and the bit rate is 72 Kbps; calculate the number of bits per baud and the **baud rate**.
17. Which characteristics of the carrier signal are changed to represent the digital signal in **ASK, FSK, PSK and QAM**, and which is most susceptible to noise?
18. Draw the **pulse diagram** for the bit stream 0011001100110011 and calculate the average signal rate for: i. Manchester, ii. Differential Manchester, iii. Polar Return to Zero.
19. Differentiate between **Unipolar and Bipolar** Line Coding Schemes.

### **Unit 3: Data Link and MAC Layer (11 Questions)**
20. What are the three **flow control/Error recovery protocols** used for a noisy channel, and how do Go-Back-N ARQ and Selective Repeat ARQ compare?
21. Consider a **selective repeat sliding window protocol** that uses a frame size of 1 KB on a 1.5 Mbps link with a latency of 50 msec; to achieve 60% link utilization, what is the minimum number of bits required to represent the sequence number field?
22. Consider a **Go-Back-N ARQ protocol** (window size 4, sequence 0-7) where frames 0-3 are received and ACKed, but frame 4 is lost; explain how the sender and receiver handle the loss and calculate the valid sequence numbers.
23. Suppose character encoding uses A: 11010111, B: 11101101, FLAG: 01111110, ESC: 10100011; show the transmitted bit sequence for the frame `A B ESC B ESC ESC FLAG` using **byte stuffing**.
24. If a bit string 111011111011111101 is to be transmitted, what is the string actually transmitted after **bit stuffing**?
25. A 12-bit even-parity **Hamming code** (111001001111) arrives at a receiver; what was the original message value assuming no more than 1 bit is in error?
26. Generate the even parity **Hamming Code** for data bits 1100100 and show the steps.
27. A message M(x) = 1101101101 is transmitted using the **CRC method** with generator polynomial $x^3 + 1$; compute the transmitted bit string and show how an error is detected if the fifth bit is inverted.
28. Two CSMA/CD stations are trying to transmit long files and contend for the channel; explain the functionality of the **binary exponential backoff algorithm** used here.
29. What is the bit pattern of the **preamble** used in an Ethernet frame, and what are the reasons for choosing a minimum data size of 46 bytes?
30. Name the protocols used to map an **IP address to a MAC address** and a MAC address to an IP address.

### **Unit 4: Network Layer (12 Questions)**
31. Explain the difference between **packet switching and circuit switching**; for a 10000-byte message on a 10 kbps network (packet size 1000 bytes, header 100 bytes), how many packets will be formed?
32. Give any three differences between a **virtual circuit and a datagram subnet**.
33. What is the use of the **options field** in the Internet Protocol (IP) Header?
34. Suppose a 9000-byte IP packet is forwarded across a link with a 1500-byte **Maximum Transmission Unit (MTU)**; how many fragments will be created and what are their lengths?
35. Explain the significance of the following **special IP addresses**: (i) 127.0.0.0 (ii) 255.255.255.255 (iii) 0.0.0.0.
36. Consider the **IP address** 184.86.92.182; find its class, its subnet mask if divided into 8 subnets, the network address, and the CIDR prefix length.
37. Given the IP address 192.168.0.0/24, create two subnets (Subnet 1: 50 hosts, Subnet 2: 30 hosts) and provide the first/last IP, **subnet mask**, and number of host/network bits for each.
38. What is the result of applying **zero compression** on the IPv6 address FE80:0000:0000:0000:0000:BC21:0000:FFFF?
39. Consider a subnet using **distance vector routing** where router C receives delay vectors from B, D, and E; give the new routing table for C given the measured delays to those neighbors.
40. What is the **Count to infinity problem**, and can you explain it briefly with a suitable example?
41. Using **Dijkstra’s algorithm**, illustrate the step-by-step process of determining the shortest path from router A to router E in a given network graph.
42. A router has **CIDR entries** (e.g., 135.46.56.0/22 to Interface 0); find the next hop selected by the router for specific incoming IP addresses like 135.46.63.10.

### **Unit 5: Transport and Application Layer (8 Questions)**
43. Compare and contrast **TCP and UDP** in terms of their connection type, packet sequence handling, and acknowledgments.
44. Explain the **UDP header** with a diagram and state the minimum and maximum size of a UDP segment.
45. Explain the purpose of the following **TCP header fields/flags**: URG, PSH, SYN, and FIN.
46. Explain the process of **connection establishment and connection release** used for the Transmission Control Protocol (TCP).
47. What do you mean by **well-known ports**, and what are the port numbers assigned to HTTP and SMTP?
48. Justify the statement that HyperText Transfer Protocol (**HTTP**) is a stateless protocol.
49. What is a **URL**, and what are its three parts (explain with an example)?
50. How are **IP addresses resolved** from a given URL using DNS?