FROM golang:1.20

# Set destination for COPY
WORKDIR /app

# Download Go modules
COPY go.mod go.sum ./
RUN go mod download

# Copy the source code. Note the slash at the end, as explained in
# https://docs.docker.com/reference/dockerfile/#copy
# COPY /src/ /app/src/
COPY /handler/ /app/handler/
COPY /templates/ /app/templates/
COPY /transcribe/ /app/transcribe/
COPY *.go ./

# Build
RUN CGO_ENABLED=0 GOOS=linux go build -o /prattl

# Optional:
# To bind to a TCP port, runtime parameters must be supplied to the docker command.
# But we can document in the Dockerfile what ports
# the application is going to listen on by default.
# https://docs.docker.com/reference/dockerfile/#expose
EXPOSE 8080

# Run
CMD ["/prattl"]