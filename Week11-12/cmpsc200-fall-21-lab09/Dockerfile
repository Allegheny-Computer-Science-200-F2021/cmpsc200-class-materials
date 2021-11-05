FROM ubuntu:20.04
RUN apt-get update && \
apt-get install -y x11vnc xvfb && \
apt-get install -y openjdk-8-jdk && \
mkdir ~/.vnc && \
x11vnc -storepasswd 1234 ~/.vnc/passwd
COPY entrypoint.sh /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]
RUN chmod +x /entrypoint.sh 
WORKDIR /root
