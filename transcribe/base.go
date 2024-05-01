package transcribe

import (
	"bytes"
	"fmt"
	"os/exec"
)

func TranscribeLocal(base64 string) {
	cmd := exec.Command("python3", "transcribe/transcribe.py", base64)
	var out bytes.Buffer
	var stderr bytes.Buffer
	cmd.Stdout = &out
	cmd.Stderr = &stderr
	err := cmd.Run()
	if err != nil {
		fmt.Println(fmt.Sprint(err) + ": " + stderr.String())
		return
	}
	fmt.Print("Result: " + out.String())
}
