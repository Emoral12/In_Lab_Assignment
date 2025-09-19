// GameInstance .cpp file

#include "ScoreGameInstance.h"

// this is not as annotated cuz what am i even meant to annotate? the cpp file will simply do what the header allows it to do
// look at the other file for annotations that add depth to this simple task

void UScoreGameInstance::AddScore(int32 Points) 
{
	TotalScore += Points;

	// debug text to see if function is even going through or not
	UE_LOG(LogTemp, Log, TEXT("You got a gem! Your Score is now: %d"), TotalScore);
}

int32 UScoreGameInstance::GetScore() const
{
	return TotalScore;
}

void UScoreGameInstance::ResetScore()
{
	TotalScore = 0;
}
