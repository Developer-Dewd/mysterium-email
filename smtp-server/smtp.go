package main

import (
	"fmt"
	"html"
	"io/ioutil"
	"log"
	"net/http"
	"net/smtp"
)

var (
	password string = getPassword()
)

func main() {
	// iotest()
	// logtest()
	//smtptest()
	startServer()
	fmt.Println(password)
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
	receiver := "wildun.dwd@gmail.com"
	accountPassword := password
	//authentication
	auth := smtp.PlainAuth(
		"",
		sender,
		accountPassword,
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

func getPassword() string {
	body, err := ioutil.ReadFile("password.txt")
	if err != nil {
		log.Fatalf("unable to read file: %v", err)
	}
	return string(body)
}

func startServer() {
	http.HandleFunc("/send", func(w http.ResponseWriter, r *http.Request) {
		fmt.Fprintf(w, "Email sent")

	})
	http.HandleFunc("/send", func(w http.ResponseWriter, r *http.Request) {
		fmt.Fprintf(w, "Hello, %q", html.EscapeString(r.URL.Path))
		iotest()
		logtest()
	})
	fmt.Println("Listening on port 8080")
	log.Fatal(http.ListenAndServe(":8080", nil))
}
