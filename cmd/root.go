package cmd

import (
	"os"

	"github.com/spf13/cobra"
)

var rootCmd = &cobra.Command{
	Use:   "prattl",
	Short: "Prattl is a transcription tool",
	Long:  `A transcription tool built with Go and Python. Complete documentation is available at https://github.com/benleem/prattl`,
}

func Execute() {
	if err := rootCmd.Execute(); err != nil {
		// fmt.Println(err)
		os.Exit(1)
	}
}
