package handler

import (
	"encoding/json"
	"net/http"
	render "prattl/templates"
	"prattl/transcribe"
)

func Home(w http.ResponseWriter, r *http.Request) {
	render.RenderTemplate(w, r, "index")
}

func Transcribe(w http.ResponseWriter, r *http.Request) {
	transcriptionJSON := transcribe.TranscribeWhisperApi()

	// returning json
	w.Header().Set("Content-Type", "application/json")
	err := json.NewEncoder(w).Encode(&transcriptionJSON)
	if err != nil {
		http.Error(w, err.Error(), http.StatusBadRequest)
		return
	}
}
