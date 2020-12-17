FROM ubuntu:18.04

WORKDIR /code

# Upgrade installed packages
RUN apt-get update && apt-get upgrade -y && apt-get clean
RUN apt-get install -y git vim tmux curl \
    && apt-get install  -y  \
    gcc-5 g++-5 gcc-5-base
RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-5 100 \
    && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-5 100

# (...)

# Python package management and basic dependencies
RUN apt-get install -y python3.7 python3.7-dev python3.7-distutils

# Register the version in alternatives
RUN update-alternatives --install /usr/bin/python python /usr/bin/python3.7 1

# Set python 3 as the default python
RUN update-alternatives --set python /usr/bin/python3.7

# Upgrade pip to latest version
RUN curl -s https://bootstrap.pypa.io/get-pip.py -o get-pip.py && \
    python get-pip.py --force-reinstall && \
    rm get-pip.py

# (...)


# Install Selenium
#COPY ./requirements.txt /requirements.txt
#RUN pip install -r /requirements.txt
