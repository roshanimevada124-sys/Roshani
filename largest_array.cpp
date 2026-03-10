{\rtf1\ansi\ansicpg1252\cocoartf2868
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww29200\viewh18460\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
using namespace std;\
\
int main() \{\
    int n;\
\
    cout << "Enter number of elements: ";\
    cin >> n;\
\
    int arr[n];\
\
    cout << "Enter the elements:\\n";\
    for(int i = 0; i < n; i++) \{\
        cin >> arr[i];\
    \}\
\
    int largest = arr[0];\
\
    for(int i = 1; i < n; i++) \{\
        if(arr[i] > largest) \{\
            largest = arr[i];\
        \}\
    \}\
\
    cout << "Largest element is: " << largest;\
\
    return 0;\
\}}