package main

import (
	"fmt"
	"html"
	"log"
	"net/http"
	"net/smtp"
)

func main() {
	IOtest()
	Logtest()
	Smtptest()
	startServer()
}

func iotest() {
	fmt.Println("smtp serve")
}

func logtest() {
	log.Println("smtp server executed")
}

func smtptest() {
	hostURL := "smtp.gmail.com"
	hostPort := "587"
	sender := "wildun.dwd@gmail.com"
	reciever := "dvdwd.io@gmail.com"
	//authentication
	auth := smtp.PlainAuth(
		"",
		sender,
		password,
		hostURL,
	)
}

func startServer() {
	http.HandleFunc("/send", func(w http.ResponseWriter, r *http.Request) {
		fmt.Fprintf(w, "Hello, %q", html.EscapeString(r.URL.Path))
	})
	fmt.Println("Listening on port 8080")
	log.Fatal(http.ListenAndServe(":8080", nil))
}
