package main

import (
	"fmt"
	"html"
	"io/ioutil"
	"log"
	"net/http"
	"net/smtp"
)

func main() {
	iotest()
	logtest()
	//smtptest()
	//startServer()
	filetest()
}

func iotest() {
	fmt.Println("smtp server")
}

func logtest() {
	log.Println("smtp server executed")
}

func smtptest() {
	hostURL := "smtp.gmail.com"
	hostPort := "587"
	sender := "wildun.dwd@gmail.com"
	receiver := "dvdwd.io@gmail.com"
	password := "kfdsd"
	//authentication
	auth := smtp.PlainAuth(
		"",
		sender,
		password,
		hostURL,
	)
	//email body
	email := []byte("To:" + receiver + "\r\n" + "Subject:" + "Hello" + "\r\n" + "How are you doing")

	err := smtp.SendMail(
		hostURL+":"+hostPort,
		auth,
		sender,
		[]string{receiver},
		email)

	if err != nil {
		fmt.Println("Error:", err)
	}
	log.Println("Email sent")
}

func filetest() {
	body, err := ioutil.ReadFile("password.txt")
	if err != nil {
		log.Fatalf("unable to read file: %v", err)
	}
	fmt.Println(string(body))
}

func startServer() {
	http.HandleFunc("/send", func(w http.ResponseWriter, r *http.Request) {
		fmt.Fprintf(w, "Hello, %q", html.EscapeString(r.URL.Path))
	})
	fmt.Println("Listening on port 8080")
	log.Fatal(http.ListenAndServe(":8080", nil))
}
